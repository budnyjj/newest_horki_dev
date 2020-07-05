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
  $handler->display->display_options['css_class'] = 'page-static-grid';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'болей';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Прымяніць';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Скінуць';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  /* Поле: Змест: Галоўны фотаздымак */
  $handler->display->display_options['fields']['field_pics']['id'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['table'] = 'field_data_field_pics';
  $handler->display->display_options['fields']['field_pics']['field'] = 'field_pics';
  $handler->display->display_options['fields']['field_pics']['label'] = '';
  $handler->display->display_options['fields']['field_pics']['alter']['text'] = '[field_pics]';
  $handler->display->display_options['fields']['field_pics']['alter']['path'] = '[path]?width=600&height=600';
  $handler->display->display_options['fields']['field_pics']['alter']['link_class'] = 'colorbox-node';
  $handler->display->display_options['fields']['field_pics']['element_class'] = 'static-pic';
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
  $handler->display->display_options['fields']['field_daviedka_punkt_menu']['element_class'] = 'static-title';
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
  $handler->display->display_options['metatags'] = array(
    'und' => array(
      'title' => array(
        'value' => '[view:title] | [site:name]',
        'default' => '[view:title] | [site:name]',
      ),
      'description' => array(
        'value' => '[view:description]',
        'default' => '[view:description]',
      ),
      'abstract' => array(
        'value' => '',
        'default' => '',
      ),
      'keywords' => array(
        'value' => '',
        'default' => '',
      ),
      'author' => array(
        'value' => '',
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
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
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
        'value' => 'ru',
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
      'google' => array(
        'value' => '',
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
        'value' => '[view:title]',
        'default' => '[view:title]',
      ),
      'og:determiner' => array(
        'value' => '',
        'default' => '',
      ),
      'og:description' => array(
        'value' => '',
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
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
      ),
      'og:image:url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:secure_url' => array(
        'value' => '',
        'default' => '',
      ),
      'og:image:alt' => array(
        'value' => '',
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
        'value' => '[view:title]',
        'default' => '[view:title]',
      ),
      'twitter:description' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:dnt' => array(
        'value' => '',
        'default' => '',
      ),
      'twitter:image' => array(
        'value' => 'sites/default/files/social_preview/default.png',
        'default' => 'sites/default/files/social_preview/default.png',
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
        'value' => '[current-page:title]',
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
      'schema_article.@type' => array(
        'value' => '',
      ),
      'schema_article.headline' => array(
        'value' => '',
      ),
      'schema_article.name' => array(
        'value' => '',
      ),
      'schema_article.description' => array(
        'value' => '',
      ),
      'schema_article.author' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_article.publisher' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_article.datePublished' => array(
        'value' => '',
      ),
      'schema_article.dateModified' => array(
        'value' => '',
      ),
      'schema_article.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_article.mainEntityOfPage' => array(
        'value' => '',
      ),
      'schema_article.hasPart' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'timeRequired' => '',
          'potentialAction' => array(
            'actionType' => '',
            'pivot' => '',
            'ConsumeAction' => array(
              '@type' => '',
              'target' => array(
                'pivot' => '',
                '@type' => '',
                'urlTemplate' => '',
                'actionPlatform' => '',
                'inLanguage' => '',
              ),
              'expectsAcceptanceOf' => array(
                'pivot' => '',
                '@type' => '',
                '@id' => '',
                'price' => '',
                'priceCurrency' => '',
                'url' => '',
                'itemCondition' => '',
                'availability' => '',
                'availabilityStarts' => '',
                'availabilityEnds' => '',
                'validFrom' => '',
                'category' => '',
                'eligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
                'ineligibleRegion' => array(
                  'pivot' => '',
                  '@type' => '',
                  'name' => '',
                ),
              ),
            ),
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'expectsAcceptanceOf' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'price' => '',
              'priceCurrency' => '',
              'url' => '',
              'itemCondition' => '',
              'availability' => '',
              'availabilityStarts' => '',
              'availabilityEnds' => '',
              'validFrom' => '',
              'category' => '',
              'eligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
              'ineligibleRegion' => array(
                'pivot' => '',
                '@type' => '',
                'name' => '',
              ),
            ),
            '@type' => '',
          ),
          'isAccessibleForFree' => '',
          'cssSelector' => '',
        ),
      ),
      'schema_article.isAccessibleForFree' => array(
        'value' => '',
      ),
      'schema_article.speakable' => array(
        'value' => array(
          '@type' => '',
          'xpath' => '',
          'cssSelector' => '',
        ),
      ),
      'schema_article.about' => array(
        'value' => '',
      ),
      'schema_article.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_article.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_item_list.@type' => array(
        'value' => 'ItemList',
      ),
      'schema_item_list.@id' => array(
        'value' => '',
      ),
      'schema_item_list.itemListElement' => array(
        'value' => 'daviedka:page:[view:url:unaliased:args:last]',
      ),
      'schema_item_list.mainEntityOfPage' => array(
        'value' => '',
      ),
      'schema_organization.@type' => array(
        'value' => '',
      ),
      'schema_organization.additionalType' => array(
        'value' => '',
      ),
      'schema_organization.@id' => array(
        'value' => '',
      ),
      'schema_organization.name' => array(
        'value' => '',
      ),
      'schema_organization.address' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'streetAddress' => '',
          'addressLocality' => '',
          'addressRegion' => '',
          'postalCode' => '',
          'addressCountry' => '',
        ),
      ),
      'schema_organization.geo' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'latitude' => '',
          'longitude' => '',
        ),
      ),
      'schema_organization.telephone' => array(
        'value' => '',
      ),
      'schema_organization.contactPoint' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'telephone' => '',
          'url' => '',
          'availableLanguage' => '',
          'contactType' => '',
          'contactOption' => '',
          'areaServed' => array(
            'pivot' => '',
            '@type' => '',
            'name' => '',
            'url' => '',
            'address' => array(
              'pivot' => '',
              '@type' => '',
              'streetAddress' => '',
              'addressLocality' => '',
              'addressRegion' => '',
              'postalCode' => '',
              'addressCountry' => '',
            ),
            'geo' => array(
              'pivot' => '',
              '@type' => '',
              'latitude' => '',
              'longitude' => '',
            ),
            'country' => array(
              'pivot' => '',
              '@type' => '',
              'name' => '',
            ),
          ),
          'email' => '',
          'faxnumber' => '',
          'productSupported' => '',
        ),
      ),
      'schema_organization.url' => array(
        'value' => '',
      ),
      'schema_organization.sameAs' => array(
        'value' => '',
      ),
      'schema_organization.description' => array(
        'value' => '',
      ),
      'schema_organization.brand' => array(
        'value' => array(
          '@type' => '',
          '@id' => '',
          'name' => '',
          'description' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_organization.acceptsReservations' => array(
        'value' => '',
      ),
      'schema_organization.menu' => array(
        'value' => '',
      ),
      'schema_organization.openingHoursSpecification' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'dayOfWeek' => '',
          'opens' => '',
          'closes' => '',
          'validFrom' => '',
          'validThrough' => '',
        ),
      ),
      'schema_organization.image' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_organization.logo' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_organization.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'TradeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'OrganizeAction' => array(
            '@type' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
            'result' => array(
              'pivot' => '',
              '@type' => '',
              '@id' => '',
              'name' => '',
              'url' => '',
            ),
          ),
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
          'result' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
          ),
        ),
      ),
      'schema_organization.priceRange' => array(
        'value' => '',
      ),
      'schema_organization.memberOf' => array(
        'value' => array(
          '@type' => '',
          'name' => '',
          'programName' => '',
          'alternateName' => '',
          'hostingOrganization' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'member' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'membershipNumber' => '',
          'identifier' => '',
          'additionalType' => '',
          'description' => '',
          'disambiguatingDescription' => '',
          'image' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
          'mainEntityOfPage' => '',
          'url' => '',
          'sameAs' => '',
        ),
      ),
      'schema_organization.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_organization.starRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_organization.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_video_object.@type' => array(
        'value' => '',
      ),
      'schema_video_object.@id' => array(
        'value' => '',
      ),
      'schema_video_object.name' => array(
        'value' => '',
      ),
      'schema_video_object.description' => array(
        'value' => '',
      ),
      'schema_video_object.uploadDate' => array(
        'value' => '',
      ),
      'schema_video_object.expires' => array(
        'value' => '',
      ),
      'schema_video_object.thumbnailUrl' => array(
        'value' => array(
          '@type' => '',
          'representativeOfPage' => '',
          'url' => '',
          'width' => '',
          'height' => '',
        ),
      ),
      'schema_video_object.contentUrl' => array(
        'value' => '',
      ),
      'schema_video_object.embedUrl' => array(
        'value' => '',
      ),
      'schema_video_object.duration' => array(
        'value' => '',
      ),
      'schema_video_object.interactionCount' => array(
        'value' => '',
      ),
      'schema_video_object.transcript' => array(
        'value' => '',
      ),
      'schema_video_object.aggregateRating' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'ratingValue' => '',
          'ratingCount' => '',
          'bestRating' => '',
          'worstRating' => '',
        ),
      ),
      'schema_video_object.review' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          'reviewBody' => '',
          'datePublished' => '',
          'author' => array(
            'pivot' => '',
            '@type' => '',
            '@id' => '',
            'name' => '',
            'url' => '',
            'sameAs' => '',
            'logo' => array(
              'pivot' => '',
              '@type' => '',
              'representativeOfPage' => '',
              'url' => '',
              'width' => '',
              'height' => '',
            ),
          ),
          'reviewRating' => array(
            'pivot' => '',
            '@type' => '',
            'ratingValue' => '',
            'ratingCount' => '',
            'bestRating' => '',
            'worstRating' => '',
          ),
        ),
      ),
      'schema_web_site.@type' => array(
        'value' => '',
      ),
      'schema_web_site.@id' => array(
        'value' => '',
      ),
      'schema_web_site.name' => array(
        'value' => '',
      ),
      'schema_web_site.url' => array(
        'value' => '',
      ),
      'schema_web_site.sameAs' => array(
        'value' => '',
      ),
      'schema_web_site.publisher' => array(
        'value' => array(
          'pivot' => '',
          '@type' => '',
          '@id' => '',
          'name' => '',
          'url' => '',
          'sameAs' => '',
          'logo' => array(
            'pivot' => '',
            '@type' => '',
            'representativeOfPage' => '',
            'url' => '',
            'width' => '',
            'height' => '',
          ),
        ),
      ),
      'schema_web_site.potentialAction' => array(
        'value' => array(
          'actionType' => '',
          'pivot' => '',
          'SearchAction' => array(
            '@type' => '',
            'query' => '',
            'query-input' => '',
            'target' => array(
              'pivot' => '',
              '@type' => '',
              'urlTemplate' => '',
              'actionPlatform' => '',
              'inLanguage' => '',
            ),
          ),
          'query' => '',
          'query-input' => '',
          'target' => array(
            'pivot' => '',
            '@type' => '',
            'urlTemplate' => '',
            'actionPlatform' => '',
            'inLanguage' => '',
          ),
          '@type' => '',
        ),
      ),
      'schema_web_site.inLanguage' => array(
        'value' => '',
      ),
      'schema_web_site.translationOfWork' => array(
        'value' => array(
          '@id' => '',
        ),
      ),
      'schema_web_site.workTranslation' => array(
        'value' => array(
          'pivot' => '',
          '@id' => '',
        ),
      ),
    ),
  );
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
    t('[field_pics]'),
    t('<center>[field_daviedka_punkt_menu] </center>'),
    t('Усе'),
    t('%1'),
    t('Page'),
  );
  $export['daviedka'] = $view;

  return $export;
}
