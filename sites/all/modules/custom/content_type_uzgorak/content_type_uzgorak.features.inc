<?php

/**
 * @file
 * content_type_uzgorak.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_uzgorak_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_uzgorak_node_info() {
  $items = array(
    'uzgorak' => array(
      'name' => t('Узгорак'),
      'base' => 'node_content',
      'description' => t('Тут утрымоўваюцца нумары газеты Узгорак'),
      'has_title' => '1',
      'title_label' => t('Загаловак'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
