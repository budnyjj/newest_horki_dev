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
  $handler->display->display_options['cache']['type'] = 'none';
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
    'local_problem' => 'local_problem',
  );

  /* Display: Мапа */
  $handler = $view->new_display('page', 'Мапа', 'page');
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
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Дадаць праблему';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<?php 
global $user;
?>

<a class="rich-link bold-text" 
href="<?php if ($user->uid) { print("/node/add/local-problem"); } else {print("/problems/anonymous.html"); } ?>">
Дадаць праблему</a>
';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => 'Мапа праблем рэгіёна | [site:name]',
        'default' => '',
      ),
      'description' => array(
        'value' => '',
        'default' => '',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
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
      'revisit-after' => array(
        'value' => '',
        'period' => '',
        'default' => '',
      ),
      'content-language' => array(
        'value' => '',
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="white-text bold-text">[title]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="white-text bold-text">[title]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'local_problem' => 'local_problem',
  );
  /* Filter criterion: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['filters']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['filters']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['value'] = array(
    0 => '154',
  );
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['operator_id'] = 'field_problem_status_tid_op';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['label'] = 'Статус праблемы (field_problem_status)';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['operator'] = 'field_problem_status_tid_op';
  $handler->display->display_options['filters']['field_problem_status_tid']['expose']['identifier'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['vocabulary'] = 'local_problem_status';

  /* Display: Праблемы, якія не вырашаліся */
  $handler = $view->new_display('openlayers', 'Праблемы, якія не вырашаліся', 'openlayers_not_dared_problems');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Праблемы, якія не вырашаліся';
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
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="white-text bold-text">[title]</div>
';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
    'local_problem' => 'local_problem',
  );
  /* Filter criterion: Змест: Статус праблемы (field_problem_status) */
  $handler->display->display_options['filters']['field_problem_status_tid']['id'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['table'] = 'field_data_field_problem_status';
  $handler->display->display_options['filters']['field_problem_status_tid']['field'] = 'field_problem_status_tid';
  $handler->display->display_options['filters']['field_problem_status_tid']['value'] = array(
    0 => '153',
  );
  $handler->display->display_options['filters']['field_problem_status_tid']['vocabulary'] = 'local_problem_status';
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
    t('Дадаць праблему'),
    t('<?php 
global $user;
?>

<a class="rich-link bold-text" 
href="<?php if ($user->uid) { print("/node/add/local-problem"); } else {print("/problems/anonymous.html"); } ?>">
Дадаць праблему</a>
'),
    t('Вырашаныя праблемы'),
    t('term from field_problem_status'),
    t('<div class="white-text bold-text">[title]</div>'),
    t('Нявырашаныя праблемы'),
    t('<div class="white-text bold-text">[title]</div>
'),
    t('Статус праблемы (field_problem_status)'),
    t('Праблемы, якія не вырашаліся'),
  );
  $export['map_local_problems'] = $view;

  return $export;
}
