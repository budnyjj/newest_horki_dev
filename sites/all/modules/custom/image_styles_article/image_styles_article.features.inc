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

  // Exported image style: article_default.
  $styles['article_default'] = array(
    'label' => 'article_default',
    'effects' => array(
      72 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      125 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article_default_fallback.
  $styles['article_default_fallback'] = array(
    'label' => 'article_default_fallback',
    'effects' => array(
      129 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 447,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      131 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 2,
      ),
      130 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
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

  // Exported image style: article_mobile.
  $styles['article_mobile'] = array(
    'label' => 'article_mobile',
    'effects' => array(
      73 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      127 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article_wide.
  $styles['article_wide'] = array(
    'label' => 'article_wide',
    'effects' => array(
      79 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      126 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article_wide_fallback.
  $styles['article_wide_fallback'] = array(
    'label' => 'article_wide_fallback',
    'effects' => array(
      132 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      134 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
      135 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: article_with_logo_default.
  $styles['article_with_logo_default'] = array(
    'label' => 'article_with_logo_default',
    'effects' => array(
      69 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      74 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 15',
          'ypos' => 12,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_default.png',
        ),
        'weight' => 2,
      ),
      136 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: article_with_logo_default_fallback.
  $styles['article_with_logo_default_fallback'] = array(
    'label' => 'article_with_logo_default_fallback',
    'effects' => array(
      140 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 447,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      141 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 8',
          'ypos' => 6,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_default_fallback.png',
        ),
        'weight' => 2,
      ),
      146 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
      142 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: article_with_logo_mobile.
  $styles['article_with_logo_mobile'] = array(
    'label' => 'article_with_logo_mobile',
    'effects' => array(
      71 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 400,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      77 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 7',
          'ypos' => 5,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_mobile.png',
        ),
        'weight' => 2,
      ),
      138 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: article_with_logo_wide.
  $styles['article_with_logo_wide'] = array(
    'label' => 'article_with_logo_wide',
    'effects' => array(
      68 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      75 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 20',
          'ypos' => 17,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_wide.png',
        ),
        'weight' => 2,
      ),
      137 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 4,
      ),
    ),
  );

  // Exported image style: article_with_logo_wide_fallback.
  $styles['article_with_logo_wide_fallback'] = array(
    'label' => 'article_with_logo_wide_fallback',
    'effects' => array(
      143 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      144 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 10',
          'ypos' => 9,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_wide_fallback.png',
        ),
        'weight' => 2,
      ),
      147 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/jpeg',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
      145 => array(
        'name' => 'canvasactions_interlace',
        'data' => array(),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}
