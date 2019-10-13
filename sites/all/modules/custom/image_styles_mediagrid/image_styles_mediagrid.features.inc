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

  // Exported image style: mediagrid_breakpoints_theme_horki2_desktop.
  $styles['mediagrid_breakpoints_theme_horki2_desktop'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_desktop',
    'effects' => array(
      92 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      113 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_fallback.
  $styles['mediagrid_breakpoints_theme_horki2_fallback'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_fallback',
    'effects' => array(
      116 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
      118 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
      117 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_mobile_narrow.
  $styles['mediagrid_breakpoints_theme_horki2_mobile_narrow'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_mobile_narrow',
    'effects' => array(
      94 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 284,
        ),
        'weight' => 1,
      ),
      114 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: mediagrid_breakpoints_theme_horki2_mobile_normal.
  $styles['mediagrid_breakpoints_theme_horki2_mobile_normal'] = array(
    'label' => 'mediagrid_breakpoints_theme_horki2_mobile_normal',
    'effects' => array(
      95 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
      115 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
