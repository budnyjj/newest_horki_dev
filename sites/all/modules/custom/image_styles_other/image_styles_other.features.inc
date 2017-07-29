<?php
/**
 * @file
 * image_styles_other.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function image_styles_other_image_default_styles() {
  $styles = array();

  // Exported image style: filtered-table.
  $styles['filtered-table'] = array(
    'label' => 'filtered_table',
    'effects' => array(
      50 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: main_pic_preview.
  $styles['main_pic_preview'] = array(
    'label' => 'main_pic_preview',
    'effects' => array(),
  );

  // Exported image style: node_teaser_preview.
  $styles['node_teaser_preview'] = array(
    'label' => 'node_teaser_preview',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 165,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: photo_video_preview.
  $styles['photo_video_preview'] = array(
    'label' => 'photo_video_preview',
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 282,
          'height' => 200,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: square_news_preview.
  $styles['square_news_preview'] = array(
    'label' => 'square_news_preview',
    'effects' => array(
      21 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 50,
          'height' => 50,
        ),
        'weight' => 2,
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

  // Exported image style: user_avatar_comment_block.
  $styles['user_avatar_comment_block'] = array(
    'label' => 'user_avatar_comment_block',
    'effects' => array(
      66 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 25,
          'height' => 25,
        ),
        'weight' => 1,
      ),
      67 => array(
        'name' => 'canvasactions_roundedcorners',
        'data' => array(
          'radius' => 13,
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
      68 => array(
        'name' => 'coloractions_convert',
        'data' => array(
          'format' => 'image/png',
          'quality' => 75,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: user_avatar_login.
  $styles['user_avatar_login'] = array(
    'label' => 'user_avatar_login',
    'effects' => array(
      49 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 16,
          'height' => 16,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_avatar_page.
  $styles['user_avatar_page'] = array(
    'label' => 'user_avatar_page',
    'effects' => array(
      31 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: uzgorak_preview.
  $styles['uzgorak_preview'] = array(
    'label' => 'uzgorak_preview',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 100,
          'height' => 142,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
