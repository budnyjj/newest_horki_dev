<?php

/**
 * @file
 * views_companies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_companies_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'catalog_company';
  $view->description = 'Фирмы, компании, предприятия города Горки и Горецкого района';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Прадпрыемствы';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Фирмы, компании, предприятия города Горки и Горецкого района';
  $handler->display->display_options['css_class'] = 'companies-page zebra';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Фільтраваць';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'Больш прадпрыемстваў';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Дадаць прадпрыемства';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="/static/1374.html" target="_blank">Дадаць прадпрыемства</a>';
  $handler->display->display_options['header']['area']['format'] = 'author_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Нічога не знойдзена';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>На жаль, па вашым запыце не знойдзена ні аднаго прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="#">дадаць сваё прадпрыемства</a>.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'author_text';
  /* Relationship: Змест: Vote results */
  $handler->display->display_options['relationships']['votingapi_cache']['id'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['table'] = 'node';
  $handler->display->display_options['relationships']['votingapi_cache']['field'] = 'votingapi_cache';
  $handler->display->display_options['relationships']['votingapi_cache']['votingapi'] = array(
    'value_type' => 'percent',
    'tag' => 'rate',
    'function' => 'average',
  );
  /* Поле: Vote results: Значэнне */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget_compact';
  /* Поле: Змест: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'black-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Фотаздымак */
  $handler->display->display_options['fields']['field_company_photo']['id'] = 'field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['table'] = 'field_data_field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['field'] = 'field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['label'] = '';
  $handler->display->display_options['fields']['field_company_photo']['element_class'] = 'company-preview';
  $handler->display->display_options['fields']['field_company_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_photo']['settings'] = array(
    'image_style' => 'photo_video_preview',
    'image_link' => 'content',
  );
  /* Поле: Змест: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'company-description, no-underline-text, black-text';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
    'trim_type' => 'chars',
    'trim_suffix' => '',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
  );
  /* Sort criterion: Змест: Парадкавы нумар (field_index_number) */
  $handler->display->display_options['sorts']['field_index_number_value']['id'] = 'field_index_number_value';
  $handler->display->display_options['sorts']['field_index_number_value']['table'] = 'field_data_field_index_number';
  $handler->display->display_options['sorts']['field_index_number_value']['field'] = 'field_index_number_value';
  /* Sort criterion: Vote results: Значэнне */
  $handler->display->display_options['sorts']['value']['id'] = 'value';
  $handler->display->display_options['sorts']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['field'] = 'value';
  $handler->display->display_options['sorts']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['sorts']['value']['order'] = 'DESC';
  $handler->display->display_options['sorts']['value']['coalesce'] = 1;
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
    'company' => 'company',
  );
  /* Filter criterion: Змест: Раздел каталога (field_company_section) */
  $handler->display->display_options['filters']['field_company_section_tid']['id'] = 'field_company_section_tid';
  $handler->display->display_options['filters']['field_company_section_tid']['table'] = 'field_data_field_company_section';
  $handler->display->display_options['filters']['field_company_section_tid']['field'] = 'field_company_section_tid';
  $handler->display->display_options['filters']['field_company_section_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_section_tid']['expose']['operator_id'] = 'field_company_section_tid_op';
  $handler->display->display_options['filters']['field_company_section_tid']['expose']['label'] = 'Раздзел каталога';
  $handler->display->display_options['filters']['field_company_section_tid']['expose']['operator'] = 'field_company_section_tid_op';
  $handler->display->display_options['filters']['field_company_section_tid']['expose']['identifier'] = 'field_company_section_tid';
  $handler->display->display_options['filters']['field_company_section_tid']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    1 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_company_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_company_section_tid']['vocabulary'] = 'company_catalog';
  /* Filter criterion: Змест: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['body_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['operator_id'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['label'] = 'Ключавыя словы';
  $handler->display->display_options['filters']['body_value']['expose']['operator'] = 'body_value_op';
  $handler->display->display_options['filters']['body_value']['expose']['identifier'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['body_value']['expose']['remember_roles'] = array(
    2 => '2',
    3 => '3',
    4 => '4',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-list page-filtered-list page-companies';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Пошук';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Нічога не знойдзена';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<p>На жаль, па вашым запыце не знойдзена ніводнага прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="http://horki.info/static/1374.html">дадаць сваё прадпрыемства</a>.</p>';
  $handler->display->display_options['empty']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Поле: Змест: Фотаздымак */
  $handler->display->display_options['fields']['field_company_photo']['id'] = 'field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['table'] = 'field_data_field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['field'] = 'field_company_photo';
  $handler->display->display_options['fields']['field_company_photo']['label'] = '';
  $handler->display->display_options['fields']['field_company_photo']['element_class'] = 'list-photo';
  $handler->display->display_options['fields']['field_company_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_company_photo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_company_photo']['settings'] = array(
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
  /* Поле: Vote results: Значэнне */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['relationship'] = 'votingapi_cache';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['element_class'] = 'company-rate';
  $handler->display->display_options['fields']['value']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['value']['set_precision'] = TRUE;
  $handler->display->display_options['fields']['value']['precision'] = '0';
  $handler->display->display_options['fields']['value']['separator'] = '';
  $handler->display->display_options['fields']['value']['appearance'] = 'rate_views_widget_compact';
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'list-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p>';
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'list-description';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '600',
    'trim_type' => 'chars',
    'trim_suffix' => '',
    'more_link' => '0',
    'more_text' => 'Read more',
    'summary_handler' => 'full',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Фирмы, компании, предприятия города Горки и Горецкого района | [site:name]',
        'default' => '',
      ),
      'description' => array(
        'value' => 'Такси, одежда, обувь, строительство, кацтовары, ритуальные услуги, ремонт в Горках.',
        'default' => '',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'окна пвх, ремонт, ювелирные изделия',
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
  $handler->display->display_options['path'] = 'companies.html';
  $translatables['catalog_company'] = array(
    t('Master'),
    t('Фирмы, компании, предприятия города Горки и Горецкого района'),
    t('болей'),
    t('Фільтраваць'),
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
    t('Больш прадпрыемстваў'),
    t('Дадаць прадпрыемства'),
    t('<a href="/static/1374.html" target="_blank">Дадаць прадпрыемства</a>'),
    t('Нічога не знойдзена'),
    t('<p>На жаль, па вашым запыце не знойдзена ні аднаго прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="#">дадаць сваё прадпрыемства</a>.</p>'),
    t('Vote results'),
    t('.'),
    t('Раздзел каталога'),
    t('Ключавыя словы'),
    t('Page'),
    t('Пошук'),
    t('<p>На жаль, па вашым запыце не знойдзена ніводнага прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="http://horki.info/static/1374.html">дадаць сваё прадпрыемства</a>.</p>'),
  );
  $export['catalog_company'] = $view;

  return $export;
}
