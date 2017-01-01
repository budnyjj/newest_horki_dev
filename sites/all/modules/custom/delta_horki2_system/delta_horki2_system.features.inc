<?php
/**
 * @file
 * delta_horki2_system.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function delta_horki2_system_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
