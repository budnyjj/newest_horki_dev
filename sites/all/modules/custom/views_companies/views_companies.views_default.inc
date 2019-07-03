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
  $handler->display->display_options['title'] = 'Каталог магазінаў і паслуг';
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
  $handler->display->display_options['header']['area']['label'] = 'Дадаць сваё прадпрыемства';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<a href="<?php print drupal_get_path_alias(\'node/1374\')?>">Дадаць сваё прадпрыемства</a>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
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

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page');
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
  /* Поле: Пошук: web-сайт */
  $handler->display->display_options['fields']['field_company_web_site']['id'] = 'field_company_web_site';
  $handler->display->display_options['fields']['field_company_web_site']['table'] = 'field_data_field_company_web_site';
  $handler->display->display_options['fields']['field_company_web_site']['field'] = 'field_company_web_site';
  $handler->display->display_options['fields']['field_company_web_site']['ui_name'] = 'Пошук: web-сайт';
  $handler->display->display_options['fields']['field_company_web_site']['label'] = '';
  $handler->display->display_options['fields']['field_company_web_site']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_web_site']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_web_site']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_company_web_site']['type'] = 'link_plain';
  /* Поле: Пошук: адрас */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['ui_name'] = 'Пошук: адрас';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  /* Поле: Пошук: поўная назва прадпрыемства */
  $handler->display->display_options['fields']['field_company_full_name']['id'] = 'field_company_full_name';
  $handler->display->display_options['fields']['field_company_full_name']['table'] = 'field_data_field_company_full_name';
  $handler->display->display_options['fields']['field_company_full_name']['field'] = 'field_company_full_name';
  $handler->display->display_options['fields']['field_company_full_name']['ui_name'] = 'Пошук: поўная назва прадпрыемства';
  $handler->display->display_options['fields']['field_company_full_name']['label'] = '';
  $handler->display->display_options['fields']['field_company_full_name']['element_label_colon'] = FALSE;
  /* Поле: Пошук: раздзел каталога */
  $handler->display->display_options['fields']['field_company_section']['id'] = 'field_company_section';
  $handler->display->display_options['fields']['field_company_section']['table'] = 'field_data_field_company_section';
  $handler->display->display_options['fields']['field_company_section']['field'] = 'field_company_section';
  $handler->display->display_options['fields']['field_company_section']['ui_name'] = 'Пошук: раздзел каталога';
  $handler->display->display_options['fields']['field_company_section']['label'] = '';
  $handler->display->display_options['fields']['field_company_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_section']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_section']['type'] = 'taxonomy_term_reference_plain';
  /* Поле: Пошук: тэлефон */
  $handler->display->display_options['fields']['field_company_phone']['id'] = 'field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['table'] = 'field_data_field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['field'] = 'field_company_phone';
  $handler->display->display_options['fields']['field_company_phone']['ui_name'] = 'Пошук: тэлефон';
  $handler->display->display_options['fields']['field_company_phone']['label'] = '';
  $handler->display->display_options['fields']['field_company_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_company_phone']['delta_offset'] = '0';
  /* Поле: Пошук: УНН */
  $handler->display->display_options['fields']['field_tax_number']['id'] = 'field_tax_number';
  $handler->display->display_options['fields']['field_tax_number']['table'] = 'field_data_field_tax_number';
  $handler->display->display_options['fields']['field_tax_number']['field'] = 'field_tax_number';
  $handler->display->display_options['fields']['field_tax_number']['ui_name'] = 'Пошук: УНН';
  $handler->display->display_options['fields']['field_tax_number']['label'] = '';
  $handler->display->display_options['fields']['field_tax_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_tax_number']['element_label_colon'] = FALSE;
  /* Поле: Пошук: час працы */
  $handler->display->display_options['fields']['field_operation_time']['id'] = 'field_operation_time';
  $handler->display->display_options['fields']['field_operation_time']['table'] = 'field_data_field_operation_time';
  $handler->display->display_options['fields']['field_operation_time']['field'] = 'field_operation_time';
  $handler->display->display_options['fields']['field_operation_time']['ui_name'] = 'Пошук: час працы';
  $handler->display->display_options['fields']['field_operation_time']['label'] = '';
  $handler->display->display_options['fields']['field_operation_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_operation_time']['element_label_colon'] = FALSE;
  /* Поле: Пошук: e-mail */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['ui_name'] = 'Пошук: e-mail';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_email']['type'] = 'email_plain';
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
    'company' => 'company',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Пошук */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['ui_name'] = 'Пошук';
  $handler->display->display_options['filters']['combine']['operator'] = 'word';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Пошук';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'body' => 'body',
    'field_company_web_site' => 'field_company_web_site',
    'field_address' => 'field_address',
    'field_company_full_name' => 'field_company_full_name',
    'field_company_section' => 'field_company_section',
    'field_company_phone' => 'field_company_phone',
    'field_tax_number' => 'field_tax_number',
    'field_operation_time' => 'field_operation_time',
    'field_email' => 'field_email',
  );
  /* Filter criterion: Змест: Раздел каталога (field_company_section) */
  $handler->display->display_options['filters']['field_company_section_tid']['id'] = 'field_company_section_tid';
  $handler->display->display_options['filters']['field_company_section_tid']['table'] = 'field_data_field_company_section';
  $handler->display->display_options['filters']['field_company_section_tid']['field'] = 'field_company_section_tid';
  $handler->display->display_options['filters']['field_company_section_tid']['group'] = 1;
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
  /* Filter criterion: Змест: Geotargeting (field_geotargeting) */
  $handler->display->display_options['filters']['field_geotargeting_tid']['id'] = 'field_geotargeting_tid';
  $handler->display->display_options['filters']['field_geotargeting_tid']['table'] = 'field_data_field_geotargeting';
  $handler->display->display_options['filters']['field_geotargeting_tid']['field'] = 'field_geotargeting_tid';
  $handler->display->display_options['filters']['field_geotargeting_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_geotargeting_tid']['expose']['operator_id'] = 'field_geotargeting_tid_op';
  $handler->display->display_options['filters']['field_geotargeting_tid']['expose']['label'] = 'Месца';
  $handler->display->display_options['filters']['field_geotargeting_tid']['expose']['operator'] = 'field_geotargeting_tid_op';
  $handler->display->display_options['filters']['field_geotargeting_tid']['expose']['identifier'] = 'field_geotargeting_tid';
  $handler->display->display_options['filters']['field_geotargeting_tid']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $handler->display->display_options['filters']['field_geotargeting_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_geotargeting_tid']['vocabulary'] = 'places';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Каталог магазинов и услуг в Горках, Дрибине и Мстиславле | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'Бизнес-каталог магазинов, предприятий и индивидуальных предпринимателей в Горках, Дрибине и Мстиславле, а также в Горецком, Дрибинском и Мстиславльском районах.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'Такси, одежда, обувь, окна ПВХ, канцтовары, ритуальные услуги, ремонт, ювелирные изделия',
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
        'default' => '',
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
        'value' => '',
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
        'value' => 'Каталог магазинов и услуг в Горках, Дрибине и Мстиславле',
        'default' => '[view:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => 'Бизнес-каталог магазинов, предприятий и индивидуальных предпринимателей в Горках, Дрибине и Мстиславле, а также в Горецком, Дрибинском и Мстиславльском районах.',
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
        'value' => 'Каталог магазинов и услуг в Горках, Дрибине и Мстиславле',
        'default' => '[view:title]',
      ),
      'twitter:description' => array(
        'value' => 'Бизнес-каталог магазинов, предприятий и индивидуальных предпринимателей в Горках, Дрибине и Мстиславле, а также в Горецком, Дрибинском и Мстиславльском районах.',
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
        'value' => 'Каталог магазинов и услуг в Горках, Дрибине и Мстиславле',
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
  $handler->display->display_options['path'] = 'companies.html';
  $translatables['catalog_company'] = array(
    t('Master'),
    t('Каталог магазінаў і паслуг'),
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
    t('Дадаць сваё прадпрыемства'),
    t('<a href="<?php print drupal_get_path_alias(\'node/1374\')?>">Дадаць сваё прадпрыемства</a>'),
    t('Нічога не знойдзена'),
    t('<p>На жаль, па вашым запыце не знойдзена ні аднаго прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="#">дадаць сваё прадпрыемства</a>.</p>'),
    t('Vote results'),
    t('.'),
    t('Раздзел каталога'),
    t('Старонка'),
    t('Пошук'),
    t('<p>На жаль, па вашым запыце не знойдзена ніводнага прадпрыемства.</p>
<p>Вы можаце <a href="/companies.html">скінуць наладкі фільтра</a>, або <a href="http://horki.info/static/1374.html">дадаць сваё прадпрыемства</a>.</p>'),
    t('Месца'),
  );
  $export['catalog_company'] = $view;

  return $export;
}
