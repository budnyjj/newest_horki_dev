<?php
/**
 * @file
 * Mobile Navigation helper functions.
 */

 
/**
 * Helper function for getting Mobile navigation effects.
 */
function mobile_navigation_get_effects() {
  return array(
    'expand_down' => t('Expand Down right where the menu button is located.'),
    'modal_top' => t('Top Modal: Menu shows up over the document, comming from the top.'),
    'modal_left' => t('Left Modal: Menu shows up over the document, comming from the left.'),
    'modal_right' => t('Right Modal: Menu shows up over the document, comming from the right.'),
    'modal_bottom' => t('Bottom Modal: Menu shows up over the document, comming from the bottom.'),
    'drawer_left' => t('Left Drawer: Menu shows up pushing the document, comming from the left.'),
    'drawer_right' => t('Right Drawer: Menu shows up pushing the document, comming from the right.'),
    'drawer_top' => t('Top Drawer: Menu shows up pushing down the document, comming from the top.'),
  );
}

/**
 * Helper function for getting Mobile navigation plugin options.
 */
function mobile_navigation_get_plugins() {
  return array(
    'none' => t('<strong>None:</strong> No navigation plugin. Simply slide showing the menu, without any special behavior on its contents.'),
    'accordion' => t('<strong>Accordion:</strong> Show menu and its submenus in a organized accordion structure. (Aplies only when the markup for the complete menu is displayed, including submenus.)'),
    'slide_navigation' => t('<strong>Slide Navigation:</strong> Show submenus using a slide effect when opening submenus. Only current submenu items are shown, with a go back option at the top.'),
  );
}

function get_display_id_from_name($name) {
  return db_query("SELECT id FROM {mobile_navigation_displays} WHERE name=:name", array(':name' => $name))->fetchField();
}

function get_display_name_from_id($id) {
  return db_query('SELECT name FROM {mobile_navigation_displays} WHERE id=:id', array(':id' => $id))->fetchField();
}

function get_displays_list() {
  return db_query("SELECT id, name, top, bottom, media_query FROM {mobile_navigation_displays}");
}

function get_configuration_id($menu, $display_id) {
  return db_query('SELECT id FROM {mobile_navigation_configurations} WHERE menu = :menu AND display = :display', 
    array(':menu' => $menu, ':display' => $display_id)
  )->fetchField();
}

function get_menu_configurations($menu) {
  return db_query('SELECT id, display, plugin, show_hide_effect FROM {mobile_navigation_configurations} WHERE menu = :menu', array(':menu' => $menu));
}

function __get_configurations_list() {
  return db_query('SELECT id, display FROM {mobile_navigation_configurations}');
}
