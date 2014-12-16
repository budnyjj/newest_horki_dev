<?php
/**
 * @file
 * views_aposhnija_naviny.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_aposhnija_naviny_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aposhnija_naviny';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Апошнія навіны';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Хроніка';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Прымяніць';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'created',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'title-bold';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  /* Sort criterion: Змест: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'afisha' => 'afisha',
    'news' => 'news',
    'news_from_readers' => 'news_from_readers',
  );

  /* Display: Блок на галоўнай */
  $handler = $view->new_display('block', 'Блок на галоўнай', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'больш навінаў';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span class="comments-counter">[comment_count]</span>';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][comment_count]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'black-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'node';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Блок на ўнутраных старонках */
  $handler = $view->new_display('block', 'Блок на ўнутраных старонках', 'block_1');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'больш навінаў';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '<span class="comments-counter">[comment_count]</span>';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][comment_count]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'black-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'node';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Апошнія навіны';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'media-grid-page';
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'больш навінаў';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'node';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd.m.y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Поле: Node statistics: Recent count */
  $handler->display->display_options['fields']['recentcount']['id'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['table'] = 'jstats_node';
  $handler->display->display_options['fields']['recentcount']['field'] = 'recentcount';
  $handler->display->display_options['fields']['recentcount']['label'] = '';
  $handler->display->display_options['fields']['recentcount']['exclude'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['alter']['text'] = '| [recentcount] <img src="/sites/default/files/default_images/view-icon.png">';
  $handler->display->display_options['fields']['recentcount']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['recentcount']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['recentcount']['separator'] = '';
  /* Поле: Змест: Колькасць каментароў */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['exclude'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['alter']['text'] = '| [comment_count] <img src="/sites/default/files/default_images/comment-icon.png">';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['comment_count']['separator'] = '';
  /* Поле: Змест: Прэв'ю */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>';
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'photo_video_preview',
    'image_link' => 'content',
  );
  /* Поле: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="statistics-list">[created] [recentcount] [comment_count]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][comment_count]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'dark-red-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Последние новости | [site:name]',
    ),
    'description' => array(
      'value' => 'Новости из Горок, Дрибина и Мстиславля на одной странице. Навіны з Горак, Дрыбіна і Мсціслава на адной старонцы.',
    ),
    'keywords' => array(
      'value' => 'Горкі, Мсціслаў, Горацкі кірмаш, БГСХА, Дрибинский район, Горки, Мстиславль',
    ),
  );
  $handler->display->display_options['path'] = 'naviny.html';

  /* Display: Навіны RSS */
  $handler = $view->new_display('feed', 'Навіны RSS', 'feed_1');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА. Апошнія навіны з Горак, Дрыбіна, Мсціслава, БДСГА.',
        'language' => '',
        'category' => '',
        'image' => 'sites/default/files/logo/logo_horki_small.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'nothing',
        'author' => 'mail',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
    'yandex' => array(
      'views_rss_yandex' => array(
        'full-text' => '',
        'genre' => '',
        'tags' => '',
        'online' => '',
        'enclosure' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Аўтар */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Карыстальнік: Адрас E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['empty'] = 'admin@horki.info';
  $handler->display->display_options['fields']['mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text']['settings'] = array(
    'trim_length' => '300',
  );
  /* Поле: Змест: Прэв'ю */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'main_pic_preview',
    'image_link' => '',
  );
  /* Поле: RSS description */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'RSS description';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_pics]
[field_text] 
';
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['path'] = 'naviny.xml';

  /* Display: Яндэкс RSS  */
  $handler = $view->new_display('feed', 'Яндэкс RSS ', 'feed_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА. Апошнія навіны з Горак, Дрыбіна, Мсціслава, БДСГА.',
        'language' => '',
        'category' => '',
        'image' => 'sites/default/files/logo/logo_horki_small.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_text',
        'author' => 'mail',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'yandex' => array(
      'views_rss_yandex' => array(
        'full-text' => 'field_text_1',
        'genre' => '',
        'tags' => '',
        'online' => '',
        'enclosure' => 'field_pics',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Аўтар */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Вузел: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'custom';
  $handler->display->display_options['fields']['published_at']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Карыстальнік: Адрас E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['empty'] = 'admin@horki.info';
  $handler->display->display_options['fields']['mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Поле: Апісанне */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['ui_name'] = 'Апісанне';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text']['settings'] = array(
    'trim_length' => '160',
  );
  /* Поле: Змест: Прэв'ю */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'main_pic_preview',
    'image_link' => '',
  );
  /* Поле: Поўны тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['ui_name'] = 'Поўны тэкст';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Змест: Экспарт у RSS для Яндэкса ды Google (field_export_rss_yandex_google) */
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['id'] = 'field_export_rss_yandex_google_value';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['table'] = 'field_data_field_export_rss_yandex_google';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['field'] = 'field_export_rss_yandex_google_value';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'yandex.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Google RSS  */
  $handler = $view->new_display('feed', 'Google RSS ', 'feed_3');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА. Апошнія навіны з Горак, Дрыбіна, Мсціслава, БДСГА.',
        'language' => '',
        'category' => '',
        'image' => 'sites/default/files/logo/logo_horki_small.png',
        'copyright' => '',
        'managingEditor' => '',
        'webMaster' => '',
        'generator' => '',
        'docs' => '',
        'cloud' => '',
        'ttl' => '',
        'skipHours' => '',
        'skipDays' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'nothing',
        'author' => 'mail',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
    'yandex' => array(
      'views_rss_yandex' => array(
        'full-text' => '',
        'genre' => '',
        'tags' => '',
        'online' => '',
        'enclosure' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Аўтар */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Карыстальнік: Адрас E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['relationship'] = 'uid';
  $handler->display->display_options['fields']['mail']['label'] = '';
  $handler->display->display_options['fields']['mail']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['mail']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['mail']['empty'] = 'admin@horki.info';
  $handler->display->display_options['fields']['mail']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['mail']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = '<a>';
  $handler->display->display_options['fields']['field_text']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text']['settings'] = array(
    'trim_length' => '300',
  );
  /* Поле: Змест: Прэв'ю */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['alter']['text'] = '[field_pics]
[field_text]';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'main_pic_preview',
    'image_link' => '',
  );
  /* Поле: RSS description */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'RSS description';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_pics]
[field_text] 
';
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = TRUE;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );
  /* Filter criterion: Змест: Экспарт у RSS для Яндэкса ды Google (field_export_rss_yandex_google) */
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['id'] = 'field_export_rss_yandex_google_value';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['table'] = 'field_data_field_export_rss_yandex_google';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['field'] = 'field_export_rss_yandex_google_value';
  $handler->display->display_options['filters']['field_export_rss_yandex_google_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'google.xml';
  $translatables['aposhnija_naviny'] = array(
    t('Master'),
    t('Хроніка'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Блок на галоўнай'),
    t('больш навінаў'),
    t('<span class="comments-counter">[comment_count]</span>'),
    t('.'),
    t(','),
    t('[title][comment_count]'),
    t('Блок на ўнутраных старонках'),
    t('Старонка'),
    t('Апошнія навіны'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('| [recentcount] <img src="/sites/default/files/default_images/view-icon.png">'),
    t('| [comment_count] <img src="/sites/default/files/default_images/comment-icon.png">'),
    t('<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>'),
    t('<div class="statistics-list">[created] [recentcount] [comment_count]</div>'),
    t('Навіны RSS'),
    t('author'),
    t('admin@horki.info'),
    t('[field_pics]
[field_text]'),
    t('[field_pics]
[field_text] 
'),
    t('Яндэкс RSS '),
    t('horki.info'),
    t('Google RSS '),
  );
  $export['aposhnija_naviny'] = $view;

  return $export;
}
