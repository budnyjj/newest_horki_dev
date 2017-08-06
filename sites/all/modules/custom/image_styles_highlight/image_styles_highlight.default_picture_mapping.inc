<?php
/**
 * @file
 * image_styles_highlight.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function image_styles_highlight_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'highlight';
  $picture_mapping->machine_name = 'highlight';
  $picture_mapping->breakpoint_group = 'horki2';
  $picture_mapping->mapping = array(
    'breakpoints.theme.horki2.desktop_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'highlight_breakpoints_theme_horki2_desktop_normal_1x',
      ),
    ),
    'breakpoints.theme.horki2.desktop_narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'highlight_breakpoints_theme_horki2_desktop_narrow_1x',
      ),
    ),
    'breakpoints.theme.horki2.mobile_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'highlight_breakpoints_theme_horki2_mobile_normal_1x',
      ),
    ),
    'breakpoints.theme.horki2.mobile_narrow' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'highlight_breakpoints_theme_horki2_mobile_narrow_1x',
      ),
    ),
  );
  $export['highlight'] = $picture_mapping;

  return $export;
}