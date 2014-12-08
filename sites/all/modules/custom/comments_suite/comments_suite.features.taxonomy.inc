<?php
/**
 * @file
 * comments_suite.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function comments_suite_taxonomy_default_vocabularies() {
  return array(
    'company_catalog' => array(
      'name' => 'Каталог прадпрыемстваў',
      'machine_name' => 'company_catalog',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'places' => array(
      'name' => 'Месцы',
      'machine_name' => 'places',
      'description' => 'Геапазіцыяванне падзей',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'rubrics' => array(
      'name' => 'Рубрыкі',
      'machine_name' => 'rubrics',
      'description' => 'Рубрыкі сайта',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
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
