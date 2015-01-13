<?php
/**
 * @file
 * delta_map_local_problems.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function delta_map_local_problems_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
