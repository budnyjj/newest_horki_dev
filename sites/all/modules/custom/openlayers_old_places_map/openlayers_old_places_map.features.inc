<?php

/**
 * @file
 * openlayers_old_places_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function openlayers_old_places_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
