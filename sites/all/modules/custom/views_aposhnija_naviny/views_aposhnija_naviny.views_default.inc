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
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  /* Filter criterion: Змест: Published status */
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

  /* Display: Блок на ўнутраных */
  $handler = $view->new_display('block', 'Блок на ўнутраных', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навіны';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-last-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Больш навінаў';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area_1']['content'] = '<div class="button-black"><a href="/naviny.html">Больш навінаў</a></div>';
  $handler->display->display_options['footer']['area_1']['format'] = 'author_text';
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць навіну';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="button-red"><a href="/node/add/news-from-readers">Дадаць навіну</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Вузел: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'last-date';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'list';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'last-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['block_description'] = 'Апошнія навіны на унутраных старонках';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-media-grid';
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
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
  /* Поле: Фота па змоўчанні */
  $handler->display->display_options['fields']['field_default_image']['id'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['table'] = 'field_data_field_default_image';
  $handler->display->display_options['fields']['field_default_image']['field'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['relationship'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['fields']['field_default_image']['ui_name'] = 'Фота па змоўчанні';
  $handler->display->display_options['fields']['field_default_image']['label'] = '';
  $handler->display->display_options['fields']['field_default_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_default_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_default_image']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>';
  $handler->display->display_options['fields']['field_default_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_default_image']['type'] = 'picture';
  $handler->display->display_options['fields']['field_default_image']['settings'] = array(
    'picture_mapping' => 'mediagrid',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
    'colorbox_settings' => array(
      'colorbox_group' => 'davedka',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'media-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '[field_default_image]';
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'picture';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'picture_mapping' => 'mediagrid',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => 'content',
    'colorbox_settings' => array(
      'colorbox_group' => 'highlight',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
    ),
  );
  /* Поле: Статыстыка */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Статыстыка';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'media-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Последние новости, фото и видео из Горок, Дрибина, Мстиславля и БГСХА. | [site:name]',
        'default' => '',
      ),
      'description' => array(
        'value' => 'На этой странице собраны свежие новости из Горок, Дрибина, Мстиславля и БГСХА, а также из Горецкого, Дрибинского и Мстиславского районов.',
        'default' => '',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'Горки, Дрибин, Мстиславль, БГСХА, Горецкий район, Дрибинский район, Мстиславский район, горецкая академия',
        'default' => '',
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
        'default' => array(
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
      ),
      'referrer' => array(
        'value' => '',
      ),
      'rights' => array(
        'value' => 'horki.info',
        'default' => 'horki.info',
      ),
      'image_src' => array(
        'value' => '',
        'default' => '',
      ),
      'canonical' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'shortlink' => array(
        'value' => '[current-page:url:unaliased]',
        'default' => '[current-page:url:unaliased]',
      ),
      'publisher' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
        'default' => '',
      ),
      'original-source' => array(
        'value' => '',
        'default' => '',
      ),
      'prev' => array(
        'value' => '',
      ),
      'next' => array(
        'value' => '',
      ),
      'content-language' => array(
        'value' => '',
      ),
      'geo.position' => array(
        'value' => '',
      ),
      'geo.placename' => array(
        'value' => '',
      ),
      'geo.region' => array(
        'value' => '',
      ),
      'icbm' => array(
        'value' => '',
      ),
      'refresh' => array(
        'value' => '',
      ),
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'pragma' => array(
        'value' => '',
      ),
      'cache-control' => array(
        'value' => '',
      ),
      'expires' => array(
        'value' => '',
      ),
    ),
  );
  $handler->display->display_options['path'] = 'naviny.html';

  /* Display: Блок на галоўнай */
  $handler = $view->new_display('block', 'Блок на галоўнай', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-last-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Больш навінаў';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area_1']['content'] = '<div class="button-black"><a href="/naviny.html">Больш навінаў</a></div>';
  $handler->display->display_options['footer']['area_1']['format'] = 'author_text';
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць навіну';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="button-red"><a href="/node/add/news-from-readers">Дадаць навіну</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'main_news' => 'main_news',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Вузел: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'last-date';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'list';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'last-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Published status */
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
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Апошнія навіны на галоўнай старонцы';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Навіны RSS */
  $handler = $view->new_display('feed', 'Навіны RSS', 'feed_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навіны з Горак, Дрыбіна і Мсціслава';
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
        'pubDate' => 'published_at',
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
  /* Relationship: Змест: Content author */
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
  /* Поле: Змест: Галоўнае фота */
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
        'pubDate' => 'published_at',
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
  /* Relationship: Змест: Content author */
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
  /* Поле: Змест: Галоўнае фота */
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
  /* Filter criterion: Змест: Published status */
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

  /* Display: Яндекс.Новости RSS  */
  $handler = $view->new_display('feed', 'Яндекс.Новости RSS ', 'feed_2');
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
  /* Relationship: Змест: Content author */
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
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
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
  /* Filter criterion: Змест: Published status */
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

  /* Display: Яндекс.Дзен RSS */
  $handler = $view->new_display('feed', 'Яндекс.Дзен RSS', 'feed_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
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
        'image' => '',
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
    'yandex' => array(
      'views_rss_yandex' => array(
        'logo' => '',
        'logo type=square' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['item'] = array(
    'core' => array(
      'views_rss_core' => array(
        'title' => 'title',
        'link' => 'path',
        'description' => 'field_text_1',
        'author' => 'name',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'created',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => 'field_pics',
        'title' => '',
        'description' => '',
        'keywords' => '',
        'thumbnail' => '',
        'category' => '',
      ),
    ),
    'yandex' => array(
      'views_rss_yandex' => array(
        'full-text' => '',
        'genre' => '',
        'tags' => '',
        'online' => '',
        'enclosure' => '',
        'pdalink' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => 'field_text',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Content author */
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
  $handler->display->display_options['fields']['title']['element_class'] = 'title-bold';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'r';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Апісанне */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['ui_name'] = 'Апісанне';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_1']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text_1']['settings'] = array(
    'trim_length' => '160',
  );
  /* Поле: Галоўнае фота: media:content */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['ui_name'] = 'Галоўнае фота: media:content';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'media_content';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'main_pic_preview',
    'group_multiple_values' => 0,
    'medium' => 'image',
    'expression' => '',
    'generate_hash' => 0,
    'hash_algo' => 'md5',
  );
  /* Поле: Галоўнае фота: малюнак */
  $handler->display->display_options['fields']['field_pics_1']['id'] = 'field_pics_1';
  $handler->display->display_options['fields']['field_pics_1']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics_1']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics_1']['ui_name'] = 'Галоўнае фота: малюнак';
  $handler->display->display_options['fields']['field_pics_1']['label'] = '';
  $handler->display->display_options['fields']['field_pics_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics_1']['settings'] = array(
    'image_style' => 'main_pic_preview',
    'image_link' => '',
  );
  /* Поле: Поўны тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['ui_name'] = 'Поўны тэкст';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['text'] = '[field_pics_1]
[field_text] ';
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = '<p> <img>  ';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['type'] = 'text_plain';
  /* Поле: Карыстальнік: Імя */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Published status */
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
  $handler->display->display_options['path'] = 'zen.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Найбольш папулярнае за тыдзень */
  $handler = $view->new_display('block', 'Найбольш папулярнае за тыдзень', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Папулярнае за тыдзень';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-42 block-last-news';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Больш навінаў';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area_1']['content'] = '<div class="button-black"><a href="/naviny.html">Больш навінаў</a></div>';
  $handler->display->display_options['footer']['area_1']['format'] = 'author_text';
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць навіну';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<div class="button-red"><a href="/node/add/news-from-readers">Дадаць навіну</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Вузел: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['element_class'] = 'last-date';
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'list';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'last-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Node statistics: Recent count */
  $handler->display->display_options['sorts']['recentcount']['id'] = 'recentcount';
  $handler->display->display_options['sorts']['recentcount']['table'] = 'jstats_node';
  $handler->display->display_options['sorts']['recentcount']['field'] = 'recentcount';
  $handler->display->display_options['sorts']['recentcount']['order'] = 'DESC';
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Published status */
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
  /* Filter criterion: Вузел: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['operator'] = 'between';
  $handler->display->display_options['filters']['published_at']['value']['min'] = '-7 days';
  $handler->display->display_options['filters']['published_at']['value']['max'] = 'now';
  $handler->display->display_options['filters']['published_at']['value']['value'] = '7 days';
  $handler->display->display_options['filters']['published_at']['value']['type'] = 'offset';
  $handler->display->display_options['block_description'] = 'Найбольш папулярнае за тыдзень';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['aposhnija_naviny'] = array(
    t('Master'),
    t('Хроніка'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Блок на ўнутраных'),
    t('Навіны'),
    t('Больш навінаў'),
    t('<div class="button-black"><a href="/naviny.html">Больш навінаў</a></div>'),
    t('Дадаць навіну'),
    t('<div class="button-red"><a href="/node/add/news-from-readers">Дадаць навіну</a></div>'),
    t('Апошнія навіны на унутраных старонках'),
    t('Старонка'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('term from field_placement_by_taxonomy'),
    t('<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]'),
    t('.'),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]'),
    t('<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>'),
    t('[field_default_image]'),
    t('<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>'),
    t('Блок на галоўнай'),
    t('чарга'),
    t('Апошнія навіны на галоўнай старонцы'),
    t('Навіны RSS'),
    t('Навіны з Горак, Дрыбіна і Мсціслава'),
    t('author'),
    t('admin@horki.info'),
    t('[field_pics]
[field_text]'),
    t('[field_pics]
[field_text] 
'),
    t('Google RSS '),
    t('Яндекс.Новости RSS '),
    t('horki.info'),
    t('Яндекс.Дзен RSS'),
    t('[field_pics_1]
[field_text] '),
    t('Найбольш папулярнае за тыдзень'),
    t('Папулярнае за тыдзень'),
  );
  $export['aposhnija_naviny'] = $view;

  return $export;
}
