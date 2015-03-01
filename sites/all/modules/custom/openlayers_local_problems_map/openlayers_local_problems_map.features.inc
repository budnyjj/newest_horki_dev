<?php
/**
 * @file
 * openlayers_local_problems_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlayers_local_problems_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
}
