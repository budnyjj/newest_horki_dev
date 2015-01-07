<?php
/**
 * @file
 * views_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_ads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Прыватныя абвесткi';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Апошнiя каментары';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'Глядзець усе';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Фільтраваць';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area_1']['id'] = 'area_1';
  $handler->display->display_options['footer']['area_1']['table'] = 'views';
  $handler->display->display_options['footer']['area_1']['field'] = 'area';
  $handler->display->display_options['footer']['area_1']['label'] = 'Глядзець усе';
  $handler->display->display_options['footer']['area_1']['empty'] = TRUE;
  $handler->display->display_options['footer']['area_1']['content'] = '<a href="/ads">Глядзець усе<a>';
  $handler->display->display_options['footer']['area_1']['format'] = 'author_text';
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
    'ads' => 'ads',
  );

  /* Display: Блок */
  $handler = $view->new_display('block', 'Блок', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Прыватныя абвесткi';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'abvestki-block';
  $handler->display->display_options['display_description'] = 'Блок прыватных абвестак';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'больш абвестак';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '300';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '1800';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_ads_type',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_where' => 'field_where',
    'field_ads_type' => 'field_ads_type',
    'field_cost' => 'field_cost',
  );
  $handler->display->display_options['row_options']['separator'] = '::';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць сваю абвестку';
  $handler->display->display_options['footer']['area']['empty'] = TRUE;
  $handler->display->display_options['footer']['area']['content'] = '<?php 
global $user;
?>

