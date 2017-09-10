<?php
/**
 * @file
 * delta_map_local_problems.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_map_local_problems_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = TRUE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'map_local_problems';
  $delta->name = 'map_local_problems';
  $delta->description = 'Шаблон сайта без калонак, але з дадатковымі рэгіёнамі над і пад асноўным кантэнтам';
  $delta->theme = 'dev';
  $delta->mode = 'preserve';
  $delta->parent = 'uzhorak';
  $delta->settings = array(
    'theme_dev_settings' => array(
      'alpha_libraries' => array(
        'omega_formalize' => 'omega_formalize',
        'omega_mediaqueries' => 'omega_mediaqueries',
        'omega_equalheights' => 'omega_equalheights',
      ),
      'alpha_region_before_content_columns' => '12',
      'alpha_region_header_banner_equal_height_element' => 0,
      'alpha_region_content_css' => 'map-page-content',
      'alpha_region_after_content_zone' => 'content',
      'alpha_region_after_content_columns' => '12',
      'alpha_region_after_content_weight' => '2',
      'alpha_region_after_content_equal_height_element' => 0,
      'alpha_region_after_content_equal_height_container' => 1,
    ),
  );
  $export['map_local_problems'] = $delta;

  return $export;
}
