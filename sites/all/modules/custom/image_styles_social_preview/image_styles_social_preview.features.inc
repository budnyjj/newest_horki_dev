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

  // Exported image style: node_social_preview_facebook.
  $styles['node_social_preview_facebook'] = array(
    'label' => 'node_social_preview_facebook',
    'effects' => array(
      48 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1200,
          'height' => 630,
        ),
        'weight' => 1,
      ),
      49 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 50,
          'scale' => '',
          'path' => 'private://images/social_preview/overlay/for_facebook.png',
        ),
        'weight' => 2,
      ),
      50 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 60,
          'ypos' => 45,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/social_preview/logo/for_facebook.png',
        ),
        'weight' => 3,
      ),
      51 => array(
        'name' => 'image_effects_text',
        'data' => array(
          'text_source' => 'text',
          'text' => '[node:node-social-title]',
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
          'size' => 62,
          'RGB' => array(
            'HEX' => '#fcfcfc',
          ),
          'alpha' => 100,
          'xpos' => 60,
          'ypos' => 165,
          'halign' => 'left',
          'valign' => 'top',
          'angle' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: node_social_preview_ok.
  $styles['node_social_preview_ok'] = array(
    'label' => 'node_social_preview_ok',
    'effects' => array(
      56 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 640,
          'height' => 320,
        ),
        'weight' => 1,
      ),
      57 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 50,
          'scale' => '',
          'path' => 'private://images/social_preview/overlay/for_ok.png',
        ),
        'weight' => 2,
      ),
      58 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 30,
          'ypos' => 25,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/social_preview/logo/for_ok.png',
        ),
        'weight' => 3,
      ),
      59 => array(
        'name' => 'image_effects_text',
        'data' => array(
          'text_source' => 'text',
          'text' => '[node:node-social-title]',
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
          'size' => 33,
          'RGB' => array(
            'HEX' => '#fcfcfc',
          ),
          'alpha' => 100,
          'xpos' => 30,
          'ypos' => 88,
          'halign' => 'left',
          'valign' => 'top',
          'angle' => 0,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: node_social_preview_twitter.
  $styles['node_social_preview_twitter'] = array(
    'label' => 'node_social_preview_twitter',
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
          'path' => 'private://images/social_preview/overlay/for_twitter.png',
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
          'path' => 'private://images/social_preview/logo/for_twitter.png',
        ),
        'weight' => 3,
      ),
      47 => array(
        'name' => 'image_effects_text',
        'data' => array(
          'text_source' => 'text',
          'text' => '[node:node-social-title]',
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

  // Exported image style: node_social_preview_vk.
  $styles['node_social_preview_vk'] = array(
    'label' => 'node_social_preview_vk',
    'effects' => array(
      52 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 537,
          'height' => 240,
        ),
        'weight' => 1,
      ),
      53 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 0,
          'ypos' => 0,
          'alpha' => 50,
          'scale' => '',
          'path' => 'private://images/social_preview/overlay/for_vk.png',
        ),
        'weight' => 2,
      ),
      54 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 25,
          'ypos' => 20,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/social_preview/logo/for_vk.png',
        ),
        'weight' => 3,
      ),
      55 => array(
        'name' => 'image_effects_text',
        'data' => array(
          'text_source' => 'text',
          'text' => '[node:node-social-title]',
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
          'size' => 29,
          'RGB' => array(
            'HEX' => '#fcfcfc',
          ),
          'alpha' => 100,
          'xpos' => 25,
          'ypos' => 75,
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
