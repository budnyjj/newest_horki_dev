<?php

/**
 * @file
 * content_type_static.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_static_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_static_node_info() {
  $items = array(
    'static' => array(
      'name' => t('Статычная старонка'),
      'base' => 'node_content',
      'description' => t('Статычная старонка, дадаваць сюды, калі змест не падыходзіць для іншых тыпаў матэрыялу'),
      'has_title' => '1',
      'title_label' => t('Загаловак'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
