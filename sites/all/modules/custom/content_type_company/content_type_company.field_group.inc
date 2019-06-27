<?php

/**
 * @file
 * content_type_company.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_company_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|company|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Дзеянні',
    'weight' => '14',
    'children' => array(
      0 => 'group_share',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Дзеянні',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-actions',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_actions|node|company|full'] = $field_group;

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
  $field_groups['group_address|node|company|form'] = $field_group;

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
    'weight' => '6',
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
  $field_groups['group_contacts|node|company|form'] = $field_group;

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
  $field_groups['group_email|node|company|form'] = $field_group;

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
  $field_groups['group_info|node|company|full'] = $field_group;

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
  $field_groups['group_operation_time|node|company|form'] = $field_group;

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
  $field_groups['group_phone|node|company|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|company|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'company';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Падзяліцца',
    'weight' => '17',
    'children' => array(
      0 => 'field_add_this',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Падзяліцца',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-share',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_share|node|company|full'] = $field_group;

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
  $field_groups['group_web_site|node|company|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Web-сайт');
  t('Інфармацыя');
  t('Адрас');
  t('Адрас e-mail');
  t('Дзеянні');
  t('Кантакты');
  t('Падзяліцца');
  t('Тэлефон');
  t('Час працы');

  return $field_groups;
}
