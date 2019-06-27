<?php

/**
 * @file
 * content_type_news.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_news_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_export_rss_yandex_google'.
  $field_bases['field_export_rss_yandex_google'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_export_rss_yandex_google',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
