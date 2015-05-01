<?php
/**
 * @file
 * views_news_by_regions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_news_by_regions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'news_by_regions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Навіны па рэгіёнах';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Горкі';
  $handler->display->display_options['css_class'] = 'block-main-news-by-regions media-grid-block';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<a class="bold-text black-text" href="/gorki.html">больш навінаў</a>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  /* Relationship: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['relationships']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'main_news' => 'main_news',
  );
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
  $handler->display->display_options['fields']['created']['alter']['text'] = '<span class="date-list">[created]</span>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'node';
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
  /* Поле: Тэрмін таксаноміі: Дэфолтны здымак на старонцы рубрыкі */
  $handler->display->display_options['fields']['field_default_image']['id'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['table'] = 'field_data_field_default_image';
  $handler->display->display_options['fields']['field_default_image']['field'] = 'field_default_image';
  $handler->display->display_options['fields']['field_default_image']['relationship'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['fields']['field_default_image']['label'] = '';
  $handler->display->display_options['fields']['field_default_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_default_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_default_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_default_image']['settings'] = array(
    'image_style' => 'photo_video_preview',
    'image_link' => '',
  );
  /* Поле: Змест: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['empty'] = '<a href="[path]">[field_default_image]</a>';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="statistics-list">[created] [recentcount] [comment_count]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'dark-red-text bold-text';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '78',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator_id'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['label'] = 'Месцы (field_placement_by_taxonomy)';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['identifier'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  /* Filter criterion: Nodequeue: In queue */
  $handler->display->display_options['filters']['in_queue_1']['id'] = 'in_queue_1';
  $handler->display->display_options['filters']['in_queue_1']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue_1']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue_1']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue_1']['value'] = '0';

  /* Display: Горкі */
  $handler = $view->new_display('block', 'Горкі', 'block');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/gorki.html">больш навінаў</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '58',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator_id'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['label'] = 'Месцы (field_placement_by_taxonomy)';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['identifier'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['block_description'] = 'Навіны Горак';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: БДСГА */
  $handler = $view->new_display('block', 'БДСГА', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'БДСГА';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/bdsga.html">больш навінаў</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '61',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator_id'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['label'] = 'Месцы (field_placement_by_taxonomy)';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['identifier'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['block_description'] = 'Навіны БДСГА';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Дрыбін */
  $handler = $view->new_display('block', 'Дрыбін', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Дрыбін';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/drybin.html">больш навінаў</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '59',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['block_description'] = 'Навіны Дрыбіна';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Мсціслаў */
  $handler = $view->new_display('block', 'Мсціслаў', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Мсціслаў';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/mscislau.html">больш навінаў</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '60',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['block_description'] = 'Навіны Мсціслава';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Рэгіён */
  $handler = $view->new_display('block', 'Рэгіён', 'block_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Рэгіён';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/regiyon.html">больш навінаў</a></div>
';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '62',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator_id'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['label'] = 'Месцы (field_placement_by_taxonomy)';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['identifier'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['block_description'] = 'Навіны рэгіёна';
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Краіна */
  $handler = $view->new_display('block', 'Краіна', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Краіна';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Ніжні калантытул: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Больш навінаў';
  $handler->display->display_options['footer']['area']['content'] = '<div class="black-button"><a href="/kraina.html">больш навінаў</a></div>';
  $handler->display->display_options['footer']['area']['format'] = 'author_text';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Змест: Апублікавана */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Змест: Месцы (field_placement_by_taxonomy) */
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['id'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['table'] = 'field_data_field_placement_by_taxonomy';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['field'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['value'] = array(
    0 => '78',
  );
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator_id'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['label'] = 'Месцы (field_placement_by_taxonomy)';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['operator'] = 'field_placement_by_taxonomy_tid_op';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['expose']['identifier'] = 'field_placement_by_taxonomy_tid';
  $handler->display->display_options['filters']['field_placement_by_taxonomy_tid']['vocabulary'] = 'places';
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
  $handler->display->display_options['filters']['in_queue_1']['id'] = 'in_queue_1';
  $handler->display->display_options['filters']['in_queue_1']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['filters']['in_queue_1']['field'] = 'in_queue';
  $handler->display->display_options['filters']['in_queue_1']['relationship'] = 'nodequeue_rel';
  $handler->display->display_options['filters']['in_queue_1']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Навіны краіны';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['news_by_regions'] = array(
    t('Master'),
    t('Горкі'),
    t('болей'),
    t('Прымяніць'),
    t('Скінуць'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Больш навінаў'),
    t('<a class="bold-text black-text" href="/gorki.html">больш навінаў</a>'),
    t('term from field_placement_by_taxonomy'),
    t('чарга'),
    t('<span class="date-list">[created]</span>'),
    t('| [recentcount] <img src="/sites/default/files/default_images/view-icon.png">'),
    t('.'),
    t('| [comment_count] <img src="/sites/default/files/default_images/comment-icon.png">'),
    t('<a href="[path]">[field_default_image]</a>'),
    t('<div class="statistics-list">[created] [recentcount] [comment_count]</div>'),
    t('Месцы (field_placement_by_taxonomy)'),
    t('<div class="black-button"><a href="/gorki.html">больш навінаў</a></div>'),
    t('Навіны Горак'),
    t('БДСГА'),
    t('<div class="black-button"><a href="/bdsga.html">больш навінаў</a></div>'),
    t('Навіны БДСГА'),
    t('Дрыбін'),
    t('<div class="black-button"><a href="/drybin.html">больш навінаў</a></div>'),
    t('Навіны Дрыбіна'),
    t('Мсціслаў'),
    t('<div class="black-button"><a href="/mscislau.html">больш навінаў</a></div>'),
    t('Навіны Мсціслава'),
    t('Рэгіён'),
    t('<div class="black-button"><a href="/regiyon.html">больш навінаў</a></div>
'),
    t('Навіны рэгіёна'),
    t('Краіна'),
    t('<div class="black-button"><a href="/kraina.html">больш навінаў</a></div>'),
    t('Навіны краіны'),
  );
  $export['news_by_regions'] = $view;

  return $export;
}
