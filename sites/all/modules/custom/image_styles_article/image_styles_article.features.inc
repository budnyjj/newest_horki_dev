<?php
/**
 * @file
 * image_styles_article.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_article_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_article_image_default_styles() {
  $styles = array();

  // Exported image style: article_breakpoints_theme_horki2_desktop_narrow_1x.
  $styles['article_breakpoints_theme_horki2_desktop_narrow_1x'] = array(
    'label' => 'article_breakpoints_theme_horki2_desktop_narrow_1x',
    'effects' => array(
      57 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
          'height' => 670,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_breakpoints_theme_horki2_desktop_normal_1x.
  $styles['article_breakpoints_theme_horki2_desktop_normal_1x'] = array(
    'label' => 'article_breakpoints_theme_horki2_desktop_normal_1x',
    'effects' => array(
      56 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
          'height' => 670,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_breakpoints_theme_horki2_mobile_narrow_1x.
  $styles['article_breakpoints_theme_horki2_mobile_narrow_1x'] = array(
    'label' => 'article_breakpoints_theme_horki2_mobile_narrow_1x',
    'effects' => array(
      59 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => 300,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_breakpoints_theme_horki2_mobile_normal_1x.
  $styles['article_breakpoints_theme_horki2_mobile_normal_1x'] = array(
    'label' => 'article_breakpoints_theme_horki2_mobile_normal_1x',
    'effects' => array(
      58 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 918,
          'height' => 688,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_colorbox.
  $styles['article_colorbox'] = array(
    'label' => 'article_colorbox',
    'effects' => array(
      61 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 800,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_gallery.
  $styles['article_gallery'] = array(
    'label' => 'article_gallery',
    'effects' => array(
      62 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 894,
          'height' => 670,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: article_gallery_thumbnail.
  $styles['article_gallery_thumbnail'] = array(
    'label' => 'article_gallery_thumbnail',
    'effects' => array(
      63 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
