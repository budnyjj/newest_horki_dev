<?php

/**
 * @file
 * content_type_local_problem.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_local_problem_taxonomy_default_vocabularies() {
  return array(
    'local_problem_status' => array(
      'name' => 'Статусы мясцовых праблем',
      'machine_name' => 'local_problem_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
