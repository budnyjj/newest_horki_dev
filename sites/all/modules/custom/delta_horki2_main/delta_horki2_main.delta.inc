<?php
/**
 * @file
 * delta_horki2_main.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_horki2_main_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'horki2_main';
  $delta->name = 'horki2_main';
  $delta->description = 'Settings, specific for the main page';
  $delta->theme = 'horki2';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_horki2_settings' => array(
      'alpha_region_sidebar_fourth_force' => 0,
      'alpha_region_sidebar_fourth_zone' => 'content',
      'alpha_region_sidebar_fourth_prefix' => '0',
      'alpha_region_sidebar_fourth_columns' => '1',
      'alpha_region_sidebar_fourth_suffix' => '0',
      'alpha_region_sidebar_fourth_weight' => '4',
      'alpha_region_sidebar_fourth_position' => '0',
      'alpha_region_sidebar_fourth_css' => '',
      'alpha_region_sidebar_fourth_equal_height_element' => FALSE,
      'alpha_region_sidebar_fourth_equal_height_container' => 0,
      'alpha_zone_preview_wrapper' => 1,
      'alpha_zone_preview_section' => 'footer',
      'alpha_zone_preview_wrapper_css' => '.wrapper-preview',
      'alpha_region_preview_first_zone' => 'preview',
      'alpha_region_preview_first_columns' => '2',
      'alpha_region_preview_first_equal_height_element' => 0,
      'alpha_region_preview_second_zone' => 'preview',
      'alpha_region_preview_second_columns' => '2',
      'alpha_region_preview_second_weight' => '1',
      'alpha_region_preview_second_equal_height_element' => 0,
    ),
  );
  $export['horki2_main'] = $delta;

  return $export;
}
