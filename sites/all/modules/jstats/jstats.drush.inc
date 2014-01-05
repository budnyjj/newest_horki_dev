<?php
/**
 * @file
 *   Drush integration for the jStats module.
 */

/**
 * Implements hook_drush_command.
 */
function jstats_drush_command() {
  $items['jstats-aggregate'] = array(
    'description' => dt('Aggregates the statistics collected via jStats'),
    'drupal dependencies' => array('jstats'),
  );

  return $items;
}

/**
 * Drush command callback.
 */
function drush_jstats_aggregate() {
  // calculate statistics
  jstats_aggregate();

  // Flush old log entries
  db_delete('jstats_accesslog')->execute();
}
