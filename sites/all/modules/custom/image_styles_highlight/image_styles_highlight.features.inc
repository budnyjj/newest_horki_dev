<?php

/**
 * @file
 * image_styles_highlight.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_highlight_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_highlight_image_default_styles() {
  $styles = array();

  // Exported image style: highlight_breakpoints_theme_horki2_desktop.
  $styles['highlight_breakpoints_theme_horki2_desktop'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_desktop',
    'effects' => array(
      88 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 588,
          'height' => 410,
        ),
        'weight' => 1,
      ),
      119 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_fallback.
  $styles['highlight_breakpoints_theme_horki2_fallback'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_fallback',
    'effects' => array(
      91 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
      121 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
      99 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_mobile_narrow.
  $styles['highlight_breakpoints_theme_horki2_mobile_narrow'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_mobile_narrow',
    'effects' => array(
      90 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 284,
        ),
        'weight' => 1,
      ),
      120 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_mobile_normal.
  $styles['highlight_breakpoints_theme_horki2_mobile_normal'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_mobile_normal',
    'effects' => array(
      122 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
      124 => array(
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
