<?php

/**
 * @file
 * image_styles_mediagrid.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function image_styles_mediagrid_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Малюнак для спісу артыкулаў';
  $picture_mapping->machine_name = 'mediagrid';
  $picture_mapping->breakpoint_group = 'horki2';
  $picture_mapping->mapping = array(
    'breakpoints.theme.horki2.desktop_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mediagrid_breakpoints_theme_horki2_desktop_normal_1x',
      ),
    ),
    'breakpoints.theme.horki2.desktop_narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mediagrid_breakpoints_theme_horki2_desktop_narrow_1x',
      ),
    ),
    'breakpoints.theme.horki2.mobile_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mediagrid_breakpoints_theme_horki2_mobile_normal_1x',
      ),
    ),
    'breakpoints.theme.horki2.mobile_narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'mediagrid_breakpoints_theme_horki2_mobile_narrow_1x',
      ),
    ),
  );
  $export['mediagrid'] = $picture_mapping;

  return $export;
}
