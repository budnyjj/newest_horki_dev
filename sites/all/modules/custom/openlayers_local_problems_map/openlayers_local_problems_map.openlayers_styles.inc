<?php

/**
 * @file
 * openlayers_local_problems_map.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function openlayers_local_problems_map_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'marker_local_problem_status';
  $openlayers_styles->title = 'Маркер статуса мясцовай праблемы';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '${field_taxonomy_pic}',
    'pointRadius' => 12,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 24,
    'graphicHeight' => 31,
    'graphicOpacity' => 1,
    'graphicXOffset' => -12,
    'graphicYOffset' => -31,
    'graphicZIndex' => 1,
    'labelAlign' => 'cm',
  );
  $export['marker_local_problem_status'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'marker_local_problem_status_active';
  $openlayers_styles->title = 'Актыўны маркер статуса мясцовай праблемы';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '${field_taxonomy_pic}',
    'pointRadius' => 13.0,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1.0,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1.0,
    'strokeOpacity' => 1.0,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 26.0,
    'graphicHeight' => 34.0,
    'graphicOpacity' => 1.0,
    'graphicXOffset' => -13.0,
    'graphicYOffset' => -34.0,
    'graphicZIndex' => 999.0,
    'labelAlign' => 'cm',
  );
  $export['marker_local_problem_status_active'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'marker_not_dared_problem_status';
  $openlayers_styles->title = 'Маркер невырашанай праблемы';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/default/files/default_images/status/local_problem_red.png',
    'pointRadius' => 13.0,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1.0,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1.0,
    'strokeOpacity' => 1.0,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 26.0,
    'graphicHeight' => 34.0,
    'graphicOpacity' => 1.0,
    'graphicXOffset' => -13.0,
    'graphicYOffset' => -34.0,
    'graphicZIndex' => 999.0,
    'labelAlign' => 'cm',
  );
  $export['marker_not_dared_problem_status'] = $openlayers_styles;

  return $export;
}
