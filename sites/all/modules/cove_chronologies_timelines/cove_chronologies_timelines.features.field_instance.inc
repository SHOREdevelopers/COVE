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

  // Exported field_instance: 'node-chronology-body'.
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

  // Exported field_instance: 'node-chronology-field_items_in_this_chronology'.
  $field_instances['node-chronology-field_items_in_this_chronology'] = array(
    'bundle' => 'chronology',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => 'Here, you can add already-existing events relevant to your Timeline. To do so, click the "Add items" button below. ',
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
            'og_context' => 0,
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
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'associated_event_autocomplete|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-chronology-field_resource_index'.
  $field_instances['node-chronology-field_resource_index'] = array(
    'bundle' => 'chronology',
    'default_value' => array(),
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
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'content_taxonomy_opt_groups' => FALSE,
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-chronology-group_content_access'.
  $field_instances['node-chronology-group_content_access'] = array(
    'bundle' => 'chronology',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'group_content_access',
    'label' => 'Group content visibility',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'list_default',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'list_default',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 42,
    ),
    'widget_type' => 'options_select',
  );

  // Exported field_instance: 'node-chronology-og_group_ref'.
  $field_instances['node-chronology-og_group_ref'] = array(
    'bundle' => 'chronology',
    'default_value' => array(),
    'default_value_function' => 'entityreference_prepopulate_field_default_value',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => 1,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'access_override' => 0,
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
        'prepopulate' => array(
          'action' => 'none',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 1,
            'url' => 1,
          ),
          'skip_perm' => 0,
          'status' => 1,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_assoc_places'.
  $field_instances['node-chronology_entry-field_assoc_places'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => array(),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'You can associated places in our database with an event. To do so, click the "Add items" button below. If a place does not already exist in the database, you can create one <a target="_blank" href="/node/add/place">here</a>. Once saved, your newly created event will be available in the list. ',
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
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_assoc_places',
    'label' => 'Associated Places',
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
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 1,
        'pass_arguments' => '',
        'rendered_entity' => 0,
        'view' => 'associated_place_autocomplete|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_event2'.
  $field_instances['node-chronology_entry-field_event2'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_event_date'.
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
        'weight' => 0,
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

  // Exported field_instance: 'node-chronology_entry-field_event_source'.
  $field_instances['node-chronology_entry-field_event_source'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Optionally, you may add a source for your chronology entry here. Just provide a label that identifies where the entry came from. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'field_event_source',
    'label' => 'Event Source',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_image'.
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
        'weight' => 5,
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
        'imce_filefield_on' => 1,
        'preview_image_style' => 'gallery_small',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_parent_chronology'.
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
        'weight' => 4,
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
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'action' => 'hide',
          'action_on_edit' => 0,
          'fallback' => 'none',
          'providers' => array(
            'og_context' => 0,
            'url' => 1,
          ),
          'skip_perm' => 'administer permissions',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-field_vetted_'.
  $field_instances['node-chronology_entry-field_vetted_'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'default_value_function' => '',
    'default_value_php' => '',
    'deleted' => 0,
    'description' => 'If marked as vetted, this chronology entry will be available for all users to add to their timelines or associate with places. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
    'field_name' => 'field_vetted_',
    'label' => 'Vetted?',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-chronology_entry-group_content_access'.
  $field_instances['node-chronology_entry-group_content_access'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'group_content_access',
    'label' => 'Group content visibility',
    'required' => TRUE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'label' => 'above',
        'type' => 'list_default',
      ),
      'teaser' => array(
        'label' => 'above',
        'type' => 'list_default',
      ),
    ),
    'widget' => array(
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 13,
    ),
    'widget_type' => 'options_select',
  );

  // Exported field_instance: 'node-chronology_entry-og_group_ref'.
  $field_instances['node-chronology_entry-og_group_ref'] = array(
    'bundle' => 'chronology_entry',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'og_ui',
        'settings' => array(),
        'type' => 'og_list_default',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'og_group_ref',
    'label' => 'Groups audience',
    'required' => FALSE,
    'settings' => array(
      'behaviors' => array(
        'og_widget' => array(
          'admin' => array(
            'widget_type' => 'entityreference_autocomplete',
          ),
          'default' => array(
            'widget_type' => 'options_select',
          ),
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'view modes' => array(
      'full' => array(
        'custom settings' => FALSE,
        'label' => 'Full',
        'type' => 'og_list_default',
      ),
      'teaser' => array(
        'custom settings' => FALSE,
        'label' => 'Teaser',
        'type' => 'og_list_default',
      ),
    ),
    'widget' => array(
      'module' => 'og',
      'settings' => array(),
      'type' => 'og_complex',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Associated Places');
  t('Description');
  t('Event Description');
  t('Event Source');
  t('Event date');
  t('Group content visibility');
  t('Groups audience');
  t('Here, you can add already-existing events relevant to your Timeline. To do so, click the "Add items" button below. ');
  t('Here, you can add an image that is in some way illustrative of an event; for example, a title page for a book publication, a portrait of a person involved in an event, or a depiction of a historical event. This is not required but highly encouraged. See below for basic size requirements, and keep in mind that the image will be resized to fit the timeline format. ');
  t('If marked as vetted, this chronology entry will be available for all users to add to their timelines or associate with places. ');
  t('If this chronology is part of a "resource," e.g. an edition, select a value here; otherwise, leave it blank. ');
  t('Image');
  t('Items in this chronology');
  t('Optionally, you may add a source for your chronology entry here. Just provide a label that identifies where the entry came from. ');
  t('Parent Chronology');
  t('Parent Resource');
  t('Provide a short description of your chronology');
  t('Select the parent chronology of which this entry is a part. This should happen automatically!');
  t('Vetted?');
  t('You can associated places in our database with an event. To do so, click the "Add items" button below. If a place does not already exist in the database, you can create one <a target="_blank" href="/node/add/place">here</a>. Once saved, your newly created event will be available in the list. ');

  return $field_instances;
}
