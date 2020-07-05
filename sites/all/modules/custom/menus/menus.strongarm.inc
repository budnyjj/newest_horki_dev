<?php

/**
 * @file
 * menus.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function menus_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-geografic';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.7',
  );
  $export['xmlsitemap_settings_menu_link_menu-geografic'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-main';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.7',
  );
  $export['xmlsitemap_settings_menu_link_menu-main'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-old';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.7',
  );
  $export['xmlsitemap_settings_menu_link_menu-old'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'xmlsitemap_settings_menu_link_menu-system';
  $strongarm->value = array(
    'status' => '1',
    'priority' => '0.7',
  );
  $export['xmlsitemap_settings_menu_link_menu-system'] = $strongarm;

  return $export;
}
