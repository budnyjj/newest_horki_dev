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
 
function dev_preprocess_views_exposed_form(&$vars, $hook)
{
  // only alter the required form based on id
  if ($vars['form']['#id'] == 'views-exposed-form-blocks-page-1') {
    // Change the text on the submit button
    $vars['form']['submit']['#value'] = t('Search');
    // Rebuild the rendered version (submit button, rest remains unchanged)
    unset($vars['form']['submit']['#printed']);
    $vars['button'] = drupal_render($vars['form']['submit']);
  }
}

function dev_preprocess_node(&$variables)
{
  /* Views count */
  $query = db_select('jstats_node', 'jn')
    ->fields('jn', array('recentcount'))
    ->condition('jn.nid', $variables['nid'], '=');
  $result = $query->execute()->fetchField();
  $views_translated = "";
  if ($result > 0)
    {
      $penultimate_digit = (int) (($result % 100) / 10);
      if ($penultimate_digit == 1)
	{
	  $views_translated = " праглядаў";
	}
      else
	{
	  $last_digit = $result % 10;		
	  switch	($last_digit)
	    {
	    case 1:
	      $views_translated = " прагляд";
	      break;
	    case 2:
	    case 3:
	    case 4:
	      $views_translated = " прагляды";
	      break;
	    case 5:
	    case 6:
	    case 7:
	    case 8:
	    case 9:
	    case 0:
	      $views_translated = " праглядаў";
	      break;
	    }
	}
    }	
  $variables['node_views_cntr'] = $result . $views_translated;

  /* Comments counter */
  $comments_translated = "";
  $comments_count = 0;
	
  if (isset($variables['comment_count'])) 
    {
      $comments_count = $variables['comment_count'];
    }

  if ($comments_count > 0)
    {
      $penultimate_digit = (int) (($comments_count % 100) / 10);
      if ($penultimate_digit == 1)
	{
	  $comments_translated = " каментароў";
	}
      else
	{
	  $last_digit = $comments_count % 10;		
	  switch	($last_digit)
	    {
	    case 1:
	      $comments_translated = " каментар";
	      break;
	    case 2:
	    case 3:
	    case 4:
	      $comments_translated = " каментары";
	      break;
	    case 5:
	    case 6:
	    case 7:
	    case 8:
	    case 9:
	    case 0:
	      $comments_translated = " каментароў";
	      break;
	    }
	}
    }	
	
  $variables['node_comments_cntr'] = $comments_count . $comments_translated;

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

