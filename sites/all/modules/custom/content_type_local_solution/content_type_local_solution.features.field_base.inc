<?php
/**
 * @file
 * content_type_local_solution.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function content_type_local_solution_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_documents'
  $field_bases['field_documents'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_documents',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 0,
      'display_field' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  // Exported field_base: 'field_linked_local_problems'
  $field_bases['field_linked_local_problems'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_linked_local_problems',
    'foreign keys' => array(
      'nid' => array(
        'columns' => array(
          'nid' => 'nid',
        ),
        'table' => 'node',
      ),
    ),
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'referenceable_types' => array(
        'ads' => 0,
        'afisha' => 0,
        'company' => 0,
        'info' => 0,
        'library' => 0,
        'local_problem' => 'local_problem',
        'local_solution' => 0,
        'news' => 0,
        'news_from_readers' => 0,
        'poll' => 0,
        'static' => 0,
        'uzgorak' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  return $field_bases;
}
