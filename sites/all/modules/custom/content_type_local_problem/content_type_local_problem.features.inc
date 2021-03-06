<?php

/**
 * @file
 * content_type_local_problem.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_local_problem_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_local_problem_node_info() {
  $items = array(
    'local_problem' => array(
      'name' => t('Мясцовая праблема'),
      'base' => 'node_content',
      'description' => t('Дадайце інфармацыю пра мясцовую праблему, і мы разам паспрабуем яе вырашыць. '),
      'has_title' => '1',
      'title_label' => t('Назва праблемы'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
