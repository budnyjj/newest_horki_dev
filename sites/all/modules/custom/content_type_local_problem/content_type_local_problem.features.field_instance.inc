<?php

/**
 * @file
 * content_type_local_problem.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_local_problem_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-local_problem-field_add_this'.
  $field_instances['node-local_problem-field_add_this'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addthis',
        'settings' => array(),
        'type' => 'addthis_disabled',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'addthis_displays',
        'settings' => array(
          'buttons_size' => 'addthis_32x32_style',
          'counter_orientation' => 'vertical',
          'extra_css' => '',
          'share_services' => 'viber, odnoklassniki_ru,vk,facebook,twitter,email',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_add_this',
    'label' => 'Падзяліцца',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'addthis',
      'settings' => array(),
      'type' => 'addthis_button_widget',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_address'.
  $field_instances['node-local_problem-field_address'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Укажыце дакладны адрас месца, дзе знаходзіцца праблема, каб адпаведныя службы маглі яе вырашыць.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Адрас',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 'ads_text',
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 'comment_text',
          'company_text' => 'company_text',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_truncate_html' => 0,
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_author'.
  $field_instances['node-local_problem-field_author'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Вашае імя. Яно будзе бачна іншым карыстальнікам сайта.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author',
    'label' => 'Аўтар',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 'ads_text',
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 'comment_text',
          'company_text' => 'company_text',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_email'.
  $field_instances['node-local_problem-field_email'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Пакіньце ваш email, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш email не будзе бачны іншым карыстальнікам сайта.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_plain',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'E-mail',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_photos'.
  $field_instances['node-local_problem-field_photos'] = array(
    'bundle' => 'local_problem',
    'deleted' => 0,
    'description' => 'Фоты, якія выкарыстоўваюцца для ўстаўкі ў тэкст. Для таго, каб уставіць фотаздымак,  загрузіце яго, абярыце пажаданае месца ў тэксце праблемы, націсніце на кнопку "Уставіць".
<br>
Максімальная колькасць фотаздымкаў для адной  праблемы - пяць штук.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos',
    'label' => 'Фоты да праблемы',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'local_problems/[current-date:system]',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'local_problems/[current-date:system]',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '2MB',
      'max_resolution' => '1200x1600',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__article_colorbox' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__filtered-table' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_social_preview_facebook' => 0,
          'colorbox__node_social_preview_ok' => 0,
          'colorbox__node_social_preview_twitter' => 0,
          'colorbox__node_social_preview_vk' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__term_social_preview' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__user_avatar_comment' => 0,
          'colorbox__user_avatar_comment_2' => 0,
          'colorbox__user_avatar_comment_block' => 0,
          'colorbox__user_avatar_login' => 0,
          'colorbox__user_avatar_page' => 0,
          'colorbox__user_avatar_page_2' => 0,
          'colorbox__uzgorak_preview' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_article_colorbox' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_filtered-table' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_medium' => 0,
          'image_node_social_preview_facebook' => 0,
          'image_node_social_preview_ok' => 0,
          'image_node_social_preview_twitter' => 0,
          'image_node_social_preview_vk' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
          'image_term_social_preview' => 0,
          'image_thumbnail' => 0,
          'image_user_avatar_comment' => 0,
          'image_user_avatar_comment_2' => 0,
          'image_user_avatar_comment_block' => 0,
          'image_user_avatar_login' => 0,
          'image_user_avatar_page' => 0,
          'image_user_avatar_page_2' => 0,
          'image_uzgorak_preview' => 0,
          'link' => 0,
        ),
        'insert_width' => 800,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_pics'.
  $field_instances['node-local_problem-field_pics'] = array(
    'bundle' => 'local_problem',
    'deleted' => 0,
    'description' => 'Фота, якое будзе выкарастана ў якасці прэв\'ю да праблемы.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pics',
    'label' => 'Галоўны фотаздымак',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'local_problems/[current-date:system]',
      'file_extensions' => 'png gif jpg jpeg',
      'filefield_paths' => array(
        'active_updating' => 0,
        'file_name' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => '[file:ffp-name-only-original].[file:ffp-extension-original]',
        ),
        'file_path' => array(
          'options' => array(
            'pathauto' => 0,
            'slashes' => 0,
            'transliterate' => 0,
          ),
          'value' => 'local_problems/[current-date:system]',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '2MB',
      'max_resolution' => '1200x1600',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__article_colorbox' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_with_logo_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__filtered-table' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_social_preview_facebook' => 0,
          'colorbox__node_social_preview_ok' => 0,
          'colorbox__node_social_preview_twitter' => 0,
          'colorbox__node_social_preview_vk' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__term_social_preview' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__user_avatar_comment' => 0,
          'colorbox__user_avatar_comment_2' => 0,
          'colorbox__user_avatar_comment_block' => 0,
          'colorbox__user_avatar_login' => 0,
          'colorbox__user_avatar_page' => 0,
          'colorbox__user_avatar_page_2' => 0,
          'colorbox__uzgorak_preview' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_article_colorbox' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_with_logo_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_filtered-table' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_medium' => 0,
          'image_node_social_preview_facebook' => 0,
          'image_node_social_preview_ok' => 0,
          'image_node_social_preview_twitter' => 0,
          'image_node_social_preview_vk' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
          'image_term_social_preview' => 0,
          'image_thumbnail' => 0,
          'image_user_avatar_comment' => 0,
          'image_user_avatar_comment_2' => 0,
          'image_user_avatar_comment_block' => 0,
          'image_user_avatar_login' => 0,
          'image_user_avatar_page' => 0,
          'image_user_avatar_page_2' => 0,
          'image_uzgorak_preview' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_placement_by_taxonomy'.
  $field_instances['node-local_problem-field_placement_by_taxonomy'] = array(
    'bundle' => 'local_problem',
    'default_value' => array(
      0 => array(
        'tid' => 58,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_placement_by_taxonomy',
    'label' => 'Месца',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_problem_map'.
  $field_instances['node-local_problem-field_problem_map'] = array(
    'bundle' => 'local_problem',
    'default_value' => array(
      0 => array(
        'geom' => 'POINT (30.986251746458 54.287584555939)',
        'input_format' => 'wkt',
      ),
    ),
    'deleted' => 0,
    'description' => 'Адзначце на гэтай мапе дакладнае месца, дзе знаходзіцца праблема.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 8,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_problem_map',
    'label' => 'Мапа',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'openlayers',
      'settings' => array(
        'allow_edit' => 0,
        'data_storage' => 'single',
        'feature_types' => array(
          'path' => 0,
          'point' => 'point',
          'polygon' => 0,
        ),
        'openlayers_map' => 'geofield_local_problems',
      ),
      'type' => 'geofield_openlayers',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_problem_phone'.
  $field_instances['node-local_problem-field_problem_phone'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Пакіньце ваш нумар тэлефона, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш нумар тэлефона не будзе бачны іншым карыстальнікам сайта.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_problem_phone',
    'label' => 'Кантактны нумар',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 'ads_text',
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 'comment_text',
          'company_text' => 'company_text',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_problem_status'.
  $field_instances['node-local_problem-field_problem_status'] = array(
    'bundle' => 'local_problem',
    'default_value' => array(
      0 => array(
        'tid' => 156,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_problem_status',
    'label' => 'Статус праблемы',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_text'.
  $field_instances['node-local_problem-field_text'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Падрабязнае апісанне праблемы. Каб ўставіць відэа, выкарыстоўвайце код: 
[VIDEO::http://www.youtube.com/watch?v=someVideoID::normal]',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Апісанне праблемы',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 0,
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'php_code' => 0,
          'plain_text' => 'plain_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'ads_text' => array(
              'weight' => 0,
            ),
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'comment_text' => array(
              'weight' => 0,
            ),
            'company_text' => array(
              'weight' => 0,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'maxlength_js' => '',
        'maxlength_js_enforce' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_label_summary' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'maxlength_js_summary' => '',
        'maxlength_js_truncate_html' => 0,
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_this_problem_on_map'.
  $field_instances['node-local_problem-field_this_problem_on_map'] = array(
    'bundle' => 'local_problem',
    'default_value' => array(
      0 => array(
        'vname' => 'map_local_problems|block_1',
        'vargs' => '',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 10,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'viewfield',
        'settings' => array(),
        'type' => 'viewfield_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_this_problem_on_map',
    'label' => 'Абраная мясцовая праблема на мапе',
    'required' => 1,
    'settings' => array(
      'allowed_views' => array(
        'admin_views_comment' => 0,
        'admin_views_node' => 0,
        'admin_views_user' => 0,
        'aposhnija_naviny' => 0,
        'catalog_company' => 0,
        'comments_block' => 0,
        'daviedka' => 0,
        'fontyourface_browse' => 0,
        'front' => 0,
        'genres' => 0,
        'knowledge_base' => 0,
        'last_comments' => 0,
        'latest_objects' => 0,
        'library' => 0,
        'local_problems' => 0,
        'map_local_problems' => 'map_local_problems',
        'news_by_regions' => 0,
        'news_from_readers' => 0,
        'old_streets' => 0,
        'photoblog' => 0,
        'rubrics' => 0,
        'similarterms' => 0,
        'uzgorak' => 0,
        'videoblog' => 0,
      ),
      'force_default' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'viewfield',
      'settings' => array(),
      'type' => 'viewfield_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-local_problem_status-field_taxonomy_pic'.
  $field_instances['taxonomy_term-local_problem_status-field_taxonomy_pic'] = array(
    'bundle' => 'local_problem_status',
    'deleted' => 0,
    'description' => 'Малюнак маркера статуса мясцовай праблемы.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_pic',
    'label' => 'Маркер',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'default_images/status',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__user_avatar_block' => 0,
          'colorbox__user_avatar_comment' => 0,
          'colorbox__user_avatar_page' => 0,
          'colorbox__uzgorak_preview' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_medium' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
          'image_thumbnail' => 0,
          'image_user_avatar_block' => 0,
          'image_user_avatar_comment' => 0,
          'image_user_avatar_page' => 0,
          'image_uzgorak_preview' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');
  t('Абраная мясцовая праблема на мапе');
  t('Адзначце на гэтай мапе дакладнае месца, дзе знаходзіцца праблема.');
  t('Адрас');
  t('Апісанне праблемы');
  t('Аўтар');
  t('Вашае імя. Яно будзе бачна іншым карыстальнікам сайта.');
  t('Галоўны фотаздымак');
  t('Кантактны нумар');
  t('Малюнак маркера статуса мясцовай праблемы.');
  t('Мапа');
  t('Маркер');
  t('Месца');
  t('Падзяліцца');
  t('Падрабязнае апісанне праблемы. Каб ўставіць відэа, выкарыстоўвайце код: 
[VIDEO::http://www.youtube.com/watch?v=someVideoID::normal]');
  t('Пакіньце ваш email, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш email не будзе бачны іншым карыстальнікам сайта.');
  t('Пакіньце ваш нумар тэлефона, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш нумар тэлефона не будзе бачны іншым карыстальнікам сайта.');
  t('Статус праблемы');
  t('Укажыце дакладны адрас месца, дзе знаходзіцца праблема, каб адпаведныя службы маглі яе вырашыць.');
  t('Фота, якое будзе выкарастана ў якасці прэв\'ю да праблемы.');
  t('Фоты да праблемы');
  t('Фоты, якія выкарыстоўваюцца для ўстаўкі ў тэкст. Для таго, каб уставіць фотаздымак,  загрузіце яго, абярыце пажаданае месца ў тэксце праблемы, націсніце на кнопку "Уставіць".
<br>
Максімальная колькасць фотаздымкаў для адной  праблемы - пяць штук.');

  return $field_instances;
}
