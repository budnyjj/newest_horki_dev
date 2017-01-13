<?php
/**
 * @file
 * Mobile Navigation Administration page.
 */

/** 
 * FORMS DEFINITIONS
*/
/**
 * Mobile navigation admin form definition.
 */
function mobile_navigation_configuration_form($form, &$form_state) {
  module_load_include('inc', 'mobile_navigation', 'mobile_navigation');
  drupal_add_js(drupal_get_path('module', 'mobile_navigation') . '/mobile_navigation.admin.js', array('preprocess' => FALSE));
  $menu_id = arg(4);
  $menu = menu_load($menu_id);
  $display = arg(7);
  drupal_set_title(t('Configuration for @menu on @display display.', array(
      '@menu' => $menu['title'],
      '@display' => $display,
  )));
  $did = db_query('SELECT id FROM {mobile_navigation_displays} WHERE name = :display', 
    array(':display' => $display)
  )->fetchField();
  $conf = db_query('SELECT * FROM {mobile_navigation_configurations} WHERE menu = :menu AND display = :display', 
    array(':menu' => $menu_id, ':display' => $did)
  )->fetchAssoc();
  $form['markup'] = array(
    '#markup' => t('Welcome to this Mobile Navigation configuration page.<br />'.
      'This settings are aplied to <strong>@menu</strong> on the <strong>@display</strong> display.<br />'.
      'Add this class <strong>@class</strong> to any element in the page, to make it a clickable trigger for showing/hiding this menu.'.
      '.',
      array(
        '@menu' => $menu['title'],
        '@display' => $display,
        '@class' => arg(4) . '_' . $display . '-trigger'
      )
    ),
  );
  $form['mobile_navigation_menu_selector'] = array(
    '#type' => 'textfield',
    '#title' => t('Hide this selection'),
    '#description' => t('JQuery selector for original menu or anything that you need to hide when this display configuration is anabled.</br>'.
              'Remember JQuery allows for multiple coma separated selectors.'),
    '#size' => 40,
    '#maxlength' => 128,
    '#default_value' => $conf['menu_selector']
  );
  $form['mobile_navigation_navigation_plugin'] = array(
    '#title' => 'Navigation Plugin',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('Mobile navigation plugin for the menu navigation.'),
  );
  $form['mobile_navigation_navigation_plugin']['mobile_navigation_plugin'] = array(
    '#type' => 'radios',
    '#title' => t('Plugin'),
    '#default_value' => $conf['plugin'],
    '#options' => mobile_navigation_get_plugins(),
    '#description' => t('Type of mobile navigation plugin.'),
  );
  /********** Accordion behaviours fieldset ********/
  $form['mobile_navigation_navigation_plugin']['mobile_navigation_accordion_behaviors'] = array(
    '#title' => 'Only Accordion Behaviors',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('Only accordion plugin behaviors.'),
  );
  /*** end of accordion behaviors ***/
  $form['mobile_navigation_navigation_plugin']['mobile_navigation_accordion_behaviors']['mobile_navigation_expand_only_active_trail'] = array(
    '#title' => t('Expand only active trail'),
    '#type' => 'checkbox',
    '#description' => t('When the user expands an item that has sub-items, they can presistently stay oppened or it can be that any item that is not in the current active trail will automaticaly close.'),
    '#default_value' => $conf['expand_only_active_trail'], 
  );
  $form['mobile_navigation_show_hide_effect'] = array(
    '#title' => 'Mobile Navigation Show\'n Hide Effect',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
  );
  $form['mobile_navigation_show_hide_effect']['mobile_navigation_show_hide_effect'] = array(
    '#type' => 'radios',
    '#title' => t('Menu Effect'),
    '#default_value' => $conf['show_hide_effect'], 
    '#options' => mobile_navigation_get_effects(),
    '#description' => t('Choose an Effect to use for the mobile menu.'),
  );
  $form['mobile_navigation_settings'] = array(
    '#title' => 'Mobile Navigation Settings',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('General settings for visual aspects and behavior of the menu.'),
  );
  $form['mobile_navigation_settings']['mobile_navigation_menu_width'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Width (%)'),
    '#description' => t('Width of the mobile menu. (%)'),
    '#size' => 5,
    '#maxlength' => 5,
    '#required' => TRUE,
    '#default_value' => $conf['menu_width'],
  );
  $form['mobile_navigation_settings']['mobile_navigation_collapse_by_default'] = array(
    '#title' => t('Collapsed by default'),
    '#type' => 'checkbox',
    '#description' => t('Have the menu collapsed when initialized.'),
    '#default_value' => $conf['collapse_by_default'],
  );
  $form['mobile_navigation_settings']['mobile_navigation_use_button'] = array(
    '#title' => t("Use a button on a block to show and hide the menu."),
    '#type' => 'checkbox',
    '#default_value' => $conf['use_button'],
  );
  $form['mobile_navigation_settings']['mobile_navigation_button_title_fieldset'] = array(
    '#title' => 'Button Title',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('A block will be generated.<br /> Don\'t forget to go to Admin > Structure > Blocks to place it on a page region.'),
  );
  $form['mobile_navigation_settings']['mobile_navigation_button_title_fieldset']['mobile_navigation_button_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Title on Tab Handler'),
    '#description' => t('Title to show on the button.'),
    '#size' => 40,
    '#maxlength' => 128,
    '#default_value' => $conf['button_title'],
    '#field_suffix' => t("<a id='button-title-three-bars' href='#'>Append &#9776; character.</a>"),
  );
  $form['mobile_navigation_settings']['mobile_navigation_use_handler'] = array(
    '#title' => t("Use tab handler on menu. A label atached to the menu, that shows/hides menu on click."),
    '#type' => 'checkbox',
    '#default_value' => $conf['use_handler'],
  );
  $form['mobile_navigation_settings']['mobile_navigation_handler_title_fieldset'] = array(
    '#title' => 'Handler Title',
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('Title to show on Tab handler.'),
  );
  $form['mobile_navigation_settings']['mobile_navigation_handler_title_fieldset']['mobile_navigation_handler_title'] = array(
    '#type' => 'textfield',
    '#title' => '',
    '#description' => t('Title to show on the tab handler.'),
    '#size' => 40,
    '#maxlength' => 127,
    '#default_value' => $conf['handler_title'],
    '#field_suffix' => t("<a id='handler-title-three-bars' href='#'>Append &#9776; character.</a>"),
  );
  $form['mobile_navigation_settings']['mobile_navigation_use_mask'] = array(
    '#title' => t('Use mask over contents when mobile menu is openned'),
    '#type' => 'checkbox',
    '#description' => t('Block the page contents when the menu gets openned and place a clickable mask over to close the menu when it is clicked.'),
    '#default_value' => $conf['use_mask'],
  );
  $form['mobile_navigation_settings']['mobile_navigation_use_classes'] = array(
    '#title' => t('Add Special classes to mobile menu'),
    '#type' => 'checkbox',
    '#description' => t('Special Classes are added to Menu Items according to their position and level. (Like for instance: Item-1, Item-2-1, Item-3-1-1, etc.)'),
    '#default_value' => $conf['use_classes'],
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit Changes'),
  );
  return $form;
}

