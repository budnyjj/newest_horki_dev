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
    'height' => '600px',
    'image_path' => 'sites/all/modules/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '30.993118187156433, 54.285070051353294',
        'zoom' => '13',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '3400000.000000,7150000.000000,3570000.000000,7250000.000000',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 0,
      ),
    ),
    'default_layer' => 'map_local_problems',
    'layers' => array(
      'map_local_problems' => 'map_local_problems',
    ),
    'layer_weight' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
    ),
    'layer_styles' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
    ),
    'layer_styles_select' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
    ),
    'layer_styles_temporary' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
    ),
    'layer_activated' => array(
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_local_problems_openlayers_this_problem' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
    ),
    'layer_switcher' => array(
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_local_problems_openlayers_this_problem' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
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
    'image_path' => 'sites/all/themes/horki2/openlayers/img/',
    'css_path' => 'sites/all/themes/horki2/openlayers/map_local_problems.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '',
        'zoom' => '',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '3400000.000000,7150000.000000,3570000.000000,7250000.000000',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_hover' => array(
        'layers' => array(
          'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
          'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
        ),
      ),
      'openlayers_plus_behavior_blockswitcher' => array(
        'enabled' => 1,
        'open' => 0,
        'overlay_style' => 'checkbox',
        'position' => 'ne',
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
          'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
        ),
        'popupAtPosition' => 'computed',
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
          'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
          'map_local_problems' => 0,
        ),
        'point_zoom_level' => '1',
        'zoomtolayer_scale' => '1',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 0,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
    ),
    'default_layer' => 'map_local_problems',
    'layers' => array(
      'map_local_problems' => 'map_local_problems',
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
    ),
    'layer_weight' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '1',
    ),
    'layer_styles' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
    ),
    'layer_styles_select' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
    ),
    'layer_styles_temporary' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
    ),
    'layer_activated' => array(
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_this_problem' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
    ),
    'layer_switcher' => array(
      'map_local_problems_openlayers_solved_problems' => 'map_local_problems_openlayers_solved_problems',
      'map_local_problems_openlayers_not_solved_problems' => 'map_local_problems_openlayers_not_solved_problems',
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_this_problem' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'marker_local_problem_status',
      'select' => 'marker_local_problem_status_active',
      'temporary' => 'marker_local_problem_status_active',
    ),
  );
  $export['local_problems'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'this_local_problem';
  $openlayers_maps->title = 'Абраная мясцовая праблема';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '596px',
    'image_path' => 'sites/all/themes/horki2/openlayers/img/',
    'css_path' => 'sites/all/themes/horki2/openlayers/map_local_problems.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '',
        'zoom' => '',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '3442074.029808,7217344.855386,3458966.613056,7231485.705616',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'map_local_problems_openlayers_this_problem' => 'map_local_problems_openlayers_this_problem',
          'map_this_local_problem' => 0,
        ),
        'point_zoom_level' => '1',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'map_this_local_problem',
    'layers' => array(
      'map_this_local_problem' => 'map_this_local_problem',
      'map_local_problems_openlayers_this_problem' => 'map_local_problems_openlayers_this_problem',
    ),
    'layer_weight' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
    ),
    'layer_styles' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
    ),
    'layer_styles_select' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
    ),
    'layer_styles_temporary' => array(
      'map_old_places_openlayers_old_places' => '0',
      'geofield_formatter' => '0',
      'map_local_problems_openlayers_solved_problems' => '0',
      'map_local_problems_openlayers_not_solved_problems' => '0',
      'map_old_places_openlayers_this_old_place' => '0',
      'map_local_problems_openlayers_this_problem' => '0',
    ),
    'layer_activated' => array(
      'map_local_problems_openlayers_this_problem' => 'map_local_problems_openlayers_this_problem',
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
    ),
    'layer_switcher' => array(
      'map_local_problems_openlayers_this_problem' => 'map_local_problems_openlayers_this_problem',
      'map_old_places_openlayers_old_places' => 0,
      'geofield_formatter' => 0,
      'map_local_problems_openlayers_solved_problems' => 0,
      'map_local_problems_openlayers_not_solved_problems' => 0,
      'map_old_places_openlayers_this_old_place' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'marker_local_problem_status_active',
      'select' => 'marker_local_problem_status_active',
      'temporary' => 'marker_local_problem_status_active',
    ),
  );
  $export['this_local_problem'] = $openlayers_maps;

  return $export;
}
