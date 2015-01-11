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

  // Exported field_instance: 'node-local_problem-field_add_this'
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
        'label' => 'above',
        'module' => 'addthis_displays',
        'settings' => array(
          'buttons_size' => 'addthis_32x32_style',
          'counter_orientation' => 'vertical',
          'extra_css' => '',
          'share_services' => 'odnoklassniki_ru,vk,facebook,twitter,google_plusone_share,email,print,favorites',
        ),
        'type' => 'addthis_basic_toolbox',
        'weight' => 4,
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

  // Exported field_instance: 'node-local_problem-field_address'
  $field_instances['node-local_problem-field_address'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Укажыце дакладнае месцазнаходжанне праблемы, какб адпаведныя службы магли яе вырашыць',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_address',
    'label' => 'Месцазнаходжанне праблемы',
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

  // Exported field_instance: 'node-local_problem-field_author'
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
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_email'
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
        'type' => 'email_default',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_photos'
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
          'image' => 'image',
          'image_large' => 0,
          'image_main_pic_preview' => 0,
          'image_medium' => 'image_medium',
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
        'insert_width' => 800,
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_pics'
  $field_instances['node-local_problem-field_pics'] = array(
    'bundle' => 'local_problem',
    'deleted' => 0,
    'description' => 'Фота, якое будзе выкарастана ў якасці прэв\'ю да праблемы',
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

  // Exported field_instance: 'node-local_problem-field_problem_map'
  $field_instances['node-local_problem-field_problem_map'] = array(
    'bundle' => 'local_problem',
    'default_value' => array(
      0 => array(
        'geom' => 'POINT (30.234374991606 54.769008628768)',
        'input_format' => 'wkt',
      ),
    ),
    'deleted' => 0,
    'description' => 'Адзначце на гэтай мапе месцазнаходжанне праблемы',
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

  // Exported field_instance: 'node-local_problem-field_problem_phone'
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
        'type' => 'text_default',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_problem_status'
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
        'weight' => 3,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-local_problem-field_text'
  $field_instances['node-local_problem-field_text'] = array(
    'bundle' => 'local_problem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Падрабязнае апісанне праблемы.',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-local_problem_status-field_taxonomy_pic'
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
  t('Адзначце на гэтай мапе месцазнаходжанне праблемы');
  t('Апісанне праблемы');
  t('Аўтар');
  t('Вашае імя. Яно будзе бачна іншым карыстальнікам сайта.');
  t('Галоўны фотаздымак');
  t('Кантактны нумар');
  t('Малюнак маркера статуса мясцовай праблемы.');
  t('Мапа');
  t('Маркер');
  t('Месцазнаходжанне праблемы');
  t('Падзяліцца');
  t('Падрабязнае апісанне праблемы.');
  t('Пакіньце ваш email, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш email не будзе бачны іншым карыстальнікам сайта.');
  t('Пакіньце ваш нумар тэлефона, каб мы маглі з вамі звязацца і напісаць артыкул пра ўказаную вамі праблему або пракансультаваць, як яе можна вырашыць.
<br>
Ваш нумар тэлефона не будзе бачны іншым карыстальнікам сайта.');
  t('Статус праблемы');
  t('Укажыце дакладнае месцазнаходжанне праблемы, какб адпаведныя службы магли яе вырашыць');
  t('Фота, якое будзе выкарастана ў якасці прэв\'ю да праблемы');
  t('Фоты да праблемы');
  t('Фоты, якія выкарыстоўваюцца для ўстаўкі ў тэкст. Для таго, каб уставіць фотаздымак,  загрузіце яго, абярыце пажаданае месца ў тэксце праблемы, націсніце на кнопку "Уставіць".
<br>
Максімальная колькасць фотаздымкаў для адной  праблемы - пяць штук.');

  return $field_instances;
}
