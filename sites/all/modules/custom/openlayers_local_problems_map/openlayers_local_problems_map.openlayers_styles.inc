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
    'pointRadius' => 6,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicWidth' => 18,
    'graphicHeight' => 18,
    'graphicOpacity' => 1,
    'graphicXOffset' => -9,
    'graphicYOffset' => -9,
    'labelAlign' => 'cm',
  );
  $export['marker_local_problem_status'] = $openlayers_styles;

  return $export;
}
