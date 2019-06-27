<?php

/**
 * @file
 * views_davedka.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_davedka_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'daviedka';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Даведка';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Даведка';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
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
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Поле: Змест: Галоўнае фота */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['alter']['text'] = '[field_pics]';
  $handler->display->display_options['fields']['field_pics']['alter']['path'] = '[path]?width=600&height=600';
  $handler->display->display_options['fields']['field_pics']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Поле: Змест: Пункт меню для гэтай старонкі */
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['id'] = 'field_daviedka_punkt_menu';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['table'] = 'field_data_field_daviedka_punkt_menu';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['field'] = 'field_daviedka_punkt_menu';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['label'] = '';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['alter']['text'] = '<center>[field_daviedka_punkt_menu] </center>';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['element_label_colon'] = FALSE;
  /* Sort criterion: Змест: Парадкавы нумар (field_index_number) */
  $handler->display->display_options['sorts']['field_index_number_value']['id'] = 'field_index_number_value';
  $handler->display->display_options['sorts']['field_index_number_value']['table'] = 'field_data_field_index_number';
  $handler->display->display_options['sorts']['field_index_number_value']['field'] = 'field_index_number_value';
  /* Contextual filter: Змест: Has taxonomy term ID (with depth) */
  $handler->display->display_options['arguments']['term_node_tid_depth']['id'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth']['field'] = 'term_node_tid_depth';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_action'] = 'default';
  $handler->display->display_options['arguments']['term_node_tid_depth']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['title'] = '%1';
  $handler->display->display_options['arguments']['term_node_tid_depth']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['term_node_tid_depth']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['term_node_tid_depth']['depth'] = '0';
  /* Contextual filter: Змест: Has taxonomy term ID depth modifier */
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['id'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['table'] = 'node';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['field'] = 'term_node_tid_depth_modifier';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title'] = 'Усе';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['term_node_tid_depth_modifier']['summary']['format'] = 'default_summary';
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
    'info' => 'info',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'davedka/%';
  $translatables['daviedka'] = array(
    t('Master'),
    t('Даведка'),
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
    t('[field_pics]'),
    t('<center>[field_daviedka_punkt_menu] </center>'),
    t('Усе'),
    t('%1'),
    t('Page'),
  );
  $export['daviedka'] = $view;

  return $export;
}
