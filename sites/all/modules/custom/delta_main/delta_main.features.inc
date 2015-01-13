<?php
/**
 * @file
 * delta_main.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function delta_main_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "delta" && $api == "delta") {
    return array("version" => "3");
  }
}
