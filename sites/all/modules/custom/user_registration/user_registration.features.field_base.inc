<?php
/**
 * @file
 * user_registration.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function user_registration_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_user_rules'
  $field_bases['field_user_rules'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_user_rules',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => 'Не',
        1 => 'Я згодны з <a class="rich-red-link" href="/pravily.html" target="_blank">правіламі паводзінаў на сайце horki.info</a>',
      ),
      'allowed_values_function' => '',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
