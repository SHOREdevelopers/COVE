<?php
/**
 * @file
 * cove_chronologies_timelines.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cove_chronologies_timelines_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-chronology-body'
  $field_instances['node-chronology-body'] = array(
    'bundle' => 'chronology',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a short description of your chronology',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description',
    'required' => 1,
    'settings' => array(
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-chronology-field_items_in_this_chronology'
  $field_instances['node-chronology-field_items_in_this_chronology'] = array(
    'bundle' => 'chronology',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => 'Shows the individual Chronology entries that have been added to this Chronology. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_items_in_this_chronology',
    'label' => 'Items in this chronology',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-chronology-field_resource_index'
  $field_instances['node-chronology-field_resource_index'] = array(
    'bundle' => 'chronology',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'If this chronology is part of a "resource," e.g. an edition, select a value here; otherwise, leave it blank. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resource_index',
    'label' => 'Parent Resource',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_event2'
  $field_instances['node-chronology_entry-field_event2'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event2',
    'label' => 'Event Description',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_event_date'
  $field_instances['node-chronology_entry-field_event_date'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(
            'components' => array(
              'approx' => array(
                'value' => '',
                'weight' => -1,
              ),
              'c1' => array(
                'value' => '',
                'weight' => 7,
              ),
              'c2' => array(
                'value' => '',
                'weight' => 8,
              ),
              'c3' => array(
                'value' => '',
                'weight' => 9,
              ),
              'day' => array(
                'empty' => '',
                'format' => 'j-S',
                'weight' => 2,
              ),
              'hour' => array(
                'empty' => '',
                'format' => 'h',
                'weight' => 3,
              ),
              'minute' => array(
                'empty' => '',
                'format' => 'i',
                'weight' => 4,
              ),
              'month' => array(
                'empty' => '',
                'format' => 'M',
                'weight' => 1,
              ),
              'second' => array(
                'empty' => '',
                'format' => 's',
                'weight' => 5,
              ),
              'timezone' => array(
                'empty' => '',
                'format' => 'T',
                'weight' => 6,
              ),
              'year' => array(
                'empty' => '',
                'format' => 'Y-ce',
                'weight' => 0,
              ),
            ),
            'display' => array(
              'day' => 'estimate_label',
              'hour' => 'estimate_label',
              'minute' => 'estimate_label',
              'month' => 'estimate_label',
              'second' => 'estimate_label',
              'timezone' => 'date_only',
              'year' => 'estimate_label',
            ),
            'meridiem' => 'a',
            'separator' => array(
              'date' => ' ',
              'datetime' => ' ',
              'other' => ' ',
              'range' => '',
              'time' => ':',
            ),
            'year_designation' => 'ce',
          ),
          'format' => 'medium',
          'use_override' => 'short',
        ),
        'type' => 'partial_date_default',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_event_date',
    'label' => 'Event date',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'partial_date',
      'settings' => array(
        0 => FALSE,
        'estimates' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 0,
          ),
          'to' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'year' => 0,
          ),
        ),
        'granularity' => array(
          'from' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
          'to' => array(
            'day' => 'day',
            'hour' => 0,
            'minute' => 0,
            'month' => 'month',
            'second' => 0,
            'timezone' => 0,
            'year' => 'year',
          ),
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => 'If the date is uncertain, check this box. It will be shown to users with "circa."',
            'components' => '',
            'txt_long' => 'If the date is uncertain and that is not captured by the "estimates" options above, provide a more detailed description here. on of date',
            'txt_short' => 'If the date is uncertain and that is not captured by the "estimates" options above, provide a more detailed description here. ',
          ),
        ),
        'hide_remove' => 1,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 1,
          'range_inline' => 0,
          'txt_long' => 0,
          'txt_short' => 1,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_image'
  $field_instances['node-chronology_entry-field_image'] = array(
    'bundle' => 'chronology_entry',
    'deleted' => 0,
    'description' => 'Here, you can add an image that is in some way illustrative of an event; for example, a title page for a book publication, a portrait of a person involved in an event, or a depiction of a historical event. This is not required but highly encouraged. See below for basic size requirements, and keep in mind that the image will be resized to fit the timeline format. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'chronology-uploads',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '5MB',
      'max_resolution' => '',
      'min_resolution' => '150x150',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'gallery_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_parent_chronology'
  $field_instances['node-chronology_entry-field_parent_chronology'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => 'Select the parent chronology of which this entry is a part. This should happen automatically!',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_parent_chronology',
    'label' => 'Parent Chronology',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => FALSE,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Event Description');
  t('Event date');
  t('Here, you can add an image that is in some way illustrative of an event; for example, a title page for a book publication, a portrait of a person involved in an event, or a depiction of a historical event. This is not required but highly encouraged. See below for basic size requirements, and keep in mind that the image will be resized to fit the timeline format. ');
  t('If this chronology is part of a "resource," e.g. an edition, select a value here; otherwise, leave it blank. ');
  t('Image');
  t('Items in this chronology');
  t('Parent Chronology');
  t('Parent Resource');
  t('Provide a short description of your chronology');
  t('Select the parent chronology of which this entry is a part. This should happen automatically!');
  t('Shows the individual Chronology entries that have been added to this Chronology. ');

  return $field_instances;
}
