<?php

/**
 * @file
 * views_news_lists.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_news_lists_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'genres';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Афіша';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ads' => 'ads',
    'help' => 'help',
  );

  /* Display: Афіша */
  $handler = $view->new_display('page', 'Афіша', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-media-grid';
  $handler->display->display_options['display_description'] = 'Афiша';
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
  /* Поле: Змест: Што */
  $handler->display->display_options['fields']['field_what']['id'] = 'field_what';
  $handler->display->display_options['fields']['field_what']['table'] = 'field_data_field_what';
  $handler->display->display_options['fields']['field_what']['field'] = 'field_what';
  $handler->display->display_options['fields']['field_what']['label'] = '';
  $handler->display->display_options['fields']['field_what']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_what']['element_label_colon'] = FALSE;
  /* Поле: Змест: Дзе */
  $handler->display->display_options['fields']['field_where']['id'] = 'field_where';
  $handler->display->display_options['fields']['field_where']['table'] = 'field_data_field_where';
  $handler->display->display_options['fields']['field_where']['field'] = 'field_where';
  $handler->display->display_options['fields']['field_where']['label'] = '';
  $handler->display->display_options['fields']['field_where']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_where']['element_label_colon'] = FALSE;
  /* Поле: Змест: Калi */
  $handler->display->display_options['fields']['field_when']['id'] = 'field_when';
  $handler->display->display_options['fields']['field_when']['table'] = 'field_data_field_when';
  $handler->display->display_options['fields']['field_when']['field'] = 'field_when';
  $handler->display->display_options['fields']['field_when']['label'] = '';
  $handler->display->display_options['fields']['field_when']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_when']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_when']['element_label_colon'] = FALSE;
  /* Поле: Змест: Месцы */
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['id'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['field'] = 'field_placement_by_taxonomy';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['alter']['text'] = '[field_placement_by_taxonomy] ';
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_placement_by_taxonomy']['delta_offset'] = '0';
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'media-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['ui_name'] = 'Статыстыка';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
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
  /* Поле: Падрабязнасці */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Падрабязнасці';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="media-field"><span class="media-label">Што: </span>[field_what]</div>
<div class="media-field"><span class="media-label">Дзе: </span>[field_placement_by_taxonomy], [field_where]</div>
<div class="media-field"><span class="media-label">Калі: </span>[field_when]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Афиша Горки, Дрибин и Мстиславль: кино Крыница, выставки, концерты, праздники | [site:name]',
        'default' => '',
      ),
      'description' => array(
        'value' => 'Афиша: куда пойти и что посмотреть в Горках, Дрибине, Мстиславле? Анонсы мероприятий, расписание киносеансов Крыницы. ',
        'default' => '',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'кинотеатр крыница горки афиша',
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
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
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
    ),
  );
  $handler->display->display_options['path'] = 'afisha.html';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Афiша';
  $handler->display->display_options['menu']['description'] = 'Афiша';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-main';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['genres'] = array(
    t('Master'),
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
    t('Афіша'),
    t('Афiша'),
    t('больш навінаў'),
    t('<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]'),
    t('.'),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]'),
    t('[field_placement_by_taxonomy] '),
    t('<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>'),
    t('<div class="media-field"><span class="media-label">Што: </span>[field_what]</div>
<div class="media-field"><span class="media-label">Дзе: </span>[field_placement_by_taxonomy], [field_where]</div>
<div class="media-field"><span class="media-label">Калі: </span>[field_when]</div>'),
  );
  $export['genres'] = $view;

  $view = new view();
  $view->name = 'news_from_readers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Народныя навіны';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'dark-red-text, bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Тэкст */
  $handler->display->display_options['fields']['field_text']['id'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['table'] = 'field_data_field_text';
  $handler->display->display_options['fields']['field_text']['field'] = 'field_text';
  $handler->display->display_options['fields']['field_text']['label'] = '';
  $handler->display->display_options['fields']['field_text']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_text']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_text']['element_class'] = 'table-teaser';
  $handler->display->display_options['fields']['field_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_text']['settings'] = array(
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
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'pic-list';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/letter_small.png"></a>';
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
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'ads' => 'ads',
    'help' => 'help',
  );

  /* Display: Народныя навiны */
  $handler = $view->new_display('page', 'Народныя навiны', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Новости от читателей - Народныя навіны';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'media-grid-page';
  $handler->display->display_options['display_description'] = 'Народныя навiны';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Вузел: Published at */
  $handler->display->display_options['fields']['published_at']['id'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['fields']['published_at']['field'] = 'published_at';
  $handler->display->display_options['fields']['published_at']['label'] = '';
  $handler->display->display_options['fields']['published_at']['exclude'] = TRUE;
  $handler->display->display_options['fields']['published_at']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['published_at']['date_format'] = 'node';
  $handler->display->display_options['fields']['published_at']['second_date_format'] = 'long';
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
  /* Поле: Змест: Галоўнае фота */
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
  /* Поле: Статыстыка */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Статыстыка';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="statistics-list">[published_at] [recentcount] [comment_count]</div>';
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
  $handler->display->display_options['fields']['title']['element_class'] = 'dark-red-text, bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Вузел: Published at */
  $handler->display->display_options['sorts']['published_at']['id'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['table'] = 'publication_date';
  $handler->display->display_options['sorts']['published_at']['field'] = 'published_at';
  $handler->display->display_options['sorts']['published_at']['order'] = 'DESC';
  $handler->display->display_options['sorts']['published_at']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news_from_readers' => 'news_from_readers',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Змест: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Новости от читателей сайта horki.info',
    ),
    'description' => array(
      'value' => 'Новости и фото из Горок, Дрибина и Мстиславля от читателей сайта horki.info.',
    ),
    'keywords' => array(
      'value' => 'Зебра в Дрибине, пропала собака в Горках, мост в Тушково',
    ),
  );
  $handler->display->display_options['path'] = 'narodnyja.html';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Народныя навiны';
  $handler->display->display_options['menu']['description'] = 'Народныя навiны';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-genres';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['news_from_readers'] = array(
    t('Master'),
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
    t('<a href="[path]"><img src="/sites/default/files/default_images/letter_small.png"></a>'),
    t('Народныя навiны'),
    t('Новости от читателей - Народныя навіны'),
    t('больш навінаў'),
    t('| [recentcount] <img src="/sites/default/files/default_images/view-icon.png">'),
    t('.'),
    t('| [comment_count] <img src="/sites/default/files/default_images/comment-icon.png">'),
    t('<a href="[path]"><img src="/sites/default/files/default_images/narodnyja.jpg"></a>'),
    t('<div class="statistics-list">[published_at] [recentcount] [comment_count]</div>'),
    t('[title][comment_count]'),
  );
  $export['news_from_readers'] = $view;

  $view = new view();
  $view->name = 'photoblog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Фотаблог';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Фотаблог';
  $handler->display->display_options['header']['area']['content'] = '<a href="/photo.html">ФОТАБЛОГ</a>';
  $handler->display->display_options['header']['area']['format'] = 'author_text';
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'photo_video_preview',
    'image_link' => 'content',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<p></p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-preview';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
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
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'preview-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'mediagrid_breakpoints_theme_horki2_desktop_normal_1x',
    'image_link' => 'content',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]<p></p>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'preview-title';
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
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    0 => '56',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Фотаблог';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'media-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title][comment_count]';
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
        'value' => 'Горки город фото из городов Горки, Дрибин, Мстиславль и БГСХА (горецкой сельскохозяйственной академии) | [site:name]',
        'default' => '',
      ),
      'description' => array(
        'value' => 'Фото Горки достопримечательностей, новостей и событий из Горок, Дрибина, Мстиславля, БГСХА, а также из Горецкого, Дрибинского и Мстиславского районов и горецкой сельскохозяйственной академии.',
        'default' => '',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'Горки город фото',
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
  $handler->display->display_options['path'] = 'photo.html';
  $translatables['photoblog'] = array(
    t('Master'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Фотаблог'),
    t('<a href="/photo.html">ФОТАБЛОГ</a>'),
    t('[title]<p></p>'),
    t('Block'),
    t('чарга'),
    t('Старонка'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('Больш навінаў'),
    t('<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]'),
    t('.'),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]'),
    t('<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>'),
    t('[title][comment_count]'),
  );
  $export['photoblog'] = $view;

  $view = new view();
  $view->name = 'videoblog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Відэаблог';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Відэаблог';
  $handler->display->display_options['header']['area']['content'] = '<a href="/video.html">ВІДЭАБЛОГ</a>';
  $handler->display->display_options['header']['area']['format'] = 'author_text';
  /* Поле: Змест: Галоўнае відэа */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail_colorbox';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'video_style' => 'normal',
    'image_style' => 'photo_video_preview',
  );
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
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    57 => '57',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Змест: Тып */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'news' => 'news',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-preview';
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
  /* Поле: Змест: Галоўнае відэа */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_class'] = 'preview-photo';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'mediagrid_breakpoints_theme_horki2_desktop_normal_1x',
    'image_link' => 'content',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'preview-title';
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
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    57 => '57',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Змест: Галоўнае відэа - Video URL */
  $handler->display->display_options['filters']['field_video_video_url']['id'] = 'field_video_video_url';
  $handler->display->display_options['filters']['field_video_video_url']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_video_url']['field'] = 'field_video_video_url';
  $handler->display->display_options['filters']['field_video_video_url']['operator'] = 'not empty';
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue']['id'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Відэаблог';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  /* Поле: Змест: Галоўнае відэа */
  $handler->display->display_options['fields']['field_video']['id'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['table'] = 'field_data_field_video';
  $handler->display->display_options['fields']['field_video']['field'] = 'field_video';
  $handler->display->display_options['fields']['field_video']['label'] = '';
  $handler->display->display_options['fields']['field_video']['element_class'] = 'media-photo';
  $handler->display->display_options['fields']['field_video']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_video']['click_sort_column'] = 'video_url';
  $handler->display->display_options['fields']['field_video']['type'] = 'video_embed_field_thumbnail';
  $handler->display->display_options['fields']['field_video']['settings'] = array(
    'image_style' => 'mediagrid_breakpoints_theme_horki2_mobile_normal_1x',
    'image_link' => 'content',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Рубрыкі (field_rubric_by_taxonomy) */
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['id'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['table'] = 'field_data_field_rubric_by_taxonomy';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['field'] = 'field_rubric_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['value'] = array(
    57 => '57',
  );
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_rubric_by_taxonomy_tid']['vocabulary'] = 'rubrics';
  /* Filter criterion: Змест: Галоўнае відэа - Video URL */
  $handler->display->display_options['filters']['field_video_video_url']['id'] = 'field_video_video_url';
  $handler->display->display_options['filters']['field_video_video_url']['table'] = 'field_data_field_video';
  $handler->display->display_options['filters']['field_video_video_url']['field'] = 'field_video_video_url';
  $handler->display->display_options['filters']['field_video_video_url']['operator'] = 'not empty';
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Видео про Горки, Дрибин, Мстиславль и БГСХА | [site:name]',
    ),
    'description' => array(
      'value' => 'Видео из Горок, Дрибина, Мстиславля, БГСХА. Відэа з Горак, Дрыбіна, Мсціслава, БДСГА.',
    ),
    'keywords' => array(
      'value' => 'видео, відэа, відэаапытанне, Горки, Горкі',
    ),
  );
  $handler->display->display_options['path'] = 'video.html';
  $translatables['videoblog'] = array(
    t('Master'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Відэаблог'),
    t('<a href="/video.html">ВІДЭАБЛОГ</a>'),
    t('Block'),
    t('чарга'),
    t('Старонка'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('Больш навінаў'),
    t('<img src="/sites/default/files/default_images/view-icon.png"> [recentcount]'),
    t('.'),
    t(' '),
    t('<img src="/sites/default/files/default_images/comment-icon.png"> [comment_count]'),
    t('<div class="media-statistics">
<span class="views-count">[recentcount]</span>
<span class="comments-count">[comment_count]</span>
</div>'),
  );
  $export['videoblog'] = $view;

  return $export;
}
