<?php

/**
 * @file
 * content_type_ads.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_ads_taxonomy_default_vocabularies() {
  return array(
    'ads_placement' => array(
      'name' => 'Месцы размяшчэння абвестак',
      'machine_name' => 'ads_placement',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ads_topics' => array(
      'name' => 'Тэмы абвестак',
      'machine_name' => 'ads_topics',
      'description' => 'Абвесткі па тэмах',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ads_types' => array(
      'name' => 'Тыпы абвестак',
      'machine_name' => 'ads_types',
      'description' => 'Абвесткі па тыпах',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
