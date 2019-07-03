<?php

/**
 * @file
 * views_problems_map_and_overlays.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_problems_map_and_overlays_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'map_local_problems';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Мапа мясцовых праблем';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Мапа праблем рэгіёна';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Змест: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'local_problem' => 'local_problem',
  );

  /* Display: Мапа */
  $handler = $view->new_display('page', 'Мапа', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Мапа праблем горада Горкі';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-map-local-problems';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'local_problems';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Горки: найдем и решим проблемы города вместе | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'Сервис по поиску и решению проблем в городе Горки.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'Горки, проблемы, решения',
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
        'value' => '/sites/default/files//social_preview/default.png',
        'default' => '/sites/default/files//social_preview/default.png',
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
        'value' => '',
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
        'value' => 'Горки: найдем и решим проблемы города вместе',
        'default' => '[view:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => 'Сервис по поиску и решению проблем в городе Горки.',
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
        'value' => '/sites/default/files//social_preview/default.png',
        'default' => '/sites/default/files//social_preview/default.png',
      ),
      'og:image:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
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
        'value' => 'Горки: найдем и решим проблемы города вместе',
        'default' => '[view:title]',
      ),
      'twitter:description' => array(
        'value' => 'Сервис по поиску и решению проблем в городе Горки.',
        'default' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => '/sites/default/files//social_preview/default.png',
        'default' => '/sites/default/files//social_preview/default.png',
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
        'value' => 'Горки: найдем и решим проблемы города вместе',
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
    ),
  );
  $handler->display->display_options['path'] = 'problems/map.html';

  /* Display: Вырашаныя праблемы */
  $handler = $view->new_display('openlayers', 'Вырашаныя праблемы', 'openlayers_solved_problems');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Вырашаныя праблемы';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_problem_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'nothing',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['relationships']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['relationships']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['relationships']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="white-text bold-text">[title]</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Мапа */
  $handler->display->display_options['fields']['field_problem_map']['id'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['table'] = 'field_data_field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['field'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_problem_map']['settings'] = array(
    'data' => 'full',
  );
  /* Поле: Тэрмін таксаноміі: Маркер */
  $handler->display->display_options['fields']['field_taxonomy_pic']['id'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['table'] = 'field_data_field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['field'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['relationship'] = 'field_problem_status_tid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_pic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_taxonomy_pic']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Адфарматаваны загаловак */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Адфарматаваны загаловак';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="problem-title">[title]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'local_problem' => 'local_problem',
  );
  /* Filter criterion: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['filters']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['filters']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['value'] = array(
    0 => '155',
  );
  $handler->display->display_options['filters']['field_problem_status_tid']['vocabulary'] = 'local_problem_status';

  /* Display: Нявырашаныя праблемы */
  $handler = $view->new_display('openlayers', 'Нявырашаныя праблемы', 'openlayers_not_solved_problems');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Нявырашаныя праблемы';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_problem_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'nothing',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['relationships']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['relationships']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['relationships']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Поле: Змест: Мапа */
  $handler->display->display_options['fields']['field_problem_map']['id'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['table'] = 'field_data_field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['field'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_problem_map']['settings'] = array(
    'data' => 'full',
  );
  /* Поле: Тэрмін таксаноміі: Маркер */
  $handler->display->display_options['fields']['field_taxonomy_pic']['id'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['table'] = 'field_data_field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['field'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['relationship'] = 'field_problem_status_tid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_pic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_taxonomy_pic']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  /* Поле: Адфарматаваны загаловак */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Адфарматаваны загаловак';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="problem-title">[title]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
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
    'local_problem' => 'local_problem',
  );
  /* Filter criterion: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['filters']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['filters']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['value'] = array(
    0 => '153',
  );
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['operator_id'] = 'field_problem_status_tid_op';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['label'] = 'Статус праблемы (field_problem_status)';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['operator'] = 'field_problem_status_tid_op';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['identifier'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['vocabulary'] = 'local_problem_status';

  /* Display: Блок з мапай на старонцы праблемы */
  $handler = $view->new_display('block', 'Блок з мапай на старонцы праблемы', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'this_local_problem';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['block_description'] = 'Блок з мапай на старонцы мясцовай праблемы';

  /* Display: Абраная праблема */
  $handler = $view->new_display('openlayers', 'Абраная праблема', 'openlayers_this_problem');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Абраная праблема';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'field_problem_map',
    'other_lon' => 'field_problem_map',
    'wkt' => 'field_problem_map',
    'other_top' => 'field_problem_map',
    'other_right' => 'field_problem_map',
    'other_bottom' => 'field_problem_map',
    'other_left' => 'field_problem_map',
    'name_field' => '',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['relationships']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['relationships']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['relationships']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['relationships']['field_problem_status_tid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Мапа */
  $handler->display->display_options['fields']['field_problem_map']['id'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['table'] = 'field_data_field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['field'] = 'field_problem_map';
  $handler->display->display_options['fields']['field_problem_map']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_problem_map']['settings'] = array(
    'data' => 'full',
  );
  /* Поле: Тэрмін таксаноміі: Маркер */
  $handler->display->display_options['fields']['field_taxonomy_pic']['id'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['table'] = 'field_data_field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['field'] = 'field_taxonomy_pic';
  $handler->display->display_options['fields']['field_taxonomy_pic']['relationship'] = 'field_problem_status_tid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy_pic']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_taxonomy_pic']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_taxonomy_pic']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_taxonomy_pic']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Змест: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'local_problem' => 'local_problem',
  );
  $translatables['map_local_problems'] = array(
    t('Master'),
    t('Мапа праблем рэгіёна'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Мапа'),
    t('Мапа праблем горада Горкі'),
    t('Вырашаныя праблемы'),
    t('term from field_problem_status'),
    t('<div class="white-text bold-text">[title]</div>'),
    t('<div class="problem-title">[title]</div>
'),
    t('Нявырашаныя праблемы'),
    t('Статус праблемы (field_problem_status)'),
    t('Блок з мапай на старонцы праблемы'),
    t('Блок з мапай на старонцы мясцовай праблемы'),
    t('Абраная праблема'),
    t('Усе'),
  );
  $export['map_local_problems'] = $view;

  return $export;
}
