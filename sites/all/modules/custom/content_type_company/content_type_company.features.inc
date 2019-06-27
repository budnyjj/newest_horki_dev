<?php

/**
 * @file
 * content_type_company.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_company_ctools_plugin_api($module = NULL, $api = NULL) {
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
function content_type_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Прадпрыемства'),
      'base' => 'node_content',
      'description' => t('Гэты тып кантэнта змяшчае інфармацыю аб прадпрыемстве, выкарыстоўваецца ў каталозе прадпрыемстваў.'),
      'has_title' => '1',
      'title_label' => t('Назва прадпрыемства'),
      'help' => t('Скарочаная версія назвы ў знаёмай для карыстальнікаў форме.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
