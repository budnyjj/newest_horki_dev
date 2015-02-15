<?php
/**
 * @file
 * openlayers_local_problems_map.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function openlayers_local_problems_map_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'geofield_local_problems';
  $openlayers_maps->title = 'Дадаванне мясцовых праблем';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '30.993118201531274, 54.285070042961934',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '3442074.029808,7217344.855386,3458966.613056,7231485.705616',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 0,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
    ),
    'layer_weight' => array(
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_local_problems_openlayers_not_dared_problems' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_local_problems_openlayers_not_dared_problems' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'marker_not_dared_problem_status',
      'select' => 'marker_not_dared_problem_status',
      'temporary' => 'marker_not_dared_problem_status',
    ),
  );
  $export['geofield_local_problems'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'local_problems';
  $openlayers_maps->title = 'Мясцовыя праблемы';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '600px',
    'image_path' => 'sites/all/themes/dev/openlayers/img/',
    'css_path' => 'sites/all/themes/dev/openlayers/map_local_problems.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '30.99002830394237, 54.287675359423375',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '3440621.727071,7218109.224867,3459501.673055,7231638.578871',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_plus_behavior_blockswitcher' => array(
        'enabled' => 0,
        'open' => 0,
        'overlay_style' => 'checkbox',
        'position' => 'ne',
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'map_local_problems_openlayers_not_dared_problems' => 'map_local_problems_openlayers_not_dared_problems',
          'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
          'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
        ),
        'popupAtPosition' => 'computed',
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 0,
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'map_local_problems_openlayers_not_dared_problems' => 'map_local_problems_openlayers_not_dared_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
    ),
    'layer_weight' => array(
      'map_local_problems_openlayers_not_dared_problems' => '0',
      'geofield_formatter' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '1',
      'map_local_problems_openlayers_solved_problems' => '2',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'map_local_problems_openlayers_not_dared_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
    ),
    'layer_activated' => array(
      'map_local_problems_openlayers_not_dared_problems' => 'map_local_problems_openlayers_not_dared_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'map_local_problems_openlayers_not_dared_problems' => 'map_local_problems_openlayers_not_dared_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'marker_local_problem_status',
      'select' => 'marker_local_problem_status',
      'temporary' => 'marker_local_problem_status',
    ),
  );
  $export['local_problems'] = $openlayers_maps;

  return $export;
}
