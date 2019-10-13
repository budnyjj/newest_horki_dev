<?php

/**
 * @file
 * views_uzgorak.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function views_uzgorak_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'uzgorak';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Узгорак';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'uzgorak zebra';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Апісанне';
  $handler->display->display_options['header']['area']['content'] = '<p><b>Абласная газета "УзГорак" выходзіць у Горацкім, Дрыбінскім і Мсціслаўскім раёнах па чацвяргах. Наклад - 1300 асобнікаў на тыдзень.</b> Незалежныя навіны і каментарыі, тэлепраграма, прыватныя аб\'явы, астрапрагноз і віншаванні.</p>

<h2>Цана</h2>
<p>Прадаецца ва ўсіх газетных кіёсках і на кожнай пошце, а ў Горках яшчэ і ў крамах «Фея» ды «Перекресток».
Кошт – 1000 рублёў. Пытайцеся ў паштальёнаў пра падпіску.
Цана падпіскі на месяц – 5.000 рублёў, на квартал – 15.000 рублёў, на паўгоддзе – 30.000 рублёў.</p>

<h2>Прыватныя абвесткі</h2>
<p>Абвесткі ад фізічных асобаў прымаюцца <b>па звычайным гарадскім нумары 166</b> у рубрыкі (паслуга платная): 
<ul>
<li>Прадам (нерухомасць, аўто і запчасткі, тэхніка, вопратка і абутак, мэбля, для дзяцей, жывёлы і птушка і іншае) </li>
<li>Куплю </li>
<li>Мяняю </li>
<li>Здаю </li>
<li>Здыму </li>
<li>Рознае</li><ul>
<p>Абвестку можна даслаць і задарма на электронную пошту: uzgorak@gmail.com.

<h2>Рэклама ва "УзГорку"</h2>
<p>Рэклама ва "УзГорку" – гэта хуткі і эканамічны спосаб давесці інфармацыю пра вашы тавары і паслугі да пакупнікоў. Вы плаціце за адно рэкламнае месца, а пра Вас даведваюцца ў трох – Горацкім, Дрыбінскім і Мсціслаўскім раёнах. <b>Для размяшчэння рэкламы ў выданні звяртайцеся на тэлефон: 8 033 628 32 99.</b> </p>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
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
    'uzgorak' => 'uzgorak',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Архіў газеты "УзГорак"';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'page-uzgorak';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« першая';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ папярэдняя';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'наступная ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'апошняя »';
  $handler->display->display_options['pager']['options']['more_button_text'] = 'больш "Узгоркаў"';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
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
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'uzgorak-photo';
  $handler->display->display_options['fields']['field_pics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pics']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pics']['settings'] = array(
    'image_style' => 'uzgorak_preview',
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
  $handler->display->display_options['fields']['title']['element_class'] = 'uzgorak-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: Апісанне */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<ul> <li> <strong> <b>';
  $handler->display->display_options['fields']['body']['element_class'] = 'uzgorak-description';
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
  /* Поле: Сырая спасылка */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['ui_name'] = 'Сырая спасылка';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'file_url_plain';
  /* Поле: Глядзець онлайн */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Глядзець онлайн';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['text'] = 'Глядзець анлайн';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  /* Поле: Спасылкі */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Спасылкі';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_pdf]">Скачаць PDF</a>
