<?php
/**
 * @file
 * image_styles_mediagrid.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_mediagrid_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_mediagrid_image_default_styles() {
  $styles = array();

  // Exported image style: mediagrid_breakpoints_theme_horki2_desktop_narrow_1x.
  $styles['mediagrid_breakpoints_theme_horki2_desktop_narrow_1x'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_desktop_narrow_1x',
    'effects' => array(
      44 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_desktop_normal_1x.
  $styles['mediagrid_breakpoints_theme_horki2_desktop_normal_1x'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_desktop_normal_1x',
    'effects' => array(
      45 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_mobile_narrow_1x.
  $styles['mediagrid_breakpoints_theme_horki2_mobile_narrow_1x'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_mobile_narrow_1x',
    'effects' => array(
      42 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 284,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_mobile_normal_1x.
  $styles['mediagrid_breakpoints_theme_horki2_mobile_normal_1x'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_mobile_normal_1x',
    'effects' => array(
      43 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
