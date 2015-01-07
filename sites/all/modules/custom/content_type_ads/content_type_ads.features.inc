<?php
/**
 * @file
 * content_type_ads.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_ads_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_ads_node_info() {
  $items = array(
    'ads' => array(
      'name' => t('Абвестка'),
      'base' => 'node_content',
      'description' => t('Прыватная абвестка ад карыстальнікаў'),
      'has_title' => '1',
      'title_label' => t('Назва тавара або паслугі'),
      'help' => t('Назва тавара або паслугi'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}