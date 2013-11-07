<?php
/**
 * @file
 * user_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function user_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function user_registration_image_default_styles() {
  $styles = array();

  // Exported image style: user_avatar.
  $styles['user_avatar'] = array(
    'name' => 'user_avatar',
    'label' => 'user_avatar',
    'effects' => array(
      31 => array(
        'label' => 'Маштаб і абрэзка',
        'help' => 'Маштаб і абразанне будуць устаноўлены прапарцыйна памерам першапачатковага малюнка, а затым будуць абрэзаны па  большаму вымярэнню. Гэта больш карысна для стварэння квадратных мініяцюр без расцяжэння малюнкаў.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
