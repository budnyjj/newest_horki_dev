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
  $delta->name = 'horki2_system';
  $delta->description = 'Settings, specific for the system pages';
  $delta->theme = 'horki2';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_horki2_settings' => array(
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_zone' => NULL,
      'alpha_region_sidebar_second_equal_height_element' => FALSE,
      'alpha_region_sidebar_third_zone' => NULL,
      'alpha_region_sidebar_third_equal_height_element' => FALSE,
      'alpha_region_sidebar_fourth_zone' => NULL,
      'alpha_region_sidebar_fourth_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '4',
      'alpha_region_content_css' => 'system-content',
    ),
  );
  $export['horki2_system'] = $delta;

  return $export;
}
