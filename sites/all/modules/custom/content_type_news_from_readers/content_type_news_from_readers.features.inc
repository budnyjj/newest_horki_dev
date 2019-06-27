<?php

/**
 * @file
 * content_type_news_from_readers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_news_from_readers_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_news_from_readers_node_info() {
  $items = array(
    'news_from_readers' => array(
      'name' => t('Народная навiна'),
      'base' => 'node_content',
      'description' => t('Апублікуйце сваю навіну на нашым сайце.'),
      'has_title' => '1',
      'title_label' => t('Загаловак'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