/**
 * Submit function for Displays form.
 */
function mobile_navigation_configuration_form_submit($form, &$form_state) {
  $menu = arg(4);
  $display = arg(7);
  $display_id = get_display_id_from_name($display);  
  $values = $form_state['values'];
  $data = array(
    'menu' => $menu,
    'menu_selector' => $values["mobile_navigation_menu_selector"],
    'display' => $display_id,
    'plugin' => $values["mobile_navigation_plugin"],
    'expand_only_active_trail' => $values["mobile_navigation_expand_only_active_trail"],
    'show_hide_effect' => $values["mobile_navigation_show_hide_effect"],
    'collapse_by_default' => $values["mobile_navigation_collapse_by_default"],
    'menu_width' => $values["mobile_navigation_menu_width"],
    'use_button' => $values["mobile_navigation_use_button"],
    'button_title' => $values["mobile_navigation_button_title"],
    'use_handler' => $values["mobile_navigation_use_handler"],
    'handler_title' => $values["mobile_navigation_handler_title"],
    'use_mask' => $values["mobile_navigation_use_mask"],
    'use_classes' => $values["mobile_navigation_use_classes"],
  );
  $configuration_id = get_configuration_id($menu, $display_id);
  $updated = db_update('mobile_navigation_configurations')
    ->fields($data)
    ->condition('id', $configuration_id, '=')
    ->execute();
  drupal_set_message(t('Configuration for display "@display" on menu "@menu" has been updated.', array(
    '@display' => $display,
    '@menu' => $menu,
  )));
}

