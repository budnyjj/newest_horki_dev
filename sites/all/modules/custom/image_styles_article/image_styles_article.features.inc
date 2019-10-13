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

  // Exported image style: article_breakpoints_theme_horki2_desktop_narrow.
  $styles['article_breakpoints_theme_horki2_desktop_narrow'] = array(
    'label' => 'article_breakpoints_theme_horki2_desktop_narrow',
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

  // Exported image style: article_breakpoints_theme_horki2_desktop_normal.
  $styles['article_breakpoints_theme_horki2_desktop_normal'] = array(
    'label' => 'article_breakpoints_theme_horki2_desktop_normal',
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

  // Exported image style: article_breakpoints_theme_horki2_fallback_narrow.
  $styles['article_breakpoints_theme_horki2_fallback_narrow'] = array(
    'label' => 'article_breakpoints_theme_horki2_fallback_narrow',
    'effects' => array(
      129 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
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

  // Exported image style: article_breakpoints_theme_horki2_fallback_normal.
  $styles['article_breakpoints_theme_horki2_fallback_normal'] = array(
    'label' => 'article_breakpoints_theme_horki2_fallback_normal',
    'effects' => array(
      132 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
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

  // Exported image style: article_breakpoints_theme_horki2_mobile_narrow.
  $styles['article_breakpoints_theme_horki2_mobile_narrow'] = array(
    'label' => 'article_breakpoints_theme_horki2_mobile_narrow',
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

  // Exported image style: article_breakpoints_theme_horki2_mobile_normal.
  $styles['article_breakpoints_theme_horki2_mobile_normal'] = array(
    'label' => 'article_breakpoints_theme_horki2_mobile_normal',
    'effects' => array(
      82 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 918,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      128 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 3,
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_desktop_narrow.
  $styles['article_with_logo_breakpoints_theme_horki2_desktop_narrow'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_desktop_narrow',
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
          'path' => 'private://images/watermark/copyright_desktop_narrow.png',
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_desktop_normal.
  $styles['article_with_logo_breakpoints_theme_horki2_desktop_normal'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_desktop_normal',
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
          'path' => 'private://images/watermark/copyright_desktop_normal.png',
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_fallback_narrow.
  $styles['article_with_logo_breakpoints_theme_horki2_fallback_narrow'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_fallback_narrow',
    'effects' => array(
      140 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 894,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      141 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 15',
          'ypos' => 12,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_desktop_narrow.png',
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_fallback_normal.
  $styles['article_with_logo_breakpoints_theme_horki2_fallback_normal'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_fallback_normal',
    'effects' => array(
      143 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      144 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 20',
          'ypos' => 17,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_desktop_normal.png',
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_mobile_narrow.
  $styles['article_with_logo_breakpoints_theme_horki2_mobile_narrow'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_mobile_narrow',
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
          'path' => 'private://images/watermark/copyright_mobile_narrow.png',
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

  // Exported image style: article_with_logo_breakpoints_theme_horki2_mobile_normal.
  $styles['article_with_logo_breakpoints_theme_horki2_mobile_normal'] = array(
    'label' => 'article_with_logo_breakpoints_theme_horki2_mobile_normal',
    'effects' => array(
      70 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 918,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
      76 => array(
        'name' => 'canvasactions_file2canvas',
        'data' => array(
          'xpos' => 'right + 17',
          'ypos' => 13,
          'alpha' => 100,
          'scale' => '',
          'path' => 'private://images/watermark/copyright_mobile_normal.png',
        ),
        'weight' => 2,
      ),
      139 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/webp',
          'quality' => 75,
        ),
        'weight' => 4,
      ),
    ),
  );

  return $styles;
}
