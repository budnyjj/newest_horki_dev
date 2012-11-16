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
    if ($this->timeIsOver(CACKLE_TIMER)) {
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
   * Database connection function.
   */
  public function dbConnect($sql, $insert=FALSE, $table='comment', $array=array()) {
    if ($insert == FALSE) {
      $r = db_query($sql);
      return $r;
    }
    else {
      $id = db_insert($table)
      ->fields($array)
      ->execute();
      return $id;
    }
  }
  /**
   * Get request function.
   */
  public function curl($url) {
    $ch = curl_init();
    curl_setopt($ch, CURLOPT_URL, $url);
    curl_setopt($ch, CURLOPT_USERAGENT, "Mozilla/5.0 (Windows; U; Windows NT 5.1; en-US; rv:1.8.1.6) Gecko/20070725 Firefox/2.0.0.6");
    curl_setopt($ch, CURLOPT_TIMEOUT, 60);
    curl_setopt($ch, CURLOPT_FOLLOWLOCATION, 1);
    curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
    $result = curl_exec($ch);
    curl_close($ch);
    return $result;
  }
  /**
   * Comment sync function.
   */
  public function commentSync($account_api_key, $site_api_key, $cackle_last_comment=0) {
    $cackle_last_comment = variable_get('cackle_last_comment', 0);
    $params1 = "accountApiKey=$account_api_key&siteApiKey=$site_api_key&id=$cackle_last_comment";
    $host = "cackle.me/api/comment/list?$params1";
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
  public function insertComm($comment) {
    $status;
    if ($comment['status'] == "APPROVED") {
      $status = 1;
    }
    elseif ($comment['status'] == "PENDING" || $comment['status'] == "REJECTED") {
      $status = 0;
    }
    elseif ($comment['status'] == "SPAM") {
      $status = 0;
    }
    else {
      $status = 0;
    }
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
      $last_id = $this->dbConnect('sql', TRUE, 'comment', $commentdata);
      $this->syncMessage($comment['message'], $last_id);
      variable_set('cackle_last_comment', $comment_id);
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
    $this->dbConnect("sql", TRUE, 'field_data_comment_body', $sync_message_data);
  }
  /**
   * Push comments.
   */
  public function pushComments($response) {
    $obj = $response['comments'];
    if ($obj) {
      foreach ($obj as $comment) {
        $this->insertComm($comment);
      }
    }
  }
  /**
   * Html template function for each comment for SEO.
   */
  public function cackleComment($comment) {?>
    <li id="cackle-comment-<?php echo $comment->cid; ?>">
      <div id="cackle-comment-header-<?php echo $comment->cid; ?>" class="cackle-comment-header">
        <cite id="cackle-cite-<?php echo $comment->cid; ?>">
          <a id="cackle-author-user-<?php echo $comment->cid; ?>" href="<?php echo $comment->homepage; ?>" target="_blank" rel="nofollow"><?php echo $comment->name; ?></a>
        </cite>
      </div>
      <div id="cackle-comment-body-<?php echo $comment->cid; ?>" class="cackle-comment-body">
        <div id="cackle-comment-message-<?php echo $comment->cid; ?>" class="cackle-comment-message">
          <?php echo $comment->comment_body_value; ?>
        </div>
      </div>
    </li>
    <?php 
  }
  /**
   * Genarating some html and cackle widget's js.
   */
  public function cackleDisplayComments() {
    ob_start();
    ?>
    <div id="mc-container">
      <div id="mc-content">
        <ul id="cackle-comments">
        <?php 
    if (arg(0) == 'node' && is_numeric(arg(1))) {
      $nodeid = arg(1);
    }
    $this->listComments($nodeid);?> 
        </ul>
      </div>
    </div>
    <script type="text/javascript">
      var mcSite = '<?php echo variable_get('cackle_mc_site', 1); ?>';
      var mcChannel = '<?php echo $nodeid ?>';
      document.getElementById('mc-container').innerHTML = '';
      (function() {
        var mc = document.createElement('script');
        mc.type = 'text/javascript';
        mc.async = true;
        mc.src = 'http://cackle.me/mc.widget-min.js';
        (document.getElementsByTagName('head')[0] || document.getElementsByTagName('body')[0]).appendChild(mc);
      })();
    </script>
    <?php return $debug = ob_get_clean();
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
    foreach ($obj as $comment) {
      $this->cackleComment($comment);
    }
  }
}