/**
 * Mobile navigation admin form definition.
 */
function mobile_navigation_displays_form($form, &$form_state) {
  module_load_include('inc', 'mobile_navigation', 'mobile_navigation');
  drupal_add_js(drupal_get_path('module', 'mobile_navigation') . '/mobile_navigation.admin.js', array('preprocess' => FALSE));
  drupal_set_title(t('Mobile Navigation Displays')); 
  $form['welcome'] = array(
    '#markup' => '' . t('Welcome to Mobile Navigation displays configuration page!<br />
    The "Submit Changes" button saves all data changes in the Displays List as well as the Create New Display form.</br>')
  );
  $form['display_actions'] = array(
    '#tree' => TRUE,
    '#theme' => 'mobile_navigation_textfield_table',
    //'#prefix' => t('Weights must be ordered from the narrower to the Wider.'),
  );
  $displays = get_displays_list();
  
  foreach ($displays as $display) {
    $form['display_actions'][$display->id]['automatic_description'] = array(
      '#markup' => t('<div class="automatic_description">Enter top and bottom limits. Media queries are generated automatically with this information.</div>'),
    );
	$form['display_actions'][$display->id]['bottom'] = array(
	  '#title' => t('Bottom limit'),
      '#type' => 'textfield',
      '#default_value' => $display->bottom,
      '#size' => 4,
      '#maxlength' => 4,
      '#field_suffix' => t('px'),
      '#attributes' => array(
        'class' => array('field_bottom')
  	  ),
    );
    $form['display_actions'][$display->id]['top'] = array(
      '#title' => t('Top limit'),
	  '#type' => 'textfield',
      '#default_value' => $display->top,
      '#size' => 4,
      '#maxlength' => 4,
      '#field_suffix' => t('px'),
      '#attributes' => array(
        'class' => array('field_top')
  	  ),
    );
	$form['display_actions'][$display->id]['manual'] = array(
      '#markup' => t('<a href="" class="activate_manual">Enter Media Query Manually</a>'),
    );
	$form['display_actions'][$display->id]['manual_description'] = array(
      '#markup' => t('<div class="manual_description">Enter Media Query manually.</div>'),
    );
	$form['display_actions'][$display->id]['media_query'] = array(
      '#title' => t('Media Query'),
      '#type' => 'textfield',
      '#default_value' => $display->media_query,
      '#extra_data' => array('name' => $display->name),
      '#size' => 45,
      '#maxlength' => 64,
      '#attributes' => array(
        'class' => array('field_media_query')
  	  ),
    );
	$form['display_actions'][$display->id]['automatic'] = array(
      '#markup' => t('<a href="" class="activate_automatic">Use Automatic configuration</a>'),
    );
    $form['display_actions'][$display->id]['delete'] = array(
      '#type' => 'checkbox',
      '#title' => 'Remove Display',
    );
  }
  $form['mobile_navigation_create_new_display'] = array(
    '#title' => t('Create New Display'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
    '#description' => t('Create a new mobile navigation display.'),
  );
  $form['mobile_navigation_create_new_display']['mobile_navigation_display_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#size' => 15,
    '#maxlength' => 15,
    '#default_value' => '',
  );
  
  
  $form['mobile_navigation_create_new_display']['mq'] = array(
    '#title' => t('Media Query definition'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#type' => 'fieldset',
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_automatic_description'] = array(
    '#markup' => t('<div class="automatic_description">Enter top and bottom limits. Media queries are generated automatically with this information.</div>'),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_bottom'] = array(
	'#title' => t('Bottom limit'),
    '#type' => 'textfield',
    '#default_value' => '',
    '#size' => 4,
    '#maxlength' => 4,
    '#field_suffix' => t('px'),
    '#attributes' => array(
      'class' => array('field_bottom')
    ),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_top'] = array(
    '#title' => t('Top limit'),
	'#type' => 'textfield',
    '#default_value' => '',
    '#size' => 4,
    '#maxlength' => 4,
    '#field_suffix' => t('px'),
    '#attributes' => array(
      'class' => array('field_top')
    ),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_ativate_manual'] = array(
    '#markup' => t('<a href="" class="activate_manual">Enter Media Query Manually</a>'),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_manual_description'] = array(
    '#markup' => t('<div class="manual_description">Enter Media Query manually.</div>'),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_media_query'] = array(
    '#title' => t('Media Query'),
    '#type' => 'textfield',
    '#default_value' => '',
    '#size' => 45,
    '#maxlength' => 64,
    '#attributes' => array(
      'class' => array('field_media_query')
    ),
  );
  $form['mobile_navigation_create_new_display']['mq']['mobile_navigation_activate_automatic'] = array(
    '#markup' => t('<a href="" class="activate_automatic">Use Automatic configuration</a>'),
  );
  
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit Changes'),
  );
  return $form;
}


function mobile_navigation_displays_form_validate($form, &$form_state) {
  if (isset($form_state['values']['display_actions'])) {
    $displays_actions = $form_state['values']['display_actions'];
    foreach($displays_actions as $ii=>$da) {
      $bottom = $da["bottom"];
	  $top = $da["top"];
      if ($da["media_query"]=="" and $bottom=="" and $top=="") {
        form_set_error('', t('All displays in the list must have a value for top or bottom limits or a media query defined.'));
      }
	  if (strlen(trim($bottom)) > 0){
        if (!is_numeric($bottom)) {
          form_set_error('display_actions', t('Bottom values on Query definitions must be numeric.'));
        }
      }
	  if (strlen(trim($top)) > 0){
        if (!is_numeric($top)) {
          form_set_error('display_actions', t('Top values on Query definitions must be numeric.'));
        }
      }
    }
  }
  if ($form_state['values']['mobile_navigation_display_name']!="" and $form_state['values']['mobile_navigation_bottom']=="" and $form_state['values']['mobile_navigation_top']=="" and $form_state['values']['mobile_navigation_media_query']=='') {
  	form_set_error('mq', t('You entered a name for a new display, however no Media Query definition was specified. Please enter a value for top or bottom limits or a media query definition.'));	  
  }
  if ($form_state['values']['mobile_navigation_display_name']=="" and ($form_state['values']['mobile_navigation_bottom']!='' or $form_state['values']['mobile_navigation_top']!='' or $form_state['values']['mobile_navigation_media_query']!='')) {
  	form_set_error('mobile_navigation_display_name', t('You entered values for a Media Query definition, however you didn\'t specify a display name. Please specify a name for the display you want to create.'));	  
  }
  $bottom = $form_state['values']['mobile_navigation_bottom'];
  if (strlen(trim($bottom)) > 0){
    if (!is_numeric($bottom)) {
      form_set_error('mobile_navigation_bottom', t('Bottom values on Query definitions must be numeric.'));
    }
  }
  $top = $form_state['values']['mobile_navigation_top'];
  if (strlen(trim($top)) > 0){
    if (!is_numeric($top)) {
      form_set_error('mobile_navigation_top', t('Top values on Query definitions must be numeric.'));
    }
  }
  $name = $form_state['values']['mobile_navigation_display_name'];
  if ($name!='') {
  	/* Check for duplicated name */
    $displays = get_displays_list();
	while($row=$displays->fetchAssoc()) {
      $ds_name = $row['name'];
	  if ($name==$ds_name) {
	  	form_set_error('mobile_navigation_name', t('Display name already used. Please choose a different name.'));
	  }
    }
  }
}

/**
 * Submit function for Displays form.
 */
function mobile_navigation_displays_form_submit($form, &$form_state) {
  /**** Handle creation of new displays ****/
  $name = $form_state['values']['mobile_navigation_display_name'];
  $top = $form_state['values']['mobile_navigation_top'];
  $bottom = $form_state['values']['mobile_navigation_bottom'];
  $mq = $form_state['values']['mobile_navigation_media_query'];
  
  /* if there is a name and a breakpoint. */
  $created = false;
  if ($name and ($top!="" or $bottom!="" or $mq!="")) {
    /******* Insert New record ******/
    $fields = array(
      'name' => $name,
      'media_query' => $mq,
    );
	if ($bottom!='') {
	  $fields['bottom'] = $bottom; 
	} else {
	  $fields['bottom'] = null;
	}
	if ($top!='') {
	  $fields['top'] = $top; 
	} else {
	  $fields['top'] = null;
	}
    db_insert('mobile_navigation_displays')
      ->fields( $fields )
      ->execute();
    $last_id = db_query('SELECT MAX(id) FROM {mobile_navigation_displays}')->fetchField();
    $created['id'] = $last_id; 
    drupal_set_message(t('New display "@name" has been created.', array(
      '@name' => $name,
    )));
  }
  if (isset($form_state['values']['display_actions'])) {
    $displays_actions = $form_state['values']['display_actions'];
    /********* Cheking for deleted items **********/
    $copy = $displays_actions;
    foreach($copy as $id=>$actions) {
      if ($actions['delete']) {
        $deleted = db_delete('mobile_navigation_displays')
          ->condition('id', $id)
          ->execute();
        $config = db_delete('mobile_navigation_configurations')
          ->condition('display', $id)
          ->execute();
        unset($displays_actions[$id]);
      }
    }
    
    /****** Saving changes on media queries column *****/
    $ii = 0;
    foreach($displays_actions as $id=>$row) {
	  $fields = array(
	  	'media_query' => $row['media_query'],
	  );
	  if ($row['bottom']!="") {
	  	$fields['bottom'] = $row['bottom']; 
	  } else {
	    $fields['bottom'] = null;
	  }
	
	  if ($row['top']!="") {
	  	$fields['top'] = $row['top']; 
	  } else {
	    $fields['top'] = null;
	  }
      db_update('mobile_navigation_displays')
        ->fields($fields)
        ->condition('id', $id, '=')
        ->execute();
    }
  }
}

/**
 * Mobile navigation menu display list form.
 */
function mobile_navigation_menu_configurations_form($form, &$form_state) {
  module_load_include('inc', 'mobile_navigation', 'mobile_navigation');
  $menu = menu_load(arg(4));
  drupal_set_title(t('Mobile Navigation configurations for @menu', array(
      '@menu' => $menu['title']
  )));
  $form['markup'] = array(
    '#markup' => t('Add the displays in wich you want to configure mobile navigation for the @menu menu.<br />',
    array(
      '@menu' => $menu['title']
    )
  ));
  $form['display_list'] = array(
    '#tree' => TRUE,
    '#theme' => 'mobile_navigation_display_list_table'
  );
  $menu = arg(4);
  $menu_displays = get_menu_configurations($menu);
  $menu_displays_array = array();
  foreach ($menu_displays as $display) {
  $display_name = get_display_name_from_id($display->display);
  $form['display_list'][$display->id]['delete'] = array(
      '#type' => 'checkbox',
      '#title' => t('Remove Display from this menu'),
      '#extra_data' => array(
        'name' => "<h5>".$display_name."</h5>", 
        'info' => t("<strong>Navigation Plugin:</strong> @plugin <br /> <strong>Show/Hide Effect:</strong> @effect",
          array( 
            "@plugin" => $display->plugin,
            "@effect" => $display->show_hide_effect
      )
    )
      )
    );
  $form['display_list'][$display->id]['edit'] = array(
      '#type' => 'markup',
      '#title' => t('Edit configuration'),
      '#markup' => l(
        t('Edit configuration'),
        'admin/structure/menu/manage/' . $menu . '/mobile-navigation/configuration/' . $display_name, 
        array( 
          'attributes' => array(
            'class' => array('edit-display'),
          ),
          'query' => array( 'destination' => '/admin/structure/menu/manage/' . $menu . '/mobile-navigation'),
    )
    )
    );
  $menu_displays_array[$display->display] = $display->display;
  }
  /**** Query all displays ***/
  $displays = get_displays_list();
  /**** create select with all displays ****/
  $options = array(0=>t('Select a Display to Add'));
  while($row=$displays->fetchAssoc()) {
    if (!in_array($row['id'], $menu_displays_array)) {
      $options[$row['id']] = $row['name'];  
    }
  }
  if (count($options)<2) {
    $options = array(0=>t('All Displays have been added to this menu.'));
  }
  $form['mobile_navigation_display'] = array(
  '#type' => 'select',
    '#title' => t('Add Mobile Navigation Display to this Menu'),
    '#options' => $options,
    '#default_value' => 0,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit Changes'),
  );
  return $form;
}

/**
 * Submit function for menu display configuration form.
 */
function mobile_navigation_menu_configurations_form_submit($form, &$form_state) {  
  /*** Check for deleted displays. ***/
  if (isset($form_state['values']['display_list'])) {
    $displays_list = $form_state['values']['display_list'];
    foreach($displays_list as $id=>$actions) {
    if ($actions['delete']) {
      $display_name = get_display_name_from_id($id);
      $deleted = db_delete('mobile_navigation_configurations')
        ->condition('id', $id)
        ->execute();
      drupal_set_message(t('@display Mobile Navigation Display has been removed from this menu.', 
        array(
        '@display' => $display_name,
          )
      ));
    }
    }
  }
  /**** Handle creation of new display cofiguration ****/
  $display = $form_state['values']['mobile_navigation_display'];
  if ($display) {
    $menu = arg(4);
    $data = array(
      'menu' => $menu,
      'menu_selector' => MOBILE_NAVIGATION_MENU_SELECTOR,
      'display' => $display,
      'plugin' => MOBILE_NAVIGATION_PLUGIN,
      'show_items_policy' => MOBILE_NAVIGATION_SHOW_ITEMS_POLICY,
      'expand_only_active_trail' => MOBILE_NAVIGATION_EXPAND_ONLY_ACTIVE_TRAIL,
      'show_hide_effect' => MOBILE_NAVIGATION_SHOW_HIDE_EFFECT,
      'collapse_by_default' => MOBILE_NAVIGATION_COLLAPSED_BY_DEFAULT,
      'menu_width' => MOBILE_NAVIGATION_MENU_WIDTH,
      'use_button' => MOBILE_NAVIGATION_USE_BUTTON,
      'button_title' => MOBILE_NAVIGATION_BUTTON_TITLE,
      'use_handler' => MOBILE_NAVIGATION_USE_HANDLER,
      'handler_title' => MOBILE_NAVIGATION_HANDLER_TITLE,
      'use_mask' => MOBILE_NAVIGATION_USE_MASK,
      'use_classes' => MOBILE_NAVIGATION_USE_CLASSES,
    );
    db_insert('mobile_navigation_configurations')
      ->fields( $data )
      ->execute();
    $display_name = get_display_name_from_id($display);
    drupal_set_message(t('Added Display "@name" to menu "@menu"', array(
    '@name' => $display_name,
    '@menu' => $menu,
    )));
  }
}

/**
 * THEMES DEFINITIONS
 */
function theme_mobile_navigation_textfield_table($vars) {
  $element = $vars['element'];
  $rows = array();
  foreach (element_children($element) as $key) {
    $rows[] = array(
      array('data' => $element[$key]['media_query']['#extra_data']['name']),
      array('data' => render($element[$key]['automatic_description']) . render($element[$key]['bottom']) . render($element[$key]['top']) 
                      . render($element[$key]['manual']) . render($element[$key]['manual_description']) . render($element[$key]['media_query'])
					  . render($element[$key]['automatic'])),
      array('data' => render($element[$key]['delete'])),
    );
  }
  if (!count($rows)) {
    $rows[] = array(
      array('data' => t('There are no Mobile Navigation Displays declarated.')),      
      array('data' => ''),
      array('data' => ''),
      array('data' => ''),
      array('data' => ''),
    );
  }
  $header = array(t('Name'), t('Display Definition'), t('Delete'));
  return theme('table', array('header' => $header, 'rows' => $rows));
}

function theme_mobile_navigation_display_list_table($vars) {
  $element = $vars['element'];
  $rows = array();
  foreach (element_children($element) as $key) {
    $rows[] = array(
      array('data' => $element[$key]['delete']['#extra_data']['name'].$element[$key]['delete']['#extra_data']['info']),      
    array('data' => render($element[$key]['edit'])),
    array('data' => render($element[$key]['delete'])),
    );
  }
  if (!count($rows)) {
    $rows[] = array(
      array('data' => t('There are no Mobile Navigation Displays added to this Menu.')),      
    array('data' => ''),
    array('data' => ''),
    );
  }
  $header = array(t('Mobile Navigation Display'), t('Edit Configuration'), t('Remove'));
  return theme('table', array('header' => $header, 'rows' => $rows));
}
 