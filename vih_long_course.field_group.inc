<?php
/**
 * @file
 * vih_long_course.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function vih_long_course_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prices|node|vih_long_course|default';
  $field_group->group_name = 'group_prices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vih_long_course';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Priser',
    'weight' => '3',
    'children' => array(
      0 => 'field_material_payment',
      1 => 'field_registration_payment',
      2 => 'field_travel_payment',
      3 => 'field_weekly_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-prices field-group-fieldset',
      ),
    ),
  );
  $field_groups['group_prices|node|vih_long_course|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_prices|node|vih_long_course|form';
  $field_group->group_name = 'group_prices';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'vih_long_course';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Priser',
    'weight' => '4',
    'children' => array(
      0 => 'field_material_payment',
      1 => 'field_registration_payment',
      2 => 'field_travel_payment',
      3 => 'field_weekly_payment',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => ' group-prices field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_prices|node|vih_long_course|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Priser');

  return $field_groups;
}
