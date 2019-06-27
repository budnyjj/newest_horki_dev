<?php

/**
 * @file
 * content_type_local_problem.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_local_problem_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_actions|node|local_problem|full';
  $field_group->group_name = 'group_actions';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Дзеянні',
    'weight' => '10',
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
  $field_groups['group_actions|node|local_problem|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_problem_map|node|local_problem|form';
  $field_group->group_name = 'group_problem_map';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Мапа - адзначце на ёй месца, дзе знаходзіцца праблема',
    'weight' => '3',
    'children' => array(
      0 => 'field_problem_map',
      1 => 'field_this_problem_on_map',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'Мапа - адзначце на ёй месца, дзе знаходзіцца праблема',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'element' => 'div',
        'show_label' => '1',
        'label_element' => 'label',
        'attributes' => 'for="edit-field-problem-map"',
      ),
    ),
  );
  $field_groups['group_problem_map|node|local_problem|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_share|node|local_problem|full';
  $field_group->group_name = 'group_share';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'local_problem';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Падзяліцца',
    'weight' => '13',
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
  $field_groups['group_share|node|local_problem|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Дзеянні');
  t('Мапа - адзначце на ёй месца, дзе знаходзіцца праблема');
  t('Падзяліцца');

  return $field_groups;
}
