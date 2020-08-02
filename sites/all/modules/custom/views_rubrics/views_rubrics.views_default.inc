<?php

/**
 * @file
 * views_rubrics.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_rubrics_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rubrics';
  $view->description = 'A view to emulate Drupal core\'s handling of taxonomy/term.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Рубрыкі';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'БГСХА (Горецкая академия): новости и фото';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '300';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Прымяніць';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Relationship: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Тэрмін таксаноміі: Дэфолтны здымак на старонцы рубрыкі */
  $handler->display->display_options['fields']['field_default_image']['id'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['table'] = 'field_data_field_default_image';
  $handler->display->display_options['fields']['field_default_image']['field'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['relationship'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['fields']['field_default_image']['label'] = '';
  $handler->display->display_options['fields']['field_default_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['text'] = '<a href="[path]">[field_default_image]</a>';
  $handler->display->display_options['fields']['field_default_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_default_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_default_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'dark-red-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_text_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text_1']['element_class'] = 'table-teaser';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_1']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_text_1']['settings'] = array(
    'trim_length' => '160',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'pic-list';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '[field_default_image]';
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_class'] = 'date-list';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'node';
  /* Поле: Змест: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Sort criterion: Змест: Sticky status */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Змест: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Змест: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE;
  /* Contextual filter: Змест: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE;
  /* Filter criterion: Змест: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-media-grid-list';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Больш навінаў';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Node statistics: Recent count */
  $handler->display->display_options['fields']['recentcount']['id'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['table'] = 'jstats_node';
  $handler->display->display_options['fields']['recentcount']['field'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['label'] = '';
  $handler->display->display_options['fields']['recentcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['text'] = '<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]';
  $handler->display->display_options['fields']['recentcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['recentcount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['separator'] = ' ';
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['separator'] = ' ';
  /* Поле: Тэрмін таксаноміі: Дэфолтны здымак на старонцы рубрыкі */
  $handler->display->display_options['fields']['field_default_image']['id'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['table'] = 'field_data_field_default_image';
  $handler->display->display_options['fields']['field_default_image']['field'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['relationship'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['fields']['field_default_image']['label'] = '';
  $handler->display->display_options['fields']['field_default_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['text'] = '<a href="[path]">[field_default_image]</a>';
  $handler->display->display_options['fields']['field_default_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_default_image']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>';
  $handler->display->display_options['fields']['field_default_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_default_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_default_image']['settings'] = array(
    'picture_mapping' => 'mediagrid',
    'fallback_image_style' => 'mediagrid_breakpoints_theme_horki2_fallback',
    'lazyload' => 1,
    'lazyload_aspect_ratio' => 1,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'highlight',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '<a href="[path]">[field_default_image]</a>';
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'picture';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'picture_mapping' => 'mediagrid',
    'fallback_image_style' => 'mediagrid_breakpoints_theme_horki2_fallback',
    'lazyload' => 1,
    'lazyload_aspect_ratio' => 1,
    'image_link' => 'content',
    'colorbox_settings' => array(
      'colorbox_group' => 'highlight',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Поле: Фота са статыстыкай */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Фота са статыстыкай';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media-photo">
[field_pics]
</div>
<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_type'] = '0';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'media-photo-with-statistics';
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'media-title';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Змест: Sticky status */
  $handler->display->display_options['sorts']['sticky']['id'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['table'] = 'node';
  $handler->display->display_options['sorts']['sticky']['field'] = 'sticky';
  $handler->display->display_options['sorts']['sticky']['order'] = 'DESC';
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Published status or admin user */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['group'] = 0;
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'afisha' => 'afisha',
    'news' => 'news',
    'news_from_readers' => 'news_from_readers',
    'old_place' => 'old_place',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
      ),
      'robots' => array(
        'value' => array(
          'index' => 0,
          'follow' => 0,
          'noindex' => 0,
          'nofollow' => 0,
          'noarchive' => 0,
          'nosnippet' => 0,
          'noodp' => 0,
          'noydir' => 0,
          'noimageindex' => 0,
          'notranslate' => 0,
        ),
        'default' => array(),
      ),
      'news_keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'standout' => array(
        'value' => '',
        'default' => '',
      ),
      'rating' => array(
        'value' => '',
        'default' => '',
      ),
      'referrer' => array(
        'value' => '',
        'default' => '',
      ),
      'rights' => array(
        'value' => '',
        'default' => '',
      ),
      'image_src' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'set_cookie' => array(
        'value' => '',
        'default' => '',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
        'default' => '',
      ),
      'next' => array(
        'value' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => 'ru',
        'default' => 'ru',
      ),
      'geo.position' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.placename' => array(
        'value' => '',
        'default' => '',
      ),
      'geo.region' => array(
        'value' => '',
        'default' => '',
      ),
      'icbm' => array(
        'value' => '',
        'default' => '',
      ),
      'refresh' => array(
        'value' => '',
        'default' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
        'default' => '',
      ),
      'cache-control' => array(
        'value' => '',
        'default' => '',
      ),
      'expires' => array(
        'value' => '',
        'default' => '',
      ),
      'google' => array(
        'value' => '',
      ),
      'fb:admins' => array(
        'value' => '',
        'default' => '',
      ),
      'fb:app_id' => array(
        'value' => '1404750383092736',
        'default' => '1404750383092736',
      ),
      'fb:pages' => array(
        'value' => '',
        'default' => '',
      ),
      'og:type' => array(
        'value' => 'website',
        'default' => 'website',
      ),
      'og:url' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'og:title' => array(
        'value' => '[view:title]',
        'default' => '[view:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => '',
        'default' => '',
      ),
      'og:updated_time' => array(
        'value' => '',
        'default' => '',
      ),
      'og:see_also' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'og:image:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:alt' => array(
        'value' => '',
      ),
      'og:image:type' => array(
        'value' => 'image/png',
        'default' => 'image/png',
      ),
      'og:image:width' => array(
        'value' => '968',
        'default' => '968',
      ),
      'og:image:height' => array(
        'value' => '504',
        'default' => '504',
      ),
      'og:latitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:longitude' => array(
        'value' => '',
        'default' => '',
      ),
      'og:street_address' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locality' => array(
        'value' => '',
        'default' => '',
      ),
      'og:region' => array(
        'value' => '',
        'default' => '',
      ),
      'og:postal_code' => array(
        'value' => '',
        'default' => '',
      ),
      'og:country_name' => array(
        'value' => '',
        'default' => '',
      ),
      'og:email' => array(
        'value' => '',
        'default' => '',
      ),
      'og:phone_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:fax_number' => array(
        'value' => '',
        'default' => '',
      ),
      'og:locale' => array(
        'value' => 'ru_RU',
        'default' => 'ru_RU',
      ),
      'og:locale:alternate' => array(
        'value' => 'be_BY',
        'default' => 'be_BY',
      ),
      'article:author' => array(
        'value' => '',
        'default' => '',
      ),
      'article:publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'article:section' => array(
        'value' => '',
        'default' => '',
      ),
      'article:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'article:published_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:modified_time' => array(
        'value' => '',
        'default' => '',
      ),
      'article:expiration_time' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:first_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:last_name' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:username' => array(
        'value' => '',
        'default' => '',
      ),
      'profile:gender' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:audio:type' => array(
        'value' => '',
        'default' => '',
      ),
      'book:author' => array(
        'value' => '',
        'default' => '',
      ),
      'book:isbn' => array(
        'value' => '',
        'default' => '',
      ),
      'book:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'book:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:height' => array(
        'value' => '',
        'default' => '',
      ),
      'og:video:type' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor' => array(
        'value' => '',
        'default' => '',
      ),
      'video:actor:role' => array(
        'value' => '',
        'default' => '',
      ),
      'video:director' => array(
        'value' => '',
        'default' => '',
      ),
      'video:writer' => array(
        'value' => '',
        'default' => '',
      ),
      'video:duration' => array(
        'value' => '',
        'default' => '',
      ),
      'video:release_date' => array(
        'value' => '',
        'default' => '',
      ),
      'video:tag' => array(
        'value' => '',
        'default' => '',
      ),
      'video:series' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:card' => array(
        'value' => 'summary_large_image',
        'default' => 'summary_large_image',
      ),
      'twitter:creator' => array(
        'value' => '@horki_info',
        'default' => '@horki_info',
      ),
      'twitter:creator:id' => array(
        'value' => '120533731',
        'default' => '120533731',
      ),
      'twitter:url' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'twitter:title' => array(
        'value' => '[view:title]',
        'default' => '[view:title]',
      ),
      'twitter:description' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'twitter:image:width' => array(
        'value' => '968',
        'default' => '968',
      ),
      'twitter:image:height' => array(
        'value' => '504',
        'default' => '504',
      ),
      'twitter:image:alt' => array(
        'value' => '[current-page:title]',
        'default' => '[current-page:title]',
      ),
      'twitter:image0' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image3' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:player:stream:content_type' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:country' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:iphone' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:ipad' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:name:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:id:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:app:url:googleplay' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data1' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:label2' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:data2' => array(
        'value' => '',
        'default' => '',
      ),
      'schema_article.@type' => array(
        'value' => '',
      ),
      'schema_article.headline' => array(
        'value' => '',
      ),
      'schema_article.name' => array(
        'value' => '',
      ),
      'schema_article.description' => array(
        'value' => '',
      ),
      'schema_article.author' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_article.publisher' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_article.datePublished' => array(
        'value' => '',
      ),
      'schema_article.dateModified' => array(
        'value' => '',
      ),
      'schema_article.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_article.mainEntityOfPage' => array(
        'value' => '',
      ),
      'schema_article.hasPart' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'timeRequired' => '',
          'potentialAction' => array(
            'actionType' => '',
            'pivot' => '',
            'ConsumeAction' => array(
              '@type' => '',
              'target' => array(
                'pivot' => '',
                '@type' => '',
                'urlTemplate' => '',
                'actionPlatform' => '',
                'inLanguage' => '',
              ),
              'expectsAcceptanceOf' => array(
                'pivot' => '',
                '@type' => '',
                '@id' => '',
                'price' => '',
                'priceCurrency' => '',
                'url' => '',
                'itemCondition' => '',
                'availability' => '',
                'availabilityStarts' => '',
                'availabilityEnds' => '',
                'validFrom' => '',
                'category' => '',
                'eligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
                'ineligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
              ),
            ),
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'expectsAcceptanceOf' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'price' => '',
              'priceCurrency' => '',
              'url' => '',
              'itemCondition' => '',
              'availability' => '',
              'availabilityStarts' => '',
              'availabilityEnds' => '',
              'validFrom' => '',
              'category' => '',
              'eligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
              'ineligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
            ),
            '@type' => '',
          ),
          'isAccessibleForFree' => '',
          'cssSelector' => '',
        ),
      ),
      'schema_article.isAccessibleForFree' => array(
        'value' => '',
      ),
      'schema_article.speakable' => array(
        'value' => array(
          '@type' => '',
          'xpath' => '',
          'cssSelector' => '',
        ),
      ),
      'schema_article.about' => array(
        'value' => '',
      ),
      'schema_article.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_article.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_item_list.@type' => array(
        'value' => 'ItemList',
      ),
      'schema_item_list.@id' => array(
        'value' => '',
      ),
      'schema_item_list.itemListElement' => array(
        'value' => 'rubrics:page:[view:url:unaliased:args:last]',
      ),
      'schema_item_list.mainEntityOfPage' => array(
        'value' => '',
      ),
      'schema_organization.@type' => array(
        'value' => '',
      ),
      'schema_organization.additionalType' => array(
        'value' => '',
      ),
      'schema_organization.@id' => array(
        'value' => '',
      ),
      'schema_organization.name' => array(
        'value' => '',
      ),
      'schema_organization.address' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'streetAddress' => '',
          'addressLocality' => '',
          'addressRegion' => '',
          'postalCode' => '',
          'addressCountry' => '',
        ),
      ),
      'schema_organization.geo' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'latitude' => '',
          'longitude' => '',
        ),
      ),
      'schema_organization.telephone' => array(
        'value' => '',
      ),
      'schema_organization.contactPoint' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'telephone' => '',
          'url' => '',
          'availableLanguage' => '',
          'contactType' => '',
          'contactOption' => '',
          'areaServed' => array(
            'pivot' => '',
            '@type' => '',
            'name' => '',
            'url' => '',
            'address' => array(
              'pivot' => '',
              '@type' => '',
              'streetAddress' => '',
              'addressLocality' => '',
              'addressRegion' => '',
              'postalCode' => '',
              'addressCountry' => '',
            ),
            'geo' => array(
              'pivot' => '',
              '@type' => '',
              'latitude' => '',
              'longitude' => '',
            ),
            'country' => array(
              'pivot' => '',
              '@type' => '',
              'name' => '',
            ),
          ),
          'email' => '',
          'faxnumber' => '',
          'productSupported' => '',
        ),
      ),
      'schema_organization.url' => array(
        'value' => '',
      ),
      'schema_organization.sameAs' => array(
        'value' => '',
      ),
      'schema_organization.description' => array(
        'value' => '',
      ),
      'schema_organization.brand' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_organization.acceptsReservations' => array(
        'value' => '',
      ),
      'schema_organization.menu' => array(
        'value' => '',
      ),
      'schema_organization.openingHoursSpecification' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'dayOfWeek' => '',
          'opens' => '',
          'closes' => '',
          'validFrom' => '',
          'validThrough' => '',
        ),
      ),
      'schema_organization.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_organization.logo' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_organization.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'TradeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'OrganizeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'result' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'name' => '',
              'url' => '',
            ),
          ),
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
          'result' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
          ),
        ),
      ),
      'schema_organization.priceRange' => array(
        'value' => '',
      ),
      'schema_organization.memberOf' => array(
        'value' => array(
          '@type' => '',
          'name' => '',
          'programName' => '',
          'alternateName' => '',
          'hostingOrganization' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'member' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'membershipNumber' => '',
          'identifier' => '',
          'additionalType' => '',
          'description' => '',
          'disambiguatingDescription' => '',
          'image' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
          'mainEntityOfPage' => '',
          'url' => '',
          'sameAs' => '',
        ),
      ),
      'schema_organization.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_organization.starRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_organization.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_video_object.@type' => array(
        'value' => '',
      ),
      'schema_video_object.@id' => array(
        'value' => '',
      ),
      'schema_video_object.name' => array(
        'value' => '',
      ),
      'schema_video_object.description' => array(
        'value' => '',
      ),
      'schema_video_object.uploadDate' => array(
        'value' => '',
      ),
      'schema_video_object.expires' => array(
        'value' => '',
      ),
      'schema_video_object.thumbnailUrl' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_video_object.contentUrl' => array(
        'value' => '',
      ),
      'schema_video_object.embedUrl' => array(
        'value' => '',
      ),
      'schema_video_object.duration' => array(
        'value' => '',
      ),
      'schema_video_object.interactionCount' => array(
        'value' => '',
      ),
      'schema_video_object.transcript' => array(
        'value' => '',
      ),
      'schema_video_object.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_video_object.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_web_site.@type' => array(
        'value' => '',
      ),
      'schema_web_site.@id' => array(
        'value' => '',
      ),
      'schema_web_site.name' => array(
        'value' => '',
      ),
      'schema_web_site.url' => array(
        'value' => '',
      ),
      'schema_web_site.sameAs' => array(
        'value' => '',
      ),
      'schema_web_site.publisher' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_web_site.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'pivot' => '',
          'SearchAction' => array(
            '@type' => '',
            'query' => '',
            'query-input' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'query' => '',
          'query-input' => '',
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
        ),
      ),
      'schema_web_site.inLanguage' => array(
        'value' => '',
      ),
      'schema_web_site.translationOfWork' => array(
        'value' => array(
          '@id' => '',
        ),
      ),
      'schema_web_site.workTranslation' => array(
        'value' => array(
          'pivot' => '',
          '@id' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['path'] = 'taxonomy/term/%';
  $translatables['rubrics'] = array(
    t('Master'),
    t('БГСХА (Горецкая академия): новости и фото'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('term from field_placement_by_taxonomy'),
    t('<a href="[path]">[field_default_image]</a>'),
    t('[title]'),
    t('[field_default_image]'),
    t('Nid'),
    t('Усе'),
    t('%1'),
    t('Старонка'),
    t('Больш навінаў'),
    t('<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]'),
    t('.'),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]'),
    t('<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>'),
    t('<div class="media-photo">
[field_pics]
</div>
<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>'),
  );
  $export['rubrics'] = $view;

  return $export;
}
