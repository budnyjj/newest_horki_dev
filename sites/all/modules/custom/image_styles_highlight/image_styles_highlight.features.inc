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

  // Exported image style: highlight_breakpoints_theme_horki2_desktop_narrow_1x.
  $styles['highlight_breakpoints_theme_horki2_desktop_narrow_1x'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_desktop_narrow_1x',
    'effects' => array(
      88 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 588,
          'height' => 410,
        ),
        'weight' => 1,
      ),
      96 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_desktop_normal_1x.
  $styles['highlight_breakpoints_theme_horki2_desktop_normal_1x'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_desktop_normal_1x',
    'effects' => array(
      89 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 588,
          'height' => 410,
        ),
        'weight' => 1,
      ),
      97 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_mobile_narrow_1x.
  $styles['highlight_breakpoints_theme_horki2_mobile_narrow_1x'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_mobile_narrow_1x',
    'effects' => array(
      90 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 284,
        ),
        'weight' => 1,
      ),
      98 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: highlight_breakpoints_theme_horki2_mobile_normal_1x.
  $styles['highlight_breakpoints_theme_horki2_mobile_normal_1x'] = array(
    'label' => 'highlight_breakpoints_theme_horki2_mobile_normal_1x',
    'effects' => array(
      91 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 918,
          'height' => 650,
        ),
        'weight' => 1,
      ),
      99 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
