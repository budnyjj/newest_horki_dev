<?php

/**
 * @file
 * image_styles_social_preview.features.inc
 */

/**
 * Implements hook_fontyourface_features_default_font().
 */
function image_styles_social_preview_fontyourface_features_default_font() {
  return array(
    'UniversCondC normal bold' => array(
      'name' => 'UniversCondC normal bold',
      'enabled' => 1,
      'url' => 'http://localhost/#613236ddcc610e185923878d03eb7ca3',
      'provider' => 'local_fonts',
      'css_selector' => NULL,
      'css_family' => 'UniversCondC',
      'css_style' => 'normal',
      'css_weight' => 'bold',
      'css_fallbacks' => '',
      'foundry' => '',
      'foundry_url' => '',
      'license' => '',
      'license_url' => '',
      'designer' => '',
      'designer_url' => '',
      'metadata' => 'a:2:{s:4:"path";s:73:"public://fontyourface/local_fonts/UniversCondC-normal-bold/stylesheet.css";s:8:"font_uri";a:1:{s:8:"truetype";s:76:"public://fontyourface/local_fonts/UniversCondC-normal-bold/universcondcb.ttf";}}',
    ),
  );
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_social_preview_image_default_styles() {
  $styles = array();

  // Exported image style: social_preview.
  $styles['social_preview'] = array(
    'label' => 'social_preview',
    'effects' => array(
      44 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 512,
        ),
        'weight' => 1,
      ),
      45 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 50,
          'scale' => '',
          'path' => 'private://images/social_preview/overlay.png',
        ),
        'weight' => 2,
      ),
      46 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 50,
          'ypos' => 40,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/social_preview/logo_social_preview.png',
        ),
        'weight' => 3,
      ),
      47 => array(
        'name' => 'image_effects_text',
        'data' => array(
          'text_source' => 'text',
          'text' => '[node:social-node-title]',
          'php' => 'if (!$image_context[\'entity\']) {
  return \'No referring entity\';
}
$entity_type = \'node\';
$field_name = \'my_field\';
$entity = $image_context[\'entity\'];
$field = field_get_items($entity_type, $entity, $field_name);
if ($field) {
  return isset($field[0][\'value\']) ? $field[0][\'value\'] : \'No field value\';
}
',
          'text_case' => 'none',
          'fontfile' => 'public://fontyourface/local_fonts/UniversCondC-normal-bold/universcondcb.ttf',
          'size' => 54,
          'RGB' => array(
            'HEX' => '#fcfcfc',
          ),
          'alpha' => 100,
          'xpos' => 50,
          'ypos' => 140,
          'halign' => 'left',
          'valign' => 'top',
          'angle' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}
