<?php
/**
 * @file
 * image_styles_mediagrid_uzgorak.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function image_styles_mediagrid_uzgorak_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function image_styles_mediagrid_uzgorak_image_default_styles() {
  $styles = array();

  // Exported image style: mediagrid-uzgorak_breakpoints_theme_horki2_desktop_narrow_1x.
  $styles['mediagrid-uzgorak_breakpoints_theme_horki2_desktop_narrow_1x'] = array(
    'label' => 'mediagrid-uzgorak_breakpoints_theme_horki2_desktop_narrow_1x',
    'effects' => array(
      70 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 142,
          'height' => 200,
        ),
        'weight' => 2,
      ),
      74 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#EFEFEF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 282,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: mediagrid-uzgorak_breakpoints_theme_horki2_desktop_normal_1x.
  $styles['mediagrid-uzgorak_breakpoints_theme_horki2_desktop_normal_1x'] = array(
    'label' => 'mediagrid-uzgorak_breakpoints_theme_horki2_desktop_normal_1x',
    'effects' => array(
      69 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 142,
          'height' => 200,
        ),
        'weight' => 1,
      ),
      73 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#EFEFEF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 282,
            'height' => 200,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: mediagrid-uzgorak_breakpoints_theme_horki2_mobile_narrow_1x.
  $styles['mediagrid-uzgorak_breakpoints_theme_horki2_mobile_narrow_1x'] = array(
    'label' => 'mediagrid-uzgorak_breakpoints_theme_horki2_mobile_narrow_1x',
    'effects' => array(
      72 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 200,
          'height' => 284,
        ),
        'weight' => 2,
      ),
      75 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#EFEFEF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 400,
            'height' => 284,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: mediagrid-uzgorak_breakpoints_theme_horki2_mobile_normal_1x.
  $styles['mediagrid-uzgorak_breakpoints_theme_horki2_mobile_normal_1x'] = array(
    'label' => 'mediagrid-uzgorak_breakpoints_theme_horki2_mobile_normal_1x',
    'effects' => array(
      71 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 460,
          'height' => 650,
        ),
        'weight' => 2,
      ),
      76 => array(
        'name' => 'canvasactions_definecanvas',
        'data' => array(
          'RGB' => array(
            'HEX' => '#EFEFEF',
          ),
          'under' => 1,
          'exact' => array(
            'width' => 918,
            'height' => 650,
            'xpos' => 'center',
            'ypos' => 'center',
          ),
          'relative' => array(
            'leftdiff' => '',
            'rightdiff' => '',
            'topdiff' => '',
            'bottomdiff' => '',
          ),
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
