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
              $vars['form']['submit']['#value'] = t('Пошук');
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
	$comments_count = $variables['comment_count'];

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

}
