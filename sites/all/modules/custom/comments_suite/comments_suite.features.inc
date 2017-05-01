<?php
/**
 * @file
 * comments_suite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function comments_suite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function comments_suite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function comments_suite_image_default_styles() {
  $styles = array();

  // Exported image style: user_avatar_block.
  $styles['user_avatar_block'] = array(
    'label' => 'user_avatar_block',
    'effects' => array(
      51 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 16,
          'height' => 16,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_avatar_comment.
  $styles['user_avatar_comment'] = array(
    'label' => 'user_avatar_comment',
    'effects' => array(
      46 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 70,
          'height' => 70,
        ),
        'weight' => 1,
      ),
      47 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 35,
          'independent_corners_set' => array(
            'independent_corners' => 0,
            'radii' => array(
              'tl' => 0,
              'tr' => 0,
              'bl' => 0,
              'br' => 0,
            ),
          ),
        ),
        'weight' => 2,
      ),
      48 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  return $styles;
}
