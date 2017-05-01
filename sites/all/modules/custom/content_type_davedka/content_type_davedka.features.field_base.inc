<?php
/**
 * @file
 * content_type_davedka.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_davedka_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_daviedka_punkt_menu'.
  $field_bases['field_daviedka_punkt_menu'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_daviedka_punkt_menu',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
