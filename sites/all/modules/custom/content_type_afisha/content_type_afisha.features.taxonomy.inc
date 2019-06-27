<?php

/**
 * @file
 * content_type_afisha.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_afisha_taxonomy_default_vocabularies() {
  return array(
    'tags' => array(
      'name' => 'Тэгі',
      'machine_name' => 'tags',
      'description' => 'Астатнія тэрміны',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