<div class="red-button">
<a href="<?php if ($user->uid) { print("/node/add/ads"); } else {print("/ads/anonymous.html"); } ?>">
дадаць абвестку</a>
</div>
';
  $handler->display->display_options['footer']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Няма абвестак';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-row">Пакуль што няма аніводнай прыватнай абвесткі</div>';
  $handler->display->display_options['empty']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'black-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Тып абвесткі */
  $handler->display->display_options['fields']['field_ads_type']['id'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['table'] = 'field_data_field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['field'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['label'] = '';
  $handler->display->display_options['fields']['field_ads_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ads_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ads_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Змест: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Выпадкова */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['block_description'] = 'Прыватныя абвесткi';
  $handler->display->display_options['block_caching'] = '1';

  /* Display: Старонка */
  $handler = $view->new_display('page', 'Старонка', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Прыватныя абвесткі';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'abvestki zebra';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Пошук';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
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
  $handler->display->display_options['pager']['options']['more_button_text'] = 'больш абвестак';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_ads_type' => 'field_ads_type',
    'field_ads_photo' => 'field_ads_photo',
    'title' => 'title',
    'field_price' => 'field_price',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ads_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ads_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Дадаць абвестку';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php 
global $user;
?>

<a class="rich-link bold-text" 
href="<?php if ($user->uid) { print("/node/add/ads"); } else {print("/ads/anonymous.html"); } ?>">
Дадаць абвестку</a>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: PHP */
  $handler->display->display_options['footer']['php']['id'] = 'php';
  $handler->display->display_options['footer']['php']['table'] = 'views';
  $handler->display->display_options['footer']['php']['field'] = 'php';
  $handler->display->display_options['footer']['php']['label'] = 'Autosubmit';
  $handler->display->display_options['footer']['php']['empty'] = TRUE;
  $handler->display->display_options['footer']['php']['php_output'] = '<?php 
drupal_add_js("sites/all/themes/dev/js/view-ads.js"); 
?>
';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Змест: Тып абвесткі */
  $handler->display->display_options['fields']['field_ads_type']['id'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['table'] = 'field_data_field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['field'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['label'] = 'Тып';
  $handler->display->display_options['fields']['field_ads_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ads_type']['type'] = 'taxonomy_term_reference_plain';
  /* Поле: Змест: Фотаздымак */
  $handler->display->display_options['fields']['field_ads_photo']['id'] = 'field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['table'] = 'field_data_field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['field'] = 'field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['label'] = 'Фота';
  $handler->display->display_options['fields']['field_ads_photo']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/no_image.gif" width="50" height="50" style="width:50px;height:50px;" /></a>';
  $handler->display->display_options['fields']['field_ads_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ads_photo']['settings'] = array(
    'image_style' => 'square_news_preview',
    'image_link' => 'content',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Назва тавара або паслугі';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'bold-text black-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Поле: Змест: Цана */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['empty'] = 'не ўказана';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'AND',
  );
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
    'ads' => 'ads',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Змест: Месца размяшчэння абвесткі (field_ads_placement) */
  $handler->display->display_options['filters']['field_ads_placement_tid']['id'] = 'field_ads_placement_tid';
  $handler->display->display_options['filters']['field_ads_placement_tid']['table'] = 'field_data_field_ads_placement';
  $handler->display->display_options['filters']['field_ads_placement_tid']['field'] = 'field_ads_placement_tid';
  $handler->display->display_options['filters']['field_ads_placement_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ads_placement_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ads_placement_tid']['expose']['operator_id'] = 'field_ads_placement_tid_op';
  $handler->display->display_options['filters']['field_ads_placement_tid']['expose']['label'] = 'Рэгіен';
  $handler->display->display_options['filters']['field_ads_placement_tid']['expose']['operator'] = 'field_ads_placement_tid_op';
  $handler->display->display_options['filters']['field_ads_placement_tid']['expose']['identifier'] = 'field_ads_placement_tid';
  $handler->display->display_options['filters']['field_ads_placement_tid']['expose']['remember_roles'] = array(
    2 => 0,
    3 => '3',
    4 => '4',
    5 => '5',
    1 => 0,
  );
  $handler->display->display_options['filters']['field_ads_placement_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ads_placement_tid']['vocabulary'] = 'ads_placement';
  /* Filter criterion: Змест: Тып абвесткі (field_ads_type) */
  $handler->display->display_options['filters']['field_ads_type_tid']['id'] = 'field_ads_type_tid';
  $handler->display->display_options['filters']['field_ads_type_tid']['table'] = 'field_data_field_ads_type';
  $handler->display->display_options['filters']['field_ads_type_tid']['field'] = 'field_ads_type_tid';
  $handler->display->display_options['filters']['field_ads_type_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ads_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ads_type_tid']['expose']['operator_id'] = 'field_ads_type_tid_op';
  $handler->display->display_options['filters']['field_ads_type_tid']['expose']['label'] = 'Тып абвесткі';
  $handler->display->display_options['filters']['field_ads_type_tid']['expose']['operator'] = 'field_ads_type_tid_op';
  $handler->display->display_options['filters']['field_ads_type_tid']['expose']['identifier'] = 'field_ads_type_tid';
  $handler->display->display_options['filters']['field_ads_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ads_type_tid']['group_info']['label'] = 'Тып абвесткі (field_ads_type)';
  $handler->display->display_options['filters']['field_ads_type_tid']['group_info']['identifier'] = 'field_ads_type_tid';
  $handler->display->display_options['filters']['field_ads_type_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_ads_type_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_ads_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ads_type_tid']['vocabulary'] = 'ads_types';
  /* Filter criterion: Змест: Тэма абвесткі (field_ads_topic) */
  $handler->display->display_options['filters']['field_ads_topic_tid']['id'] = 'field_ads_topic_tid';
  $handler->display->display_options['filters']['field_ads_topic_tid']['table'] = 'field_data_field_ads_topic';
  $handler->display->display_options['filters']['field_ads_topic_tid']['field'] = 'field_ads_topic_tid';
  $handler->display->display_options['filters']['field_ads_topic_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ads_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ads_topic_tid']['expose']['operator_id'] = 'field_ads_topic_tid_op';
  $handler->display->display_options['filters']['field_ads_topic_tid']['expose']['label'] = 'Тэма абвесткі';
  $handler->display->display_options['filters']['field_ads_topic_tid']['expose']['operator'] = 'field_ads_topic_tid_op';
  $handler->display->display_options['filters']['field_ads_topic_tid']['expose']['identifier'] = 'field_ads_topic_tid';
  $handler->display->display_options['filters']['field_ads_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
    5 => 0,
  );
  $handler->display->display_options['filters']['field_ads_topic_tid']['group_info']['label'] = 'Тэма абвесткі (field_ads_topic)';
  $handler->display->display_options['filters']['field_ads_topic_tid']['group_info']['identifier'] = 'field_ads_topic_tid';
  $handler->display->display_options['filters']['field_ads_topic_tid']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_ads_topic_tid']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_ads_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ads_topic_tid']['vocabulary'] = 'ads_topics';
  /* Filter criterion: Змест: Загаловак */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'word';
  $handler->display->display_options['filters']['title']['group'] = 2;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Назва тавара або паслугі';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['metatags'] = array(
    'title' => array(
      'value' => 'Бесплатные объявления в Горках, Дрибине, Мстиславле. Куплю, продам, меняю, сниму, сдаю | [site:name]',
    ),
    'description' => array(
      'value' => 'Частные объявления в Горках, Дрибине и Мстиславле. Поиск
квартир в Горках. Бесплатная подача объявлений и удобный поиск по
разделам.',
    ),
    'keywords' => array(
      'value' => 'бесплатные объявления, объявления в Горках, квартиры в Горках, бесплатные объявления Дрибин, объявления в интернете бесплатно, новые объявления, доска объявлений Мстиславль, сайт бесплатных объявлений',
    ),
  );
  $handler->display->display_options['path'] = 'abvestki.html';
  $handler->display->display_options['menu']['title'] = 'Абвесткi';
  $handler->display->display_options['menu']['description'] = 'Прыватныя абвесткi ад нашых чытачоў';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-genres';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Абвесткі карыстальніка */
  $handler = $view->new_display('block', 'Абвесткі карыстальніка', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Мае прыватныя абвесткі';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'zebra abvestki abvestki-user-block';
  $handler->display->display_options['defaults']['cache'] = FALSE;
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'path' => 'path',
    'field_ads_type' => 'field_ads_type',
    'field_ads_photo' => 'field_ads_photo',
    'title' => 'title',
    'field_price' => 'field_price',
    'status' => 'status',
    'delete_node' => 'delete_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ads_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ads_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_node' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Дадаць сваю абвестку';
  $handler->display->display_options['footer']['area']['content'] = '<a class="rich-link black-text bold-text center-this" href="/node/add/ads">дадаць абвестку</a>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Зараз у вас няма аніводнай апублікаванай абвесткі.
<a class="rich-link bold-text" href="/node/add/ads">Дадаць новую абвестку</a>.';
  $handler->display->display_options['empty']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Шлях */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Поле: Змест: Тып абвесткі */
  $handler->display->display_options['fields']['field_ads_type']['id'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['table'] = 'field_data_field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['field'] = 'field_ads_type';
  $handler->display->display_options['fields']['field_ads_type']['label'] = 'Тып';
  $handler->display->display_options['fields']['field_ads_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ads_type']['type'] = 'taxonomy_term_reference_plain';
  /* Поле: Змест: Фотаздымак */
  $handler->display->display_options['fields']['field_ads_photo']['id'] = 'field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['table'] = 'field_data_field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['field'] = 'field_ads_photo';
  $handler->display->display_options['fields']['field_ads_photo']['label'] = 'Фота';
  $handler->display->display_options['fields']['field_ads_photo']['empty'] = '<a href="[path]"><img src="/sites/default/files/default_images/no_image.gif" width="50" height="50" style="width:50px;height:50px;" /></a>';
  $handler->display->display_options['fields']['field_ads_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ads_photo']['settings'] = array(
    'image_style' => 'square_news_preview',
    'image_link' => 'content',
  );
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Назва тавара або паслугі';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'bold-text black-text';
  /* Поле: Змест: Цана */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_price']['empty'] = 'не ўказана';
  /* Поле: Змест: Апублікавана */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Поле: Змест: Выдаліць спасылку */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Выдаліць';
  $handler->display->display_options['fields']['delete_node']['element_class'] = 'rich-link';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Змест: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['block_description'] = 'Прыватныя абвесткі карыстальніка';
  $translatables['ads'] = array(
    t('Master'),
    t('Апошнiя каментары'),
    t('Глядзець усе'),
    t('Фільтраваць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="/ads">Глядзець усе<a>'),
    t('Блок'),
    t('Прыватныя абвесткi'),
    t('Блок прыватных абвестак'),
    t('больш абвестак'),
    t('Дадаць сваю абвестку'),
    t('<?php 
global $user;
?>

<div class="red-button">
<a href="<?php if ($user->uid) { print("/node/add/ads"); } else {print("/ads/anonymous.html"); } ?>">
дадаць абвестку</a>
</div>
'),
    t('Няма абвестак'),
    t('<div class="views-row">Пакуль што няма аніводнай прыватнай абвесткі</div>'),
    t('Старонка'),
    t('Прыватныя абвесткі'),
    t('болей'),
    t('Пошук'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« першая'),
    t('‹ папярэдняя'),
    t('наступная ›'),
    t('апошняя »'),
    t('Дадаць абвестку'),
    t('<?php 
global $user;
?>

<a class="rich-link bold-text" 
href="<?php if ($user->uid) { print("/node/add/ads"); } else {print("/ads/anonymous.html"); } ?>">
Дадаць абвестку</a>
'),
    t('Autosubmit'),
    t('Тып'),
    t('Фота'),
    t('<a href="[path]"><img src="/sites/default/files/default_images/no_image.gif" width="50" height="50" style="width:50px;height:50px;" /></a>'),
    t('Назва тавара або паслугі'),
    t('Цана'),
    t('не ўказана'),
    t('Рэгіен'),
    t('Тып абвесткі'),
    t('Тып абвесткі (field_ads_type)'),
    t('Тэма абвесткі'),
    t('Тэма абвесткі (field_ads_topic)'),
    t('Абвесткі карыстальніка'),
    t('Мае прыватныя абвесткі'),
    t('<a class="rich-link black-text bold-text center-this" href="/node/add/ads">дадаць абвестку</a>'),
    t('Зараз у вас няма аніводнай апублікаванай абвесткі.
<a class="rich-link bold-text" href="/node/add/ads">Дадаць новую абвестку</a>.'),
    t('Апублікавана'),
    t('Выдаліць'),
    t('Усе'),
    t('Прыватныя абвесткі карыстальніка'),
  );
  $export['ads'] = $view;

  return $export;
}
