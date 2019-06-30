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
      'name' => t('Прыватная абвестка'),
      'base' => 'node_content',
      'description' => t('Прадам, куплю, здам, здыму, мяняю... у Горках, Дрыбіне ды Мсціславе.'),
      'has_title' => '1',
      'title_label' => t('Назва тавару або паслугі'),
      'help' => t('Назва тавару або паслугi.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
