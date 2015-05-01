<?php
/**
 * @file
 * content_type_local_problem.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_local_problem_field_group_info() {
  $export = array();

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
    'weight' => '1',
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
  $export['group_problem_map|node|local_problem|form'] = $field_group;

  return $export;
}
