<?php

/**
 * @file
 * views_rss_custom_feeds.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_rss_custom_feeds_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'rss';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RSS';
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
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
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

  /* Display: Навіны */
  $handler = $view->new_display('feed', 'Навіны', 'feed_news');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навіны з Горак, Дрыбіна і Мсціслава';
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
        'description' => 'nothing',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Змест: Галоўны фотаздымак */
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
  $handler->display->display_options['path'] = 'news.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Google */
  $handler = $view->new_display('feed', 'Google', 'feed_google');
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
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
        'description' => 'nothing',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text_1',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Скарочаны тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['ui_name'] = 'Скарочаны тэкст';
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
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  /* Поле: Змест: Галоўны фотаздымак */
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

  /* Display: VK */
  $handler = $view->new_display('feed', 'VK', 'feed_vk');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навіны з Горак, Дрыбіна і Мсціслава';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
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
        'description' => 'nothing',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text_1',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  /* Поле: Скарочаны тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['ui_name'] = 'Скарочаны тэкст';
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
  /* Поле: Змест: Галоўны фотаздымак */
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
  $handler->display->display_options['path'] = 'vk.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Twitter */
  $handler = $view->new_display('feed', 'Twitter', 'feed_twitter');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Навіны з Горак, Дрыбіна і Мсціслава';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
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
        'description' => 'nothing',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text_1',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
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
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  /* Поле: Скарочаны тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['ui_name'] = 'Скарочаны тэкст';
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
  /* Поле: Змест: Галоўны фотаздымак */
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
  $handler->display->display_options['path'] = 'twitter.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Яндекс.Новости */
  $handler = $view->new_display('feed', 'Яндекс.Новости', 'feed_yandex');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
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
        'description' => 'field_text',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => 'path',
        'pubDate' => 'published_at',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text_1',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
        'title' => '',
        'description' => '',
        'keywords' => '',
        'thumbnail' => '',
        'category' => '',
      ),
    ),
    'yandex' => array(
      'views_rss_yandex' => array(
        'full-text' => 'field_text_1',
        'genre' => '',
        'tags' => '',
        'online' => '',
        'enclosure' => 'field_pics',
        'pdalink' => '',
      ),
    ),
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Змест: Галоўны фотаздымак */
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

  /* Display: Яндекс.Дзен */
  $handler = $view->new_display('feed', 'Яндекс.Дзен', 'feed_zen');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
    'views_rss_yandex_zen' => array(
      'zen' => '',
    ),
  );
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА.',
        'language' => 'ru',
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
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => 'field_pics',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => '',
        'topic' => '',
        'content' => '',
      ),
    ),
    'zen' => array(
      'views_rss_yandex_zen' => array(
        'enclosure' => 'field_text',
        'content' => 'field_text',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['relationships'] = FALSE;
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
  /* Поле: Галоўнае фота: enclosure */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['ui_name'] = 'Галоўнае фота: enclosure';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['type'] = 'enclosure';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'main_pic_preview',
  );
  /* Поле: Скарочаны тэкст */
  $handler->display->display_options['fields']['field_text_1']['id'] = 'field_text_1';
  $handler->display->display_options['fields']['field_text_1']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text_1']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text_1']['ui_name'] = 'Скарочаны тэкст';
  $handler->display->display_options['fields']['field_text_1']['label'] = '';
  $handler->display->display_options['fields']['field_text_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_1']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_text_1']['settings'] = array(
    'trim_length' => '160',
  );
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = ' <h1> <h2> <h3> <h4> <h5> <h6> <p> <b> <strong> <i> <em> <sup> <sub> <a> <blockquote> <img> <table> <tr> <th> <td>';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
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
  $translatables['rss'] = array(
    t('Master'),
    t('Хроніка'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Навіны'),
    t('Навіны з Горак, Дрыбіна і Мсціслава'),
    t('[field_pics]
[field_text]'),
    t('[field_pics]
[field_text] 
'),
    t('Google'),
    t('VK'),
    t('Twitter'),
    t('author'),
    t('Яндекс.Новости'),
    t('horki.info'),
    t('Яндекс.Дзен'),
  );
  $export['rss'] = $view;

  $view = new view();
  $view->name = 'rss_yandex_turbo';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RSS: Yandex.Turbo';
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
  $handler->display->display_options['cache']['results_lifespan'] = '1800';
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

  /* Display: Навіны: апошнія */
  $handler = $view->new_display('feed', 'Навіны: апошнія', 'feed_turbo_news_last');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА.',
        'language' => 'ru',
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
        'description' => '',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => 'path',
        'topic' => 'title',
        'content' => 'nothing_1',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = ' <h1> <h2> <h3> <h4> <h5> <h6> <p> <br> <b> <strong> <i> <em> <sup> <sub> <a> <blockquote> <img> <table> <tr> <th> <td> <iframe>';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Поле: Змест: Месцы */
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['id'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['field'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['element_label_colon'] = FALSE;
  /* Поле: Змест: Рубрыкі */
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['id'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['field'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['separator'] = ' ';
  /* Поле: Змест: Дадатковыя тэгі */
  $handler->display->display_options['fields']['field_additional_taxonomy']['id'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['table'] = 'field_data_field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['field'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_additional_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_additional_taxonomy']['separator'] = ' ';
  /* Поле: Змест */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Змест';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<header><h1>[title]</h1>[field_pics]</header>
[field_text]
<div data-block="share" data-network="odnoklassniki, vkontakte, facebook, twitter"></div>
<p><strong>Тэгі</strong> [field_placement_by_taxonomy] [field_rubric_by_taxonomy] [field_additional_taxonomy]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'news_from_readers' => 'news_from_readers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Вузел: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['operator'] = '>=';
  $handler->display->display_options['filters']['published_at']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['published_at']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'turbo/news/last.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Навіны: папулярныя */
  $handler = $view->new_display('feed', 'Навіны: папулярныя', 'feed_turbo_news_popular');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА.',
        'language' => 'ru',
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
        'description' => '',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => 'path',
        'topic' => 'title',
        'content' => 'nothing_1',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = ' <h1> <h2> <h3> <h4> <h5> <h6> <p> <br> <b> <strong> <i> <em> <sup> <sub> <a> <blockquote> <img> <table> <tr> <th> <td> <iframe>';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Поле: Змест: Месцы */
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['id'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['field'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['element_label_colon'] = FALSE;
  /* Поле: Змест: Рубрыкі */
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['id'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['field'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['separator'] = ' ';
  /* Поле: Змест: Дадатковыя тэгі */
  $handler->display->display_options['fields']['field_additional_taxonomy']['id'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['table'] = 'field_data_field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['field'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_additional_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_additional_taxonomy']['separator'] = ' ';
  /* Поле: Змест */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Змест';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<header><h1>[title]</h1>[field_pics]</header>
[field_text]
<div data-block="share" data-network="odnoklassniki, vkontakte, facebook, twitter"></div>
<p><strong>Тэгі</strong> [field_placement_by_taxonomy] [field_rubric_by_taxonomy] [field_additional_taxonomy]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'news_from_readers' => 'news_from_readers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Вузел: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['operator'] = '<';
  $handler->display->display_options['filters']['published_at']['value']['value'] = '-30 days';
  $handler->display->display_options['filters']['published_at']['value']['type'] = 'offset';
  /* Filter criterion: Node statistics: Recent count */
  $handler->display->display_options['filters']['recentcount']['id'] = 'recentcount';
  $handler->display->display_options['filters']['recentcount']['table'] = 'jstats_node';
  $handler->display->display_options['filters']['recentcount']['field'] = 'recentcount';
  $handler->display->display_options['filters']['recentcount']['operator'] = '>=';
  $handler->display->display_options['filters']['recentcount']['value']['value'] = '3000';
  $handler->display->display_options['path'] = 'turbo/news/popular.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Навіны: фотаблог */
  $handler = $view->new_display('feed', 'Навіны: фотаблог', 'feed_turbo_news_photos');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
    'views_rss_yandex_zen' => array(
      'zen' => '',
    ),
  );
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА.',
        'language' => 'ru',
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
        'description' => '',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => 'path',
        'topic' => 'title',
        'content' => 'nothing_1',
        'content_gallery' => '',
      ),
    ),
    'zen' => array(
      'views_rss_yandex_zen' => array(
        'enclosure' => '',
        'content' => '',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = ' <h1> <h2> <h3> <h4> <h5> <h6> <p> <br> <b> <strong> <i> <em> <sup> <sub> <a> <blockquote> <img> <table> <tr> <th> <td> <iframe>';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Поле: Змест: Месцы */
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['id'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['field'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['element_label_colon'] = FALSE;
  /* Поле: Змест: Рубрыкі */
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['id'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['field'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['separator'] = ' ';
  /* Поле: Змест: Дадатковыя тэгі */
  $handler->display->display_options['fields']['field_additional_taxonomy']['id'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['table'] = 'field_data_field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['field'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_additional_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_additional_taxonomy']['separator'] = ' ';
  /* Поле: Змест */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Змест';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<header><h1>[title]</h1>[field_pics]</header>
[field_text]
<div data-block="share" data-network="odnoklassniki, vkontakte, facebook, twitter"></div>
<p><strong>Тэгі</strong> [field_placement_by_taxonomy] [field_rubric_by_taxonomy] [field_additional_taxonomy]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
    'news_from_readers' => 'news_from_readers',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  $handler->display->display_options['path'] = 'turbo/news/photos.xml';
  $handler->display->display_options['sitename_title'] = 0;

  /* Display: Афіша */
  $handler = $view->new_display('feed', 'Афіша', 'feed_turbo_afisha');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'horki.info';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss_fields';
  $handler->display->display_options['style_options']['namespaces'] = array(
    'views_rss_custom' => array(
      'custom' => '',
    ),
  );
  $handler->display->display_options['style_options']['channel'] = array(
    'core' => array(
      'views_rss_core' => array(
        'description' => 'Свежие новости из Горок, Дрибина, Мстиславля, БГСХА.',
        'language' => 'ru',
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
        'description' => '',
        'author' => '',
        'category' => '',
        'comments' => '',
        'enclosure' => '',
        'guid' => '',
        'pubDate' => 'created',
      ),
    ),
    'custom' => array(
      'views_rss_custom' => array(
        'author' => 'field_text',
      ),
    ),
    'media' => array(
      'views_rss_media' => array(
        'content' => '',
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
    'turbo' => array(
      'views_rss_yandex_turbo' => array(
        'source' => 'path',
        'topic' => 'title',
        'content' => 'nothing_1',
      ),
    ),
    'content' => array(
      'views_rss_content' => array(
        'encoded' => '',
      ),
    ),
  );
  $handler->display->display_options['style_options']['feed_settings'] = array(
    'absolute_paths' => 1,
    'feed_in_links' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
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
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['alter']['preserve_tags'] = ' <h1> <h2> <h3> <h4> <h5> <h6> <p> <br> <b> <strong> <i> <em> <sup> <sub> <a> <blockquote> <img> <table> <tr> <th> <td> <iframe>';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  /* Поле: Змест: Месцы */
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['id'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['field'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['element_label_colon'] = FALSE;
  /* Поле: Змест: Рубрыкі */
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['id'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['field'] = 'field_rubric_by_taxonomy';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_rubric_by_taxonomy']['separator'] = ' ';
  /* Поле: Змест: Дадатковыя тэгі */
  $handler->display->display_options['fields']['field_additional_taxonomy']['id'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['table'] = 'field_data_field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['field'] = 'field_additional_taxonomy';
  $handler->display->display_options['fields']['field_additional_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_additional_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_additional_taxonomy']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_additional_taxonomy']['separator'] = ' ';
  /* Поле: Змест */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Змест';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<header><h1>[title]</h1>[field_pics]</header>
[field_text]
<div data-block="share" data-network="odnoklassniki, vkontakte, facebook, twitter"></div>
<p><strong>Тэгі</strong> [field_placement_by_taxonomy] [field_rubric_by_taxonomy] [field_additional_taxonomy]</p>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['operator'] = 'OR';
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
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Вузел: Published at */
  $handler->display->display_options['filters']['published_at']['id'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['filters']['published_at']['field'] = 'published_at';
  $handler->display->display_options['filters']['published_at']['operator'] = '>=';
  $handler->display->display_options['filters']['published_at']['value']['value'] = '-7 days';
  $handler->display->display_options['filters']['published_at']['value']['type'] = 'offset';
  $handler->display->display_options['path'] = 'turbo/afisha.xml';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['rss_yandex_turbo'] = array(
    t('Master'),
    t('Хроніка'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Навіны: апошнія'),
    t('horki.info'),
    t('<header><h1>[title]</h1>[field_pics]</header>
[field_text]
<div data-block="share" data-network="odnoklassniki, vkontakte, facebook, twitter"></div>
<p><strong>Тэгі</strong> [field_placement_by_taxonomy] [field_rubric_by_taxonomy] [field_additional_taxonomy]</p>'),
    t('Навіны: папулярныя'),
    t('Навіны: фотаблог'),
    t('Афіша'),
  );
  $export['rss_yandex_turbo'] = $view;

  return $export;
}
