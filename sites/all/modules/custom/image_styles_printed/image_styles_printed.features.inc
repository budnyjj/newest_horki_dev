<?php

/**
 * @file
 * image_styles_printed.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_printed_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_printed_image_default_styles() {
  $styles = array();

  // Exported image style: printed_desktop.
  $styles['printed_desktop'] = array(
    'label' => 'printed_desktop',
    'effects' => array(
      155 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 240,
        ),
        'weight' => 1,
      ),
      156 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: printed_fallback.
  $styles['printed_fallback'] = array(
    'label' => 'printed_fallback',
    'effects' => array(
      152 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 170,
          'height' => 240,
        ),
        'weight' => 1,
      ),
      153 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
      154 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: printed_mobile.
  $styles['printed_mobile'] = array(
    'label' => 'printed_mobile',
    'effects' => array(
      157 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 140,
        ),
        'weight' => 1,
      ),
      158 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
