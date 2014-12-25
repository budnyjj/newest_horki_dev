<?php
/**
 * @file
 * content_type_local_solution.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_local_solution_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_local_solution_node_info() {
  $items = array(
    'local_solution' => array(
      'name' => t('Рашэнне мясцовай праблемы'),
      'base' => 'node_content',
      'description' => t('Гэты тып кантэнта змяшчае агульную інфармацыю аб метадах вырашэння мясцовых праблем. '),
      'has_title' => '1',
      'title_label' => t('Загаловак'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
