<?php
/**
 * @file
 * content_type_afisha.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_afisha_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|afisha|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Дзеянні',
    'weight' => '13',
    'children' => array(
      0 => 'group_tags',
      1 => 'group_share',
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
  $field_groups['group_actions|node|afisha|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional|node|afisha|form';
  $field_group->group_name = 'group_additional';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Дадатковыя тэгі',
    'weight' => '19',
    'children' => array(
      0 => 'field_additional_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-additional field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_additional|node|afisha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|afisha|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Падзяліцца',
    'weight' => '1',
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
  $field_groups['group_share|node|afisha|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Дадатковыя тэгі');
  t('Дзеянні');
  t('Падзяліцца');

  return $field_groups;
}
