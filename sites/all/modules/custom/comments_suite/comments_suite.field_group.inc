<?php
/**
 * @file
 * comments_suite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function comments_suite_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|news|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Дадатковыя тэгі',
    'weight' => '3',
    'children' => array(
      0 => 'field_additional_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-additional field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_additional|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_address|node|company|form';
  $field_group->group_name = 'group_address';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contacts';
  $field_group->data = array(
    'label' => 'Адрас',
    'weight' => '1',
    'children' => array(
      0 => 'field_address',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-address field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_address|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|node|company|form';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Кантакты',
    'weight' => '4',
    'children' => array(
      0 => 'group_address',
      1 => 'group_operation_time',
      2 => 'group_phone',
      3 => 'group_email',
      4 => 'group_web_site',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-contacts field-group-tabs',
      ),
    ),
  );
  $export['group_contacts|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_email|node|company|form';
  $field_group->group_name = 'group_email';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contacts';
  $field_group->data = array(
    'label' => 'Адрас e-mail',
    'weight' => '4',
    'children' => array(
      0 => 'field_email',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-email field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_email|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_facts|node|afisha|teaser';
  $field_group->group_name = 'group_facts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_what',
      1 => 'field_where',
      2 => 'field_when',
      3 => 'field_placement_by_taxonomy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-facts field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_facts|node|afisha|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|company|full';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Інфармацыя',
    'weight' => '0',
    'children' => array(
      0 => 'field_company_full_name',
      1 => 'field_tax_number',
      2 => 'field_address',
      3 => 'field_operation_time',
      4 => 'field_company_phone',
      5 => 'field_email',
      6 => 'field_company_web_site',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Інфармацыя',
      'instance_settings' => array(
        'classes' => 'group-info field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
        'id' => 'node_company_full_group_info',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_info|node|company|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|news|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Медыя',
    'weight' => '1',
    'children' => array(
      0 => 'group_preview',
      1 => 'group_photos',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'label' => 'Медыя',
      'instance_settings' => array(
        'classes' => ' group-media field-group-tabs',
      ),
    ),
  );
  $export['group_media|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_operation_time|node|company|form';
  $field_group->group_name = 'group_operation_time';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contacts';
  $field_group->data = array(
    'label' => 'Час працы',
    'weight' => '2',
    'children' => array(
      0 => 'field_operation_time',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-operation-time field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_operation_time|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_phone|node|company|form';
  $field_group->group_name = 'group_phone';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contacts';
  $field_group->data = array(
    'label' => 'Тэлефон',
    'weight' => '3',
    'children' => array(
      0 => 'field_company_phone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-phone field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_phone|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photos|node|news|form';
  $field_group->group_name = 'group_photos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Фоты да блогу',
    'weight' => '17',
    'children' => array(
      0 => 'field_photos',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-photos field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_photos|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photos|node|news|full';
  $field_group->group_name = 'group_photos';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_photos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => ' group-photos field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_photos|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_places|node|news_from_readers|form';
  $field_group->group_name = 'group_places';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Месцы',
    'weight' => '12',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-places field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_places|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_places|node|news|form';
  $field_group->group_name = 'group_places';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Mecцы',
    'weight' => '1',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-places field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_places|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_preview|node|news|form';
  $field_group->group_name = 'group_preview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_media';
  $field_group->data = array(
    'label' => 'Прэв\'ю',
    'weight' => '16',
    'children' => array(
      0 => 'field_pics',
      1 => 'field_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-preview field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_preview|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rubrics|node|news_from_readers|form';
  $field_group->group_name = 'group_rubrics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Рубрыкі',
    'weight' => '13',
    'children' => array(
      0 => 'field_rubric_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rubrics field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rubrics|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rubrics|node|news|form';
  $field_group->group_name = 'group_rubrics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Рубрыкі',
    'weight' => '2',
    'children' => array(
      0 => 'field_rubric_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-rubrics field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rubrics|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news_from_readers|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '4',
    'children' => array(
      0 => 'group_places',
      1 => 'group_rubrics',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-tags field-group-tabs',
      ),
    ),
  );
  $export['group_tags|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news_from_readers|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тэгі:',
    'weight' => '2',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Тэгі:',
      'instance_settings' => array(
        'classes' => 'group-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|news_from_readers|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '3',
    'children' => array(
      0 => 'group_places',
      1 => 'group_rubrics',
      2 => 'group_additional',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => ' group-tags field-group-tabs',
      ),
    ),
  );
  $export['group_tags|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тэгі:',
    'weight' => '3',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
      2 => 'field_additional_taxonomy',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Тэгі:',
      'instance_settings' => array(
        'classes' => ' group-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_tags|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_web_site|node|company|form';
  $field_group->group_name = 'group_web_site';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_contacts';
  $field_group->data = array(
    'label' => 'Web-сайт',
    'weight' => '5',
    'children' => array(
      0 => 'field_company_web_site',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-web-site field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_web_site|node|company|form'] = $field_group;

  return $export;
}
