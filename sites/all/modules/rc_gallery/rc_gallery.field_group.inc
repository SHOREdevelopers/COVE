<?php
/**
 * @file
 * rc_gallery.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function rc_gallery_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_advanced|node|gallery_image|form';
  $field_group->group_name = 'group_advanced';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'gallery_image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Advanced Fields',
    'weight' => '11',
    'children' => array(
      0 => 'field_nines_discipline_s_',
      1 => 'field_nines_genre_s_',
      2 => 'field_nines_type_s_',
      3 => 'field_parent_section',
      4 => 'taxonomy_vocabulary_3',
      5 => 'field_accession_number_',
      6 => 'field_creation_technique_',
      7 => 'field_gallery_location',
      8 => 'field_height_in_centimeters',
      9 => 'field_publisher',
      10 => 'field_style',
      11 => 'field_support_medium',
      12 => 'field_width_in_centimeters_',
      13 => 'field_latitude_longitude',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Advanced Fields',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-advanced field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_advanced|node|gallery_image|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced Fields');

  return $field_groups;
}
