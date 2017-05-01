<?php
/**
 * @file
 * content_type_local_solution.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_local_solution_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|local_solution|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_solution';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Дзеянні',
    'weight' => '7',
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
  $field_groups['group_actions|node|local_solution|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info|node|local_solution|full';
  $field_group->group_name = 'group_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_solution';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Інфармацыя',
    'weight' => '3',
    'children' => array(
      0 => 'field_documents',
      1 => 'field_linked_local_problems',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Інфармацыя',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-info',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info|node|local_solution|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|local_solution|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_solution';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Падзяліцца',
    'weight' => '7',
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
  $field_groups['group_share|node|local_solution|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Інфармацыя');
  t('Дзеянні');
  t('Падзяліцца');

  return $field_groups;
}
