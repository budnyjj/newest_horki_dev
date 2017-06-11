<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

function horki2_preprocess_views_exposed_form(&$vars, $hook) {
  // only alter the required form based on id
  if ($vars['form']['#id'] == 'views-exposed-form-blocks-page-1') {
    // Change the text on the submit button
    $vars['form']['submit']['#value'] = t('Search');
    // Rebuild the rendered version (submit button, rest remains unchanged)
    unset($vars['form']['submit']['#printed']);
    $vars['button'] = drupal_render($vars['form']['submit']);
  }
}

function horki2_preprocess_node(&$variables) {
  /* Views count */
  $query = db_select('jstats_node', 'jn')
    ->fields('jn', array('recentcount'))
    ->condition('jn.nid', $variables['nid'], '=');
  $views_count = intval($query->execute()->fetchField());
  if ($views_count > 0) {  
    $views_icon = '<img src="/sites/default/files/default_images/view-icon.png" />';
    $variables['node_views_cntr'] = '<span class="views-count">' . $views_icon . $views_count . '</span>';
  }

  /* Comments counter */
  $comments_count = 0;
  if (isset($variables['comment_count'])) {
    $comments_count = $variables['comment_count'];
  }
  if ($comments_count > 0) {
    $comments_icon = '<img src="/sites/default/files/default_images/comment-icon.png" />';	
    $variables['node_comments_cntr'] = '<span class="comments-count">' . $comments_icon . $comments_count . '</span>';
  }
  
  /* Correct ads taxonomy links */
  $content = &$variables['content'];
  if (array_key_exists('field_ads_type', $content)) {
    foreach ($content['field_ads_type']['#items'] as $index => $info) {
      $options = array(
		       'absolute' => TRUE,
		       'query' => array('field_ads_type_tid' => $info['tid'])
		       );
      $content['field_ads_type'][$index]['#href'] = url('abvestki.html', $options);
    }
  }
  if (array_key_exists('field_ads_topic', $content)) {
    foreach ($content['field_ads_topic']['#items'] as $index => $info) {
      $options = array(
		       'absolute' => TRUE,
		       'query' => array('field_ads_topic_tid' => $info['tid'])
		       );
      $content['field_ads_topic'][$index]['#href'] = url('abvestki.html', $options);
    }
  }
  if (array_key_exists('field_ads_placement', $content)) {
    foreach ($content['field_ads_placement']['#items'] as $index => $info) {
      $options = array(
		       'absolute' => TRUE,
		       'query' => array('field_ads_placement_tid' => $info['tid'])
		       );
      $content['field_ads_placement'][$index]['#href'] = url('abvestki.html', $options);
    }
  }

  /* Make local problem status */

  if (array_key_exists('field_problem_status', $content)) {
    $problem_status = $content['field_problem_status'];
    $problem_status_text = '<span class="';

    $problem_status_value = mb_strtolower($problem_status[0]['#markup']);
    switch ($problem_status_value)
      {
      case "не вырашана":
	$problem_status_text .= 'local-problem-red';
	break;
      case "вырашана":
	$problem_status_text .= 'local-problem-green';
	break;
      }
    $problem_status_text .= '">';
    $problem_status_text .= $problem_status_value;
    $problem_status_text .= '</span>';
    $variables['local_problem_status'] = $problem_status_text;
  }
}
