<?php
/**
 * @file
 * content_type_static.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_static_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-static-body'.
  $field_instances['node-static-body'] = array(
    'bundle' => 'static',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Змест',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-static-field_pdf'.
  $field_instances['node-static-field_pdf'] = array(
    'bundle' => 'static',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'pdf_reader',
        'settings' => array(
          'colorbox' => 0,
          'colorbox_link_text' => '',
          'download' => 0,
          'pdf_height' => '',
          'pdf_width' => '100%',
          'renderer' => 'direct',
        ),
        'type' => 'pdf_reader_file',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pdf',
    'label' => 'PDF',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => 'static',
      'file_extensions' => 'pdf',
      'max_filesize' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
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
        'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('PDF');
  t('Змест');

  return $field_instances;
}
