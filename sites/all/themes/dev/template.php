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
	$query = db_select('jstats_node', 'jn')
						->fields('jn', array('recentcount'))
						->condition('jn.nid', $variables['nid'], '=');
	$result = $query->execute();
	$variables['node_views_cntr'] = $result->fetchField();
}
