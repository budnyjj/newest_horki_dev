<?php
/**
 * @file
 * menu_main.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function menu_main_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-main.
  $menus['menu-main'] = array(
    'menu_name' => 'menu-main',
    'title' => 'Галоўнае меню',
    'description' => 'Галоўнае меню сайта',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Галоўнае меню');
  t('Галоўнае меню сайта');


  return $menus;
}
