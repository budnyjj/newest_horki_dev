<?php
/**
 * @file
 * content_type_news_from_readers.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_news_from_readers_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-news_from_readers-field_add_this'.
  $field_instances['node-news_from_readers-field_add_this'] = array(
    'bundle' => 'news_from_readers',
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
          'counter_orientation' => 'horizontal',
          'extra_css' => '',
          'share_services' => 'odnoklassniki_ru,vk,facebook,twitter,email',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 3,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-news_from_readers-field_author'.
  $field_instances['node-news_from_readers-field_author'] = array(
    'bundle' => 'news_from_readers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Вашае імя. Яно будзе бачна іншым карыстальнікам сайта.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_author',
    'label' => 'Аўтар',
    'required' => 1,
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
        'maxlength_js' => 0,
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-news_from_readers-field_email'.
  $field_instances['node-news_from_readers-field_email'] = array(
    'bundle' => 'news_from_readers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ваш e-mail не будзе даступны іншым карыстальнікам сайта.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_email',
    'label' => 'E-mail',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-news_from_readers-field_photos'.
  $field_instances['node-news_from_readers-field_photos'] = array(
    'bundle' => 'news_from_readers',
    'deleted' => 0,
    'description' => 'Фоты, якія выкарыстоўваюцца для ўстаўкі ў тэкст. Для таго, каб уставіць фотаздымак,  загрузіце яго, абярыце пажаданае месца ў тэксце навіны, націсніце на кнопку "Уставіць".
<br>
Максімальная колькасць фотаздымкаў для адной навіны - пяць штук.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 6,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_photos',
    'label' => 'Фоты да тэксту',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'narodnyja/[current-date:system]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'insert' => 1,
        'insert_absolute' => 1,
        'insert_class' => '',
        'insert_default' => 'image_medium',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__large' => 0,
          'colorbox__main_pic_preview' => 0,
          'colorbox__medium' => 0,
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__thumbnail' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_medium' => 'image_medium',
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => 800,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-news_from_readers-field_pics'.
  $field_instances['node-news_from_readers-field_pics'] = array(
    'bundle' => 'news_from_readers',
    'deleted' => 0,
    'description' => 'Фота, якое будзе выкарастана ў якасці прэв\'ю да навіны.',
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
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'main_pic_preview',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pics',
    'label' => 'Галоўнае фота',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'narodnyja/[current-date:system]',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '2MB',
      'max_resolution' => '',
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
        'insert_default' => 'image_medium',
        'insert_styles' => array(
          'auto' => 'auto',
          'colorbox__article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'colorbox__article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'colorbox__article_colorbox' => 0,
          'colorbox__article_gallery' => 0,
          'colorbox__article_gallery_thumbnail' => 0,
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
          'colorbox__node_teaser_preview' => 0,
          'colorbox__photo_video_preview' => 0,
          'colorbox__square_news_preview' => 0,
          'colorbox__thumbnail' => 0,
          'colorbox__user_avatar_comment' => 0,
          'colorbox__user_avatar_comment_2' => 0,
          'colorbox__user_avatar_comment_block' => 0,
          'colorbox__user_avatar_login' => 0,
          'colorbox__user_avatar_page' => 0,
          'colorbox__user_avatar_page_2' => 0,
          'colorbox__uzgorak_preview' => 0,
          'icon_link' => 0,
          'image' => 'image',
          'image_article_breakpoints_theme_horki2_desktop_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_desktop_normal_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_narrow_1x' => 0,
          'image_article_breakpoints_theme_horki2_mobile_normal_1x' => 0,
          'image_article_colorbox' => 0,
          'image_article_gallery' => 0,
          'image_article_gallery_thumbnail' => 0,
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
          'image_medium' => 'image_medium',
          'image_node_teaser_preview' => 0,
          'image_photo_video_preview' => 0,
          'image_square_news_preview' => 0,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'node-news_from_readers-field_placement_by_taxonomy'.
  $field_instances['node-news_from_readers-field_placement_by_taxonomy'] = array(
    'bundle' => 'news_from_readers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_placement_by_taxonomy',
    'label' => 'Месцы',
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

  // Exported field_instance: 'node-news_from_readers-field_rubric_by_taxonomy'.
  $field_instances['node-news_from_readers-field_rubric_by_taxonomy'] = array(
    'bundle' => 'news_from_readers',
    'default_value' => NULL,
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
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'rss' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rubric_by_taxonomy',
    'label' => 'Рубрыкі',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'maxlength_js_label' => 'Тэкст будзе абрэзаны да @limit сімвалаў, засталося <strong>@remaining</strong>.',
      ),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-news_from_readers-field_text'.
  $field_instances['node-news_from_readers-field_text'] = array(
    'bundle' => 'news_from_readers',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Асноўны змест навіны. Каб ўставіць відэа, выкарыстоўвайце код: 
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
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
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
          'anonymous_text' => 'anonymous_text',
          'author_text' => 'author_text',
          'php_code' => 0,
          'plain_text' => 'plain_text',
          'user_text' => 'user_text',
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'anonymous_text' => array(
              'weight' => 0,
            ),
            'author_text' => array(
              'weight' => -10,
            ),
            'php_code' => array(
              'weight' => 11,
            ),
            'plain_text' => array(
              'weight' => -8,
            ),
            'user_text' => array(
              'weight' => -9,
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
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-places-field_default_image'.
  $field_instances['taxonomy_term-places-field_default_image'] = array(
    'bundle' => 'places',
    'deleted' => 0,
    'description' => '',
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
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_default_image',
    'label' => 'Дэфолтны здымак на старонцы рубрыкі',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'default_images/places',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-places-field_taxonomy_pic'.
  $field_instances['taxonomy_term-places-field_taxonomy_pic'] = array(
    'bundle' => 'places',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_taxonomy_pic',
    'label' => 'Малюнак',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'icons',
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
        'insert_absolute' => FALSE,
        'insert_class' => '',
        'insert_default' => array(
          0 => 'auto',
        ),
        'insert_styles' => array(
          0 => 'auto',
        ),
        'insert_width' => '',
        'preview_image_style' => 'square_news_preview',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('E-mail');
  t('Асноўны змест навіны. Каб ўставіць відэа, выкарыстоўвайце код: 
 [VIDEO::http://www.youtube.com/watch?v=someVideoID::normal]');
  t('Аўтар');
  t('Ваш e-mail не будзе даступны іншым карыстальнікам сайта.');
  t('Вашае імя. Яно будзе бачна іншым карыстальнікам сайта.');
  t('Галоўнае фота');
  t('Дэфолтны здымак на старонцы рубрыкі');
  t('Малюнак');
  t('Месцы');
  t('Падзяліцца');
  t('Рубрыкі');
  t('Тэкст');
  t('Фота, якое будзе выкарастана ў якасці прэв\'ю да навіны.');
  t('Фоты да тэксту');
  t('Фоты, якія выкарыстоўваюцца для ўстаўкі ў тэкст. Для таго, каб уставіць фотаздымак,  загрузіце яго, абярыце пажаданае месца ў тэксце навіны, націсніце на кнопку "Уставіць".
<br>
Максімальная колькасць фотаздымкаў для адной навіны - пяць штук.');

  return $field_instances;
}
