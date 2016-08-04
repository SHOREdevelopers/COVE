<?php
/**
 * @file
 * cove_chronologies_timelines.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function cove_chronologies_timelines_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date|node|chronology_entry|form';
  $field_group->group_name = 'group_date';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'chronology_entry';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Event Date',
    'weight' => '1',
    'children' => array(
      0 => 'field_event_date',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Event Date',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '<p><strong>A year is required here</strong>. If exact months or days are unknown, use the "estimates" drop-downs to narrow down the date as much as possible--or just leave them blank. Entering just a year in this field is valid, but it may not be very useful.</p>',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_date|node|chronology_entry|form'] = $field_group;

  return $export;
}
