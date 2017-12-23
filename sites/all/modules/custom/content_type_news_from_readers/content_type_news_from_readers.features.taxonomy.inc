<?php
/**
 * @file
 * content_type_news_from_readers.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_news_from_readers_taxonomy_default_vocabularies() {
  return array(
    'places' => array(
      'name' => 'Месцы',
      'machine_name' => 'places',
      'description' => 'Геапазіцыяванне падзей',
      'hierarchy' => 1,
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
  );
}
