<?php
/**
 * @file
 * comments_suite.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function comments_suite_field_group_info() {
  $field_groups = array();

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
  $field_groups['group_additional|node|news|form'] = $field_group;

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
  $field_groups['group_facts|node|afisha|teaser'] = $field_group;

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
  $field_groups['group_media|node|news|form'] = $field_group;

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
  $field_groups['group_photos|node|news|form'] = $field_group;

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
  $field_groups['group_photos|node|news|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_places|node|afisha|form';
  $field_group->group_name = 'group_places';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Месцы',
    'weight' => '17',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-places field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_places|node|afisha|form'] = $field_group;

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
  $field_groups['group_places|node|news_from_readers|form'] = $field_group;

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
  $field_groups['group_places|node|news|form'] = $field_group;

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
  $field_groups['group_preview|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rubrics|node|afisha|form';
  $field_group->group_name = 'group_rubrics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tags';
  $field_group->data = array(
    'label' => 'Рубрыкі',
    'weight' => '18',
    'children' => array(
      0 => 'field_rubric_by_taxonomy',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rubrics field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_rubrics|node|afisha|form'] = $field_group;

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
  $field_groups['group_rubrics|node|news_from_readers|form'] = $field_group;

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
  $field_groups['group_rubrics|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|afisha|form';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '7',
    'children' => array(
      0 => 'group_places',
      1 => 'group_rubrics',
      2 => 'group_additional',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-tags field-group-tabs',
      ),
    ),
  );
  $field_groups['group_tags|node|afisha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|afisha|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'afisha';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '2',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
      2 => 'field_additional_taxonomy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Тэгі',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|afisha|full'] = $field_group;

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
  $field_groups['group_tags|node|news_from_readers|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news_from_readers|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news_from_readers';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '2',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Тэгі',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|news_from_readers|full'] = $field_group;

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
  $field_groups['group_tags|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tags|node|news|full';
  $field_group->group_name = 'group_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_actions';
  $field_group->data = array(
    'label' => 'Тэгі',
    'weight' => '4',
    'children' => array(
      0 => 'field_placement_by_taxonomy',
      1 => 'field_rubric_by_taxonomy',
      2 => 'field_additional_taxonomy',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Тэгі',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-tags',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tags|node|news|full'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Mecцы');
  t('Дадатковыя тэгі');
  t('Медыя');
  t('Месцы');
  t('Прэв\'ю');
  t('Рубрыкі');
  t('Тэгі');
  t('Фоты да блогу');

  return $field_groups;
}
