<?php
/**
 * @file
 * Cackle social comments.
 */

define('CACKLE_TIMER', 300);
class Cackle {
  /**
   * Initializing comment sync.
   */
  public function __construct() {
    if ($this->timeIsOver(CACKLE_TIMER) && function_exists('curl_init')) {
      $this->commentSync(variable_get('cackle_account_api_key', NULL), variable_get('cackle_site_api_key', NULL));
    }
  }

  /**
   * Timer function.
   */
  public function timeIsOver($cron_time) {
    $get_last_time = variable_get('cackle_last_time', 1);
    $now = time();
    if ($get_last_time == NULL) {
      variable_set('cackle_last_time', $now);
      return time();
    }
    else {
      if ($get_last_time + $cron_time > $now) {
        return FALSE;
      }
      if ($get_last_time + $cron_time < $now) {
        variable_set('cackle_last_time', $now);
        return $cron_time;
      }
    }
  }

  /**
   * Get request function.
   */
  public function curl($url) {
    $ch = curl_init();
    $path = drupal_get_path('module', 'cackle') . '/cackle.info';
    $info = drupal_parse_info_file($path);
    $drupal_version = VERSION;
    $cackle_version = $info["core"];
    $php_version = phpversion();
    $useragent = "Drupal $drupal_version; cackle module $cackle_version; PHP $php_version";
    curl_setopt($ch, CURLOPT_USERAGENT, $useragent);
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_TIMEOUT, 60);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    $result = curl_exec($ch);
    curl_close($ch);
    return $result;
  }

  public function to_i($number_to_format){
    return number_format($number_to_format, 0, '', '');
  }

  /**
   * Comment sync function.
   */
  public function commentSync($account_api_key, $site_api_key, $cackle_last_modified = 0) {
    $cackle_last_modified = $this->to_i(variable_get('cackle_last_modified',0));
    $params1 = "accountApiKey=$account_api_key&siteApiKey=$site_api_key&modified=$cackle_last_modified";
    $host = "cackle.me/api/comment/mutable_list?$params1";
    $response = $this->curl($host);
    $response = $this->cackleJsonDecodes($response);
    $this->pushComments($response);
  }

  /**
   * Json decodes function.
   */
  public function cackleJsonDecodes($response) {
    $response_without_jquery = str_replace('jQuery(', '', $response);
    $response = str_replace(');', '', $response_without_jquery);
    $obj = json_decode($response, TRUE);
    return $obj;
  }

  /**
   * StartsWith function.
   */
  public function startsWith($haystack, $needle) {
    $length = drupal_strlen($needle);
    return (drupal_substr($haystack, 0, $length) === $needle);
  }

  /**
   * Insert each comment to database with parents.
   */
  public function insertComm($comment, $status) {
    if ($this->startsWith($comment['channel'], 'http')) {
      $url = 0;
    }
    else {
      $url = $comment['channel'];
    }
    if ($comment['author'] != NULL) {
      $name = $comment['author']['name'];
      $mail = $comment['author']['email'];
      $homepage = $comment['author']['www'];
      $author_avatar = $comment['author']['avatar'];
      $author_provider = $comment['author']['provider'];
      $author_anonym_name = NULL;
      $anonym_email = NULL;
    }
    else {
      $homepage = "";
      $name = $comment['anonym']['name'];
      $mail = $comment['anonym']['email'];
    }
    $get_parent_local_id = 0;
    $comment_id = $comment['id'];
    if ($comment['parentId']) {
      $comment_parent_id = $comment['parentId'];
      $rb = db_query("SELECT cid FROM {comment} WHERE user_agent = :user_agent", array(
        ':user_agent' => "Cackle:" . $comment_parent_id,
      ));
      foreach ($rb as $obj2) {
        $get_parent_local_id = $obj2->cid;
      }
    }
    $commentdata = array(
      'nid' => $url,
      'thread' => $url,
      'mail' => $mail,
      'homepage' => $homepage,
      'name' => $name,
      'created' => $comment['created'] / 1000,
      'hostname' => $comment['ip'],
      'subject' => '',
      'status' => $status,
      'user_agent' => 'Cackle:' . $comment['id'],
      'pid' => $get_parent_local_id,
    );
    if ($commentdata) {
      $last_id = db_insert('comment')
      ->fields($commentdata)
      ->execute();
      $this->syncMessage($comment['message'], $last_id);
      variable_set('cackle_last_comment', $comment_id);
      if ($comment['modified'] > variable_get('cackle_last_modified', NULL)) {
          variable_set('cackle_last_modified', $comment['modified']);
      }
    }
  }

  /**
   * Sync messages separately.
   */
  public function syncMessage($message, $last_id) {
    $nid = arg(1);
    $node = node_load($nid);
    $bundle = "comment_node_" . $node->type;
    $sync_message_data = array(
      'entity_type' => 'comment',
      'bundle' => $bundle,
      'entity_id' => $last_id,
      'revision_id' => $last_id,
      'delta' => 0,
      'language' => $node->language,
      'comment_body_value' => $message,
      'comment_body_format' => 'filtered_html',
    );
    db_insert('field_data_comment_body')
      ->fields($sync_message_data)
      ->execute();
  }

  function comment_status_decoder($comment) {
    $status;
    if (strtolower($comment['status']) == "approved") {
      $status = 1;
    }
    elseif (strtolower($comment['status'] == "pending") || strtolower($comment['status']) == "rejected") {
      $status = 0;
    }
    elseif (strtolower($comment['status']) == "spam") {
      $status = 0;
    }
    elseif (strtolower($comment['status']) == "deleted") {
      $status = 0;
    }
    return $status;
  }

  /**
   * Push comments.
   */
  public function pushComments($response) {
    $obj = $response['comments'];
    if ($obj) {
      foreach ($obj as $comment) {
          if ($comment['id'] > variable_get('cackle_last_comment', NULL)) {
              $this->insertComm($comment, $this->comment_status_decoder($comment));
          } else {
              if ($comment['modified'] > variable_get('cackle_last_modified', 0)) {
                  $this->update_comment_status($comment['id'], $this->comment_status_decoder($comment), $comment['modified'], $comment['message'] );
              }
          }

      }
    }
  }

  function update_comment_status($comment_id, $status, $modified, $comment_content) {
    $status_data = array(
      'status' => $status,
    );
    $comment_data = array(
      'comment_body_value' => $comment_content,
    );
    db_update('comment')
      ->fields($status_data)
      ->condition('user_agent', "Cackle:$comment_id")
      ->execute();
    $cid = db_select('comment','cid')
      ->fields('cid')
      ->condition('user_agent', "Cackle:$comment_id")
      ->execute()
      ->fetchAssoc();

    db_update('field_data_comment_body')
      ->fields($comment_data)
      ->condition('entity_id', $cid)
      ->execute();
    variable_set('cackle_last_modified', $modified); //saving last comment id to database
    }

  /**
   * Get Local Comments.
   */
  public function getLocalComments($nodeid) {
    $get_all_comments = db_query("SELECT * FROM {comment} as t1 LEFT JOIN {field_data_comment_body} AS t2 ON (t1.cid = t2.entity_id) WHERE t1.nid = :nod_id", array(
      ':nod_id' => $nodeid,
    ));
    return $get_all_comments;
  }

  /**
   * List comments.
   */
  public function listComments($nodeid) {
    $obj = $this->getLocalComments($nodeid);
  }
}
