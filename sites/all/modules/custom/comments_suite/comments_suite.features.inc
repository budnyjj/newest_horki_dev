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
    'name' => 'user_avatar_block',
    'label' => 'user_avatar_block',
    'effects' => array(
      33 => array(
        'label' => 'Маштаб і абрэзка',
        'help' => 'Маштаб і абразанне будуць устаноўлены прапарцыйна памерам першапачатковага малюнка, а затым будуць абрэзаны па  большаму вымярэнню. Гэта больш карысна для стварэння квадратных мініяцюр без расцяжэння малюнкаў.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_avatar_comment.
  $styles['user_avatar_comment'] = array(
    'name' => 'user_avatar_comment',
    'label' => 'user_avatar_comment',
    'effects' => array(
      32 => array(
        'label' => 'Маштаб і абрэзка',
        'help' => 'Маштаб і абразанне будуць устаноўлены прапарцыйна памерам першапачатковага малюнка, а затым будуць абрэзаны па  большаму вымярэнню. Гэта больш карысна для стварэння квадратных мініяцюр без расцяжэння малюнкаў.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
