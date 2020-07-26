<?php

/**
 * @file
 * image_styles_mediagridlist.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_mediagridlist_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_mediagridlist_image_default_styles() {
  $styles = array();

  // Exported image style: mediagridlist_desktop.
  $styles['mediagridlist_desktop'] = array(
    'label' => 'mediagridlist_desktop',
    'effects' => array(
      162 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      163 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: mediagridlist_fallback.
  $styles['mediagridlist_fallback'] = array(
    'label' => 'mediagridlist_fallback',
    'effects' => array(
      159 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      160 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
      161 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: mediagridlist_mobile.
  $styles['mediagridlist_mobile'] = array(
    'label' => 'mediagridlist_mobile',
    'effects' => array(
      164 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 72,
        ),
        'weight' => 1,
      ),
      165 => array(
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
