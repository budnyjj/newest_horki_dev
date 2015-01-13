<?php
/**
 * @file
 * delta_system.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_system_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = FALSE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'uzhorak';
  $delta->name = 'system';
  $delta->description = 'Шаблон сайта без калонак';
  $delta->theme = 'dev';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_dev_settings' => array(
      'alpha_region_header_banner_equal_height_element' => FALSE,
      'alpha_region_sidebar_first_zone' => NULL,
      'alpha_region_sidebar_first_equal_height_element' => FALSE,
      'alpha_region_sidebar_second_force' => 0,
      'alpha_region_social_blocks_zone' => NULL,
      'alpha_region_social_blocks_equal_height_element' => FALSE,
      'alpha_region_content_columns' => '12',
    ),
  );
  $export['uzhorak'] = $delta;

  return $export;
}
