<?php

/**
 * @file
 * content_type_davedka.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_davedka_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-info-field_add_this'.
  $field_instances['node-info-field_add_this'] = array(
    'bundle' => 'info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addthis_displays',
        'settings' => array(
          'buttons_size' => 'addthis_32x32_style',
          'counter_orientation' => 'vertical',
          'extra_css' => '',
          'share_services' => 'odnoklassniki_ru,vk,facebook,twitter,google_plusone_share,email,print,favorites',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 8,
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
        'weight' => 1,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-info-field_daviedka_punkt_menu'.
  $field_instances['node-info-field_daviedka_punkt_menu'] = array(
    'bundle' => 'info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Напішыце кароткую назву гэтай старонкі даведкі (як яна павінна адлюстравацца ў ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_daviedka_punkt_menu',
    'label' => 'Пункт меню для гэтай старонкі',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'php_code' => 'php_code',
          'plain_text' => 'plain_text',
          'user_text' => 'user_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'anonymous_text' => array(
              'weight' => -8,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -7,
            ),
            'user_text' => array(
              'weight' => -9,
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-info-field_index_number'.
  $field_instances['node-info-field_index_number'] = array(
    'bundle' => 'info',
    'default_value' => array(
      0 => array(
        'value' => 10,
      ),
    ),
    'deleted' => 0,
    'description' => 'Парадкавы нумар артыкула ў агульным спісе.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_index_number',
    'label' => 'Парадкавы нумар',
    'required' => 0,
    'settings' => array(
      'max' => 30,
      'min' => -30,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
      ),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-info-field_pics'.
  $field_instances['node-info-field_pics'] = array(
    'bundle' => 'info',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_pics',
    'label' => 'Iлюстрацыя',
    'required' => 1,
    'settings' => array(
      'alt_field' => 1,
      'alt_field_default' => '[node:node-summary]',
      'alt_field_hide' => 1,
      'alt_field_sync_title' => 0,
      'alt_field_update_on_edit' => 1,
      'default_image' => 0,
      'file_directory' => 'guide',
      'file_extensions' => 'png gif jpg jpeg svg',
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
          'value' => 'guide',
        ),
        'redirect' => 0,
        'retroactive_update' => 0,
      ),
      'filefield_paths_enabled' => 0,
      'max_filesize' => '',
      'max_resolution' => '1200x1600',
      'min_resolution' => '',
      'title_field' => 1,
      'title_field_default' => '[node:title] | [site:name]',
      'title_field_hide' => 1,
      'title_field_update_on_edit' => 1,
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
          'auto' => 0,
          'colorbox__article_colorbox' => 0,
          'colorbox__article_default' => 0,
          'colorbox__article_default_fallback' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
          'colorbox__article_mobile' => 0,
          'colorbox__article_wide' => 0,
          'colorbox__article_wide_fallback' => 0,
          'colorbox__article_with_logo_default' => 0,
          'colorbox__article_with_logo_default_fallback' => 0,
          'colorbox__article_with_logo_mobile' => 0,
          'colorbox__article_with_logo_wide' => 0,
          'colorbox__article_with_logo_wide_fallback' => 0,
          'colorbox__filtered-table' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_desktop' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_fallback' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_narrow' => 0,
          'colorbox__highlight_breakpoints_theme_horki2_mobile_normal' => 0,
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_desktop' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_fallback' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_narrow' => 0,
          'colorbox__mediagrid_breakpoints_theme_horki2_mobile_normal' => 0,
          'colorbox__mediagridlist_desktop' => 0,
          'colorbox__mediagridlist_fallback' => 0,
          'colorbox__mediagridlist_mobile' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_social_preview_facebook' => 0,
          'colorbox__node_social_preview_ok' => 0,
          'colorbox__node_social_preview_twitter' => 0,
          'colorbox__node_social_preview_vk' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__printed_desktop' => 0,
          'colorbox__printed_fallback' => 0,
          'colorbox__printed_mobile' => 0,
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
          'image_article_colorbox' => 0,
          'image_article_default' => 0,
          'image_article_default_fallback' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
          'image_article_mobile' => 0,
          'image_article_wide' => 0,
          'image_article_wide_fallback' => 0,
          'image_article_with_logo_default' => 0,
          'image_article_with_logo_default_fallback' => 0,
          'image_article_with_logo_mobile' => 0,
          'image_article_with_logo_wide' => 0,
          'image_article_with_logo_wide_fallback' => 0,
          'image_filtered-table' => 0,
          'image_highlight_breakpoints_theme_horki2_desktop' => 0,
          'image_highlight_breakpoints_theme_horki2_fallback' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_narrow' => 0,
          'image_highlight_breakpoints_theme_horki2_mobile_normal' => 0,
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_mediagrid_breakpoints_theme_horki2_desktop' => 0,
          'image_mediagrid_breakpoints_theme_horki2_fallback' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_narrow' => 0,
          'image_mediagrid_breakpoints_theme_horki2_mobile_normal' => 0,
          'image_mediagridlist_desktop' => 0,
          'image_mediagridlist_fallback' => 0,
          'image_mediagridlist_mobile' => 0,
          'image_medium' => 0,
          'image_node_social_preview_facebook' => 0,
          'image_node_social_preview_ok' => 0,
          'image_node_social_preview_twitter' => 0,
          'image_node_social_preview_vk' => 0,
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_printed_desktop' => 0,
          'image_printed_fallback' => 0,
          'image_printed_mobile' => 0,
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
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-info-field_placement_by_taxonomy'.
  $field_instances['node-info-field_placement_by_taxonomy'] = array(
    'bundle' => 'info',
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
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_placement_by_taxonomy',
    'label' => 'Месцы',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-info-field_text'.
  $field_instances['node-info-field_text'] = array(
    'bundle' => 'info',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Тэкст даведкi',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
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
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_text',
    'label' => 'Тэкст',
    'required' => 1,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'ads_text' => 0,
          'anonymous_text' => 0,
          'author_text' => 'author_text',
          'comment_text' => 0,
          'company_text' => 0,
          'php_code' => 'php_code',
          'plain_text' => 0,
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
              'weight' => -8,
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
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Iлюстрацыя');
  t('Месцы');
  t('Напішыце кароткую назву гэтай старонкі даведкі (як яна павінна адлюстравацца ў ');
  t('Падзяліцца');
  t('Парадкавы нумар');
  t('Парадкавы нумар артыкула ў агульным спісе.');
  t('Пункт меню для гэтай старонкі');
  t('Тэкст');
  t('Тэкст даведкi');

  return $field_instances;
}
