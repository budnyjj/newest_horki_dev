<?php
/**
 * @file
 * delta_main.delta.inc
 */

/**
 * Implements hook_delta_default_templates().
 */
function delta_main_delta_default_templates() {
  $export = array();

  $delta = new stdClass();
  $delta->disabled = TRUE; /* Edit this to true to make a default delta disabled initially */
  $delta->api_version = 3;
  $delta->machine_name = 'base';
  $delta->name = 'main';
  $delta->description = 'Шаблон сайта для галоўнай старонкі';
  $delta->theme = 'dev';
  $delta->mode = 'preserve';
  $delta->parent = '';
  $delta->settings = array(
    'theme_dev_settings' => array(
      'alpha_libraries' => array(
        'omega_formalize' => 'omega_formalize',
        'omega_mediaqueries' => 'omega_mediaqueries',
        'omega_equalheights' => 'omega_equalheights',
      ),
      'alpha_region_sidebar_second_force' => 0,
      'alpha_region_social_blocks_zone' => NULL,
      'alpha_region_social_blocks_equal_height_element' => FALSE,
      'alpha_zone_content_equal_height_container' => 1,
      'alpha_region_content_css' => 'main-news-region main-page-content',
      'alpha_region_content_equal_height_element' => 1,
      'alpha_region_sidebar_first_css' => '',
      'alpha_region_sidebar_first_equal_height_element' => 1,
      'alpha_zone_preview_section' => 'content',
    ),
  );
  $export['base'] = $delta;

  return $export;
}
