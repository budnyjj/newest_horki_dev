<?php
/**
 * @file
 * content_type_company.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function content_type_company_taxonomy_default_vocabularies() {
  return array(
    'company_catalog' => array(
      'name' => 'Каталог прадпрыемстваў',
      'machine_name' => 'company_catalog',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
