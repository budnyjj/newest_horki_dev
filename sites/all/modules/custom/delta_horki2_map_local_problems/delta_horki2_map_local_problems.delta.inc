<?php
/**
 * @file
 * delta_horki2_map_local_problems.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_horki2_map_local_problems_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'horki2_map_local_problems';
  $delta->name = 'horki2_map_local_problems';
  $delta->description = 'Settings, specific for the map of local problems page';
  $delta->theme = 'horki2';
  $delta->mode = 'preserve';
  $delta->parent = 'horki2_system';
  $delta->settings = array(
    'theme_horki2_settings' => array(
      'alpha_zone_header_banner_wrapper_css' => '',
      'alpha_region_after_content_zone' => 'content',
      'alpha_region_after_content_columns' => '4',
      'alpha_region_after_content_weight' => '1',
      'alpha_region_after_content_equal_height_element' => 0,
    ),
  );
  $export['horki2_map_local_problems'] = $delta;

  return $export;
}