[view_node]';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'uzgorak-links';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
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
        'value' => 'Архив газеты "УзГорак" в pdf | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => 'Номера областной газеты Узгорак за 2009-2015 годы в формате pdf – скачать или читать онлайн.',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => 'Узгорак, газета Узгорак, читать Узгорак, все номера газеты Узгорак',
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
        'value' => '',
        'default' => '',
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
        'default' => '',
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
        'value' => 'Архив газеты "УзГорак" в pdf ',
        'default' => '[view:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => 'Номера областной газеты Узгорак за 2009-2015 годы в формате pdf – скачать или читать онлайн.',
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
        'value' => '',
        'default' => '',
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
        'value' => '',
        'default' => '',
      ),
      'og:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:height' => array(
        'value' => '',
        'default' => '',
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
        'value' => '',
        'default' => '',
      ),
      'twitter:creator' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:creator:id' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:url' => array(
        'value' => '[view:url]',
        'default' => '[view:url]',
      ),
      'twitter:title' => array(
        'value' => 'Архив газеты "УзГорак" в pdf ',
        'default' => '[view:title]',
      ),
      'twitter:description' => array(
        'value' => 'Номера областной газеты Узгорак за 2009-2015 годы в формате pdf – скачать или читать онлайн.',
        'default' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:width' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:height' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image:alt' => array(
        'value' => '',
        'default' => '',
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
  $handler->display->display_options['path'] = 'uzgorak/archive.html';

  /* Display: Дадатак */
  $handler = $view->new_display('attachment', 'Дадатак', 'attachment_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'attachment-uzgorak';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Загаловак: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'Апісанне';
  $handler->display->display_options['header']['area']['empty'] = TRUE;
  $handler->display->display_options['header']['area']['content'] = '<div class="description">
<strong>Абласная газета "УзГорак" выходзіць і прадаецца ў Горацкім, Дрыбінскім і Мсціслаўскім раёнах па чацвяргах.</strong>
Наклад – 2550 асобнікаў на тыдзень.
Актуальныя для мясцовых жыхароў тэмы, штотыднёвыя апытанні гараджан, фотарэпартажы, праграма любімых тэлеканалаў, сканворды, прыватныя аб\'явы, астрапрагноз і віншаванні.
</div>';
  $handler->display->display_options['header']['area']['format'] = 'php_code';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Поле: Змест: Загаловак */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'uzgorak-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Поле: Змест: PDF */
  $handler->display->display_options['fields']['field_pdf']['id'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf']['label'] = '';
  $handler->display->display_options['fields']['field_pdf']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf']['type'] = 'pdf_reader_file';
  $handler->display->display_options['fields']['field_pdf']['settings'] = array(
    'pdf_width' => '100%',
    'pdf_height' => '',
    'renderer' => 'direct',
    'download' => 0,
    'colorbox' => 0,
    'colorbox_link_text' => 'Глядзець',
  );
  /* Поле: Змест: Апісанне */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['preserve_tags'] = '<p> <ul> <li> <strong>';
  $handler->display->display_options['fields']['body']['element_class'] = 'uzgorak-description';
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
  /* Поле: Сырая спасылка */
  $handler->display->display_options['fields']['field_pdf_1']['id'] = 'field_pdf_1';
  $handler->display->display_options['fields']['field_pdf_1']['table'] = 'field_data_field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['field'] = 'field_pdf';
  $handler->display->display_options['fields']['field_pdf_1']['ui_name'] = 'Сырая спасылка';
  $handler->display->display_options['fields']['field_pdf_1']['label'] = '';
  $handler->display->display_options['fields']['field_pdf_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pdf_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pdf_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_pdf_1']['type'] = 'file_url_plain';
  /* Поле: Глядзець онлайн */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['ui_name'] = 'Глядзець онлайн';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Глядзець анлайн';
  /* Поле: Спасылкі */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Спасылкі';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[field_pdf_1]">Скачаць PDF</a>
[view_node]';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_pdf_1]';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'uzgorak-links';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['uzgorak'] = array(
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
    t('Апісанне'),
    t('<p><b>Абласная газета "УзГорак" выходзіць у Горацкім, Дрыбінскім і Мсціслаўскім раёнах па чацвяргах. Наклад - 1300 асобнікаў на тыдзень.</b> Незалежныя навіны і каментарыі, тэлепраграма, прыватныя аб\'явы, астрапрагноз і віншаванні.</p>

<h2>Цана</h2>
<p>Прадаецца ва ўсіх газетных кіёсках і на кожнай пошце, а ў Горках яшчэ і ў крамах «Фея» ды «Перекресток».
Кошт – 1000 рублёў. Пытайцеся ў паштальёнаў пра падпіску.
Цана падпіскі на месяц – 5.000 рублёў, на квартал – 15.000 рублёў, на паўгоддзе – 30.000 рублёў.</p>

<h2>Прыватныя абвесткі</h2>
<p>Абвесткі ад фізічных асобаў прымаюцца <b>па звычайным гарадскім нумары 166</b> у рубрыкі (паслуга платная): 
<ul>
<li>Прадам (нерухомасць, аўто і запчасткі, тэхніка, вопратка і абутак, мэбля, для дзяцей, жывёлы і птушка і іншае) </li>
<li>Куплю </li>
<li>Мяняю </li>
<li>Здаю </li>
<li>Здыму </li>
<li>Рознае</li><ul>
<p>Абвестку можна даслаць і задарма на электронную пошту: uzgorak@gmail.com.

<h2>Рэклама ва "УзГорку"</h2>
<p>Рэклама ва "УзГорку" – гэта хуткі і эканамічны спосаб давесці інфармацыю пра вашы тавары і паслугі да пакупнікоў. Вы плаціце за адно рэкламнае месца, а пра Вас даведваюцца ў трох – Горацкім, Дрыбінскім і Мсціслаўскім раёнах. <b>Для размяшчэння рэкламы ў выданні звяртайцеся на тэлефон: 8 033 628 32 99.</b> </p>'),
    t('Page'),
    t('Архіў газеты "УзГорак"'),
    t('больш "Узгоркаў"'),
    t('Глядзець анлайн'),
    t('<a href="[field_pdf]">Скачаць PDF</a>
[view_node]'),
    t('Дадатак'),
    t('<div class="description">
<strong>Абласная газета "УзГорак" выходзіць і прадаецца ў Горацкім, Дрыбінскім і Мсціслаўскім раёнах па чацвяргах.</strong>
Наклад – 2550 асобнікаў на тыдзень.
Актуальныя для мясцовых жыхароў тэмы, штотыднёвыя апытанні гараджан, фотарэпартажы, праграма любімых тэлеканалаў, сканворды, прыватныя аб\'явы, астрапрагноз і віншаванні.
</div>'),
    t('<a href="[field_pdf_1]">Скачаць PDF</a>
[view_node]'),
  );
  $export['uzgorak'] = $view;

  return $export;
}
