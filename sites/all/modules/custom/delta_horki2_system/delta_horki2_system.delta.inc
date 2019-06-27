<?php

/**
 * @file
 * delta_horki2_system.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_horki2_system_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'horki2_system';
  $delta->name = 'horki2_wide';
  $delta->description = 'Settings, specific for the wide pages';
  $delta->theme = 'horki2';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_horki2_settings' => array(
      'alpha_exclude' => array(
        'modules/comment/comment.css' => 'modules/comment/comment.css',
        'modules/system/system.menus.css' => 'modules/system/system.menus.css',
        'sites/all/modules/date/date_api/date.css' => 0,
        'sites/all/modules/date/date_popup/themes/datepicker.1.7.css' => 0,
        'modules/field/theme/field.css' => 0,
        'modules/node/node.css' => 0,
        'sites/all/modules/picture/picture_wysiwyg.css' => 0,
        'modules/poll/poll.css' => 0,
        'modules/search/search.css' => 0,
        'modules/user/user.css' => 0,
        'sites/all/modules/views/css/views.css' => 0,
        'misc/vertical-tabs.css' => 0,
        'modules/aggregator/aggregator.css' => 0,
        'modules/block/block.css' => 0,
        'modules/dblog/dblog.css' => 0,
        'modules/file/file.css' => 0,
        'modules/filter/filter.css' => 0,
        'modules/help/help.css' => 0,
        'modules/menu/menu.css' => 0,
        'modules/openid/openid.css' => 0,
        'modules/profile/profile.css' => 0,
        'modules/statistics/statistics.css' => 0,
        'modules/syslog/syslog.css' => 0,
        'modules/system/admin.css' => 0,
        'modules/system/maintenance.css' => 0,
        'modules/system/system.css' => 0,
        'modules/system/system.admin.css' => 0,
        'modules/system/system.base.css' => 0,
        'modules/system/system.maintenance.css' => 0,
        'modules/system/system.messages.css' => 0,
        'modules/system/system.theme.css' => 0,
        'modules/taxonomy/taxonomy.css' => 0,
        'modules/tracker/tracker.css' => 0,
        'modules/update/update.css' => 0,
      ),
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_sidebar_third_zone' => NULL,
      'alpha_region_sidebar_third_equal_height_element' => FALSE,
      'alpha_region_sidebar_fourth_zone' => NULL,
      'alpha_region_sidebar_fourth_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '4',
      'alpha_region_content_css' => 'wide-content',
    ),
  );
  $export['horki2_system'] = $delta;

  return $export;
}
