<?php
/**
 * @file
 * cove_editions.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function cove_editions_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-editions_index_page-body'.
  $field_instances['node-editions_index_page-body'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This text area should only be used for a brief description or abstract of the edition. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 300,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Edition Description',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_annotator'.
  $field_instances['node-editions_index_page-field_annotator'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Use the autocomplete form to add annotators to this resource',
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
    'field_name' => 'field_annotator',
    'label' => 'Annotator(s)',
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
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_banner_image'.
  $field_instances['node-editions_index_page-field_banner_image'] = array(
    'bundle' => 'editions_index_page',
    'deleted' => 0,
    'description' => 'Banner for interior pages of this resource, for branding purposes',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner_image',
    'label' => 'Interior Banner',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'image_field_caption' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_documents_in_this_edition'.
  $field_instances['node-editions_index_page-field_documents_in_this_edition'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(),
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_documents_in_this_edition',
    'label' => 'Documents in this Edition',
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
        'view' => 'add_documents_to_this_edition2|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_edited_by'.
  $field_instances['node-editions_index_page-field_edited_by'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the autocomplete form to add editors to this resource',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_edited_by',
    'label' => 'Editor(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_edition_state'.
  $field_instances['node-editions_index_page-field_edition_state'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(
      0 => array(
        'tid' => 223,
      ),
    ),
    'deleted' => 0,
    'description' => 'The current state of the edition. Each edition can be elevated from prototype to peer-reviewed as these milestones are reached. ',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_edition_state',
    'label' => 'Edition state',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_editor_in_chief'.
  $field_instances['node-editions_index_page-field_editor_in_chief'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'If your edition has a lead editor or editors, you can add them here using the autocomplete functionality. Leave blank if this doesn\'t apply.',
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
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_editor_in_chief',
    'label' => 'Editor-In-Chief',
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
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_icon'.
  $field_instances['node-editions_index_page-field_icon'] = array(
    'bundle' => 'editions_index_page',
    'deleted' => 0,
    'description' => 'Add a small <strong>100px x 100px</strong> icon here. It is used as a thumbnail on landing pages.',
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
    'field_name' => 'field_icon',
    'label' => 'Icon',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'icons',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '100x100',
      'min_resolution' => '100x100',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_index_banner'.
  $field_instances['node-editions_index_page-field_index_banner'] = array(
    'bundle' => 'editions_index_page',
    'deleted' => 0,
    'description' => 'The Banner, <strong>1200px x 600px</strong>, that appears on the Table of Contents Page, i.e. here.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'index_banner',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_index_banner',
    'label' => 'Index Banner',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '1200x600',
      'min_resolution' => '1200x600',
      'title_field' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_main_author'.
  $field_instances['node-editions_index_page-field_main_author'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_main_author',
    'label' => 'Author',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_maps_in_this_edition'.
  $field_instances['node-editions_index_page-field_maps_in_this_edition'] = array(
    'bundle' => 'editions_index_page',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 18,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_maps_in_this_edition',
    'label' => 'Maps in this Edition',
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
        'view' => 'add_maps_to_this_edition|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_nines_discipline_s_'.
  $field_instances['node-editions_index_page-field_nines_discipline_s_'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Applicable NINES disciplines for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_discipline_s_',
    'label' => 'NINES Discipline(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_nines_genre_s_'.
  $field_instances['node-editions_index_page-field_nines_genre_s_'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Applicable NINES genres for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_genre_s_',
    'label' => 'NINES Genre(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_nines_type_s_'.
  $field_instances['node-editions_index_page-field_nines_type_s_'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Applicable NINES types for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_type_s_',
    'label' => 'NINES Type(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_buttons',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_original_publication_date'.
  $field_instances['node-editions_index_page-field_original_publication_date'] = array(
    'bundle' => 'editions_index_page',
    'deleted' => 0,
    'description' => 'Enter the date or dates a resource was originally published. Please include ONLY the year or a range of years. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'search_result' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_original_publication_date',
    'label' => 'Original publication date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_parent_section'.
  $field_instances['node-editions_index_page-field_parent_section'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => array(
      0 => array(
        'target_id' => 31535,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
      'search_result' => array(
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
    'field_name' => 'field_parent_section',
    'label' => 'Parent Section',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_partial_publication_date'.
  $field_instances['node-editions_index_page-field_partial_publication_date'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is a special date handler that can contain "fuzzy" dates and with varying granularities, i.e. when the exact date of a publication is unknown or when a date can only be narrowed down to a year. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 4,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_partial_publication_date',
    'label' => 'Original publication/creation date - FUZZY',
    'required' => 0,
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
            'year' => 'year',
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
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 0,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 1,
          'range_inline' => 0,
          'txt_long' => 1,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_postgraduate_researcher'.
  $field_instances['node-editions_index_page-field_postgraduate_researcher'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use the autocomplete form to add any postgraduate researchers to this resource',
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
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_postgraduate_researcher',
    'label' => 'Postgraduate Researcher',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-field_published'.
  $field_instances['node-editions_index_page-field_published'] = array(
    'bundle' => 'editions_index_page',
    'deleted' => 0,
    'description' => 'Enter the date this page is to be published (i.e. not created) on the site, specifying only Month and Year.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_published',
    'label' => 'Date published',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'j M Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 2,
    ),
    'widget_type' => 'date_text',
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_resource_technical_editor'.
  $field_instances['node-editions_index_page-field_resource_technical_editor'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your name here, or else the historical technical editor of record',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'inline',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'inline',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_resource_technical_editor',
    'label' => 'Resource Technical Editor',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-field_timelines_in_this_edition'.
  $field_instances['node-editions_index_page-field_timelines_in_this_edition'] = array(
    'bundle' => 'editions_index_page',
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 17,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_timelines_in_this_edition',
    'label' => 'Timelines in this Edition',
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
        'view' => 'add_timelines_to_this_edition|entityreference_view_widget_1',
        'view_mode' => 'full',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-opencalais_city_tags'.
  $field_instances['node-editions_index_page-opencalais_city_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_city_tags',
    'label' => 'City',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'city',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'City',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-opencalais_continent_tags'.
  $field_instances['node-editions_index_page-opencalais_continent_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 18,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'opencalais_continent_tags',
    'label' => 'Continent',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'continent',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'Continent',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-opencalais_country_tags'.
  $field_instances['node-editions_index_page-opencalais_country_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 16,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'opencalais_country_tags',
    'label' => 'Country',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'country',
      'threshold' => 0.16,
      'user_register_form' => FALSE,
    ),
    'title' => 'Country',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-opencalais_naturalfeature_tags'.
  $field_instances['node-editions_index_page-opencalais_naturalfeature_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 19,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_naturalfeature_tags',
    'label' => 'NaturalFeature',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'natural_feature',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'NaturalFeature',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-opencalais_organization_tags'.
  $field_instances['node-editions_index_page-opencalais_organization_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_organization_tags',
    'label' => 'Organization',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'organization',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'Organization',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-opencalais_person_tags'.
  $field_instances['node-editions_index_page-opencalais_person_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 14,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_person_tags',
    'label' => 'Person',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'person',
      'threshold' => 0.3,
      'user_register_form' => FALSE,
    ),
    'title' => 'Person',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'node-editions_index_page-opencalais_provinceorstate_tags'.
  $field_instances['node-editions_index_page-opencalais_provinceorstate_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 15,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_provinceorstate_tags',
    'label' => 'ProvinceOrState',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'province_or_state',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'ProvinceOrState',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-opencalais_region_tags'.
  $field_instances['node-editions_index_page-opencalais_region_tags'] = array(
    'bundle' => 'editions_index_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 17,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'opencalais_region_tags',
    'label' => 'Region',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'region',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'Region',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'node-editions_index_page-taxonomy_vocabulary_3'.
  $field_instances['node-editions_index_page-taxonomy_vocabulary_3'] = array(
    'bundle' => 'editions_index_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a comma separated list of words',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 13,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-editions_page-body'.
  $field_instances['node-editions_page-body'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'For Editions. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.',
    'display' => array(
      'colorbox' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'rc_search_results' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_trimmed',
        'weight' => 1,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'trim_length' => 1000,
        'type' => 'text_summary_or_trimmed',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_authored_by_primary_'.
  $field_instances['node-editions_page-field_authored_by_primary_'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
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
    'field_name' => 'field_authored_by_primary_',
    'label' => 'Authored by (Primary)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_authored_by_secondary_'.
  $field_instances['node-editions_page-field_authored_by_secondary_'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 6,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
        ),
        'type' => 'entityreference_label',
        'weight' => 4,
      ),
      'search_result' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'colorbox_node_classes' => '',
          'colorbox_node_height' => 600,
          'colorbox_node_link' => FALSE,
          'colorbox_node_width' => 600,
          'link' => TRUE,
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
    'field_name' => 'field_authored_by_secondary_',
    'label' => 'Authored by (Secondary)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_cove_studio_uri'.
  $field_instances['node-editions_page-field_cove_studio_uri'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The URI of the analagous document at COVE Studio',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 28,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_cove_studio_uri',
    'label' => 'COVE Studio URI',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => 'nofollow',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => 'View Document in COVE Studio',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_doc_owner'.
  $field_instances['node-editions_page-field_doc_owner'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'Hidden field. All posts from COVE Studio are coming from admin, but POST requests are also sending along the UID of the user who should own the document. That is being stored here for processing via Rules. ',
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
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_doc_owner',
    'label' => 'Doc Owner',
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
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_nines_discipline_s_'.
  $field_instances['node-editions_page-field_nines_discipline_s_'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Applicable NINES disciplines for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 25,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_discipline_s_',
    'label' => 'NINES Discipline(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_nines_genre_s_'.
  $field_instances['node-editions_page-field_nines_genre_s_'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Applicable NINES genres for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_genre_s_',
    'label' => 'NINES Genre(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_nines_type_s_'.
  $field_instances['node-editions_page-field_nines_type_s_'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Applicable NINES types for RDF output. Multiple values may be selected.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_nines_type_s_',
    'label' => 'NINES Type(s)',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-field_original_publication_date'.
  $field_instances['node-editions_page-field_original_publication_date'] = array(
    'bundle' => 'editions_page',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 6,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_original_publication_date',
    'label' => 'Original publication date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-field_partial_publication_date'.
  $field_instances['node-editions_page-field_partial_publication_date'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 2,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'partial_date',
        'settings' => array(
          'component_settings' => array(),
          'format' => 'medium',
          'use_override' => 'none',
        ),
        'type' => 'partial_date_default',
        'weight' => 7,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
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
    'field_name' => 'field_partial_publication_date',
    'label' => 'Original publication/creation date',
    'required' => 0,
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
            'year' => 'year',
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
        ),
        'help_txt' => array(
          'und' => array(
            '_remove' => '',
            'check_approximate' => '',
            'components' => '',
            'txt_long' => 'Longer description of date',
            'txt_short' => 'Short description of date',
          ),
        ),
        'hide_remove' => 0,
        'increments' => array(
          'minute' => 1,
          'second' => 1,
        ),
        'theme_overrides' => array(
          'check_approximate' => 1,
          'range_inline' => 0,
          'txt_long' => 1,
          'txt_short' => 0,
        ),
        'tz_handling' => 'none',
      ),
      'type' => 'partial_date',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-field_people_addressed_on_this_p'.
  $field_instances['node-editions_page-field_people_addressed_on_this_p'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'This field is import-driven, and shouldn\'t have any hand-entered tags.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_people_addressed_on_this_p',
    'label' => 'People addressed on this page (tag)',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-field_people_mentioned_on_this_p'.
  $field_instances['node-editions_page-field_people_mentioned_on_this_p'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'This field id import-driven, and shouldn\'t have any hand-entered tags.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_people_mentioned_on_this_p',
    'label' => 'People mentioned on this page (tag)',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-field_places_mentioned_in_this_l'.
  $field_instances['node-editions_page-field_places_mentioned_in_this_l'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => 'This is an auto-populated field for importing letters, you shouldn\'t enter values here manually',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_places_mentioned_in_this_l',
    'label' => 'Places mentioned on this page (tag)',
    'required' => 0,
    'settings' => array(
      'behaviors' => array(
        'prepopulate' => array(
          'status' => 0,
        ),
        'taxonomy-index' => array(
          'status' => TRUE,
        ),
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete_tags',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_published'.
  $field_instances['node-editions_page-field_published'] = array(
    'bundle' => 'editions_page',
    'deleted' => 0,
    'description' => 'Enter the date this page is to be published (i.e. not created), specifying only Month and Year.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'month_year',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'rc_search_results' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'rc_published_date',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
      'rss' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'search_index' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'search_result' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
      'token' => array(
        'label' => 'hidden',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => -2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_published',
    'label' => 'Date published',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 1,
        'input_format' => 'custom',
        'input_format_custom' => 'M Y',
        'label_position' => 'none',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 3,
    ),
    'widget_type' => 'date_text',
  );

  // Exported field_instance: 'node-editions_page-field_resource_index'.
  $field_instances['node-editions_page-field_resource_index'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'default_value_function' => '',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
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
        'weight' => 3,
      ),
      'rc_search_results' => array(
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
        'weight' => 3,
      ),
      'search_index' => array(
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
        'weight' => 3,
      ),
      'search_result' => array(
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
        'content_taxonomy_opt_groups' => FALSE,
      ),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_unique_target'.
  $field_instances['node-editions_page-field_unique_target'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'This is a unique target, with the <idno type="edition"> element from the TEI. This allows us to use multiple feeds importers to target the same node. ',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_unique_target',
    'label' => 'Unique Target',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-editions_page-field_xml_tei'.
  $field_instances['node-editions_page-field_xml_tei'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'A link to the XML:TEI file on the server.',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_xml_tei',
    'label' => 'XML:TEI',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => 'teiButton',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 0,
      'rel_remove' => 'default',
      'title' => 'value',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 255,
      'title_value' => 'XML : TEI',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-editions_page-opencalais_city_tags'.
  $field_instances['node-editions_page-opencalais_city_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'opencalais_city_tags',
    'label' => 'City',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'city',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'City',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'node-editions_page-opencalais_continent_tags'.
  $field_instances['node-editions_page-opencalais_continent_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'opencalais_continent_tags',
    'label' => 'Continent',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'continent',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'Continent',
    'widget' => array(
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

  // Exported field_instance: 'node-editions_page-opencalais_country_tags'.
  $field_instances['node-editions_page-opencalais_country_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'opencalais_country_tags',
    'label' => 'Country',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'country',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'Country',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-opencalais_naturalfeature_tags'.
  $field_instances['node-editions_page-opencalais_naturalfeature_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'opencalais_naturalfeature_tags',
    'label' => 'NaturalFeature',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'natural_feature',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'NaturalFeature',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'node-editions_page-opencalais_organization_tags'.
  $field_instances['node-editions_page-opencalais_organization_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_organization_tags',
    'label' => 'Organization',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'organization',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'Organization',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'node-editions_page-opencalais_person_tags'.
  $field_instances['node-editions_page-opencalais_person_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
    'field_name' => 'opencalais_person_tags',
    'label' => 'Person',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'person',
      'threshold' => 0.3,
      'user_register_form' => FALSE,
    ),
    'title' => 'Person',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'node-editions_page-opencalais_provinceorstate_tags'.
  $field_instances['node-editions_page-opencalais_provinceorstate_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_provinceorstate_tags',
    'label' => 'ProvinceOrState',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'province_or_state',
      'threshold' => 0.15,
      'user_register_form' => FALSE,
    ),
    'title' => 'ProvinceOrState',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'node-editions_page-opencalais_region_tags'.
  $field_instances['node-editions_page-opencalais_region_tags'] = array(
    'bundle' => 'editions_page',
    'default_formatter' => 'taxonomy_term_reference_link',
    'default_value' => NULL,
    'default_widget' => 'options_select',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'opencalais_region_tags',
    'label' => 'Region',
    'required' => FALSE,
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => '',
          'parent' => 0,
        ),
      ),
      'opencalais' => 'region',
      'threshold' => 0.25,
      'user_register_form' => FALSE,
    ),
    'title' => 'Region',
    'widget' => array(
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'node-editions_page-taxonomy_vocabulary_3'.
  $field_instances['node-editions_page-taxonomy_vocabulary_3'] = array(
    'bundle' => 'editions_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter a comma separated list of words',
    'display' => array(
      'colorbox' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 5,
      ),
      'rc_search_results' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
      'search_index' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
      'search_result' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'taxonomy_vocabulary_3',
    'label' => 'Tags',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'taxonomy_term-city-containedbycounty'.
  $field_instances['taxonomy_term-city-containedbycounty'] = array(
    'bundle' => 'city',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about City.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbycounty',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByCounty',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByCounty',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-city-containedbystate'.
  $field_instances['taxonomy_term-city-containedbystate'] = array(
    'bundle' => 'city',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about City.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbystate',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByState',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByState',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-city-latitude'.
  $field_instances['taxonomy_term-city-latitude'] = array(
    'bundle' => 'city',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about City.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'latitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Latitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Latitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-city-longitude'.
  $field_instances['taxonomy_term-city-longitude'] = array(
    'bundle' => 'city',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about City.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'longitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Longitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Longitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-country-containedbycounty'.
  $field_instances['taxonomy_term-country-containedbycounty'] = array(
    'bundle' => 'country',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Country.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbycounty',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByCounty',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByCounty',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'taxonomy_term-country-containedbystate'.
  $field_instances['taxonomy_term-country-containedbystate'] = array(
    'bundle' => 'country',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Country.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbystate',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByState',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByState',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-country-latitude'.
  $field_instances['taxonomy_term-country-latitude'] = array(
    'bundle' => 'country',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Country.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'latitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Latitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Latitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-country-longitude'.
  $field_instances['taxonomy_term-country-longitude'] = array(
    'bundle' => 'country',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Country.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'longitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Longitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Longitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-nines_discipline-synonyms_synonyms'.
  $field_instances['taxonomy_term-nines_discipline-synonyms_synonyms'] = array(
    'bundle' => 'nines_discipline',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please, enter the synonyms which should be related to this term.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'synonyms_synonyms',
    'label' => 'Synonyms',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'taxonomy_term-nines_genre-synonyms_synonyms'.
  $field_instances['taxonomy_term-nines_genre-synonyms_synonyms'] = array(
    'bundle' => 'nines_genre',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please, enter the synonyms which should be related to this term.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'synonyms_synonyms',
    'label' => 'Synonyms',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'taxonomy_term-person-field_related_person'.
  $field_instances['taxonomy_term-person-field_related_person'] = array(
    'bundle' => 'person',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_related_person',
    'label' => 'Related Person',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'entityreference',
      'settings' => array(
        'content_taxonomy_autocomplete_new_terms' => 'allow',
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-province_or_state-containedbycounty'.
  $field_instances['taxonomy_term-province_or_state-containedbycounty'] = array(
    'bundle' => 'province_or_state',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Province Or State.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbycounty',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByCounty',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByCounty',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-province_or_state-containedbystate'.
  $field_instances['taxonomy_term-province_or_state-containedbystate'] = array(
    'bundle' => 'province_or_state',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Province Or State.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'containedbystate',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: ContainedByState',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'ContainedByState',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'taxonomy_term-province_or_state-latitude'.
  $field_instances['taxonomy_term-province_or_state-latitude'] = array(
    'bundle' => 'province_or_state',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Province Or State.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'latitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Latitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Latitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'taxonomy_term-province_or_state-longitude'.
  $field_instances['taxonomy_term-province_or_state-longitude'] = array(
    'bundle' => 'province_or_state',
    'default_formatter' => 'text_default',
    'default_value' => NULL,
    'default_widget' => 'text_textfield',
    'deleted' => 0,
    'description' => 'Tags sourced from OpenCalais about Province Or State.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'longitude',
    'instance_settings' => array(
      'text_processing' => 0,
    ),
    'label' => 'OpenCalais Metadata: Longitude',
    'required' => FALSE,
    'settings' => array(
      'max_length' => 255,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'title' => 'Longitude',
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'taxonomy_term-vocabulary_3-synonyms_synonyms'.
  $field_instances['taxonomy_term-vocabulary_3-synonyms_synonyms'] = array(
    'bundle' => 'vocabulary_3',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please, enter the synonyms which should be related to this term.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'synonyms_synonyms',
    'label' => 'Synonyms',
    'required' => FALSE,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('A link to the XML:TEI file on the server.');
  t('Add a small <strong>100px x 100px</strong> icon here. It is used as a thumbnail on landing pages.');
  t('Annotator(s)');
  t('Applicable NINES disciplines for RDF output. Multiple values may be selected.');
  t('Applicable NINES genres for RDF output. Multiple values may be selected.');
  t('Applicable NINES types for RDF output. Multiple values may be selected.');
  t('Author');
  t('Authored by (Primary)');
  t('Authored by (Secondary)');
  t('Banner for interior pages of this resource, for branding purposes');
  t('Body');
  t('COVE Studio URI');
  t('City');
  t('Continent');
  t('Country');
  t('Date published');
  t('Doc Owner');
  t('Documents in this Edition');
  t('Edition Description');
  t('Edition state');
  t('Editor(s)');
  t('Editor-In-Chief');
  t('Enter a comma separated list of words');
  t('Enter the date or dates a resource was originally published. Please include ONLY the year or a range of years. ');
  t('Enter the date this page is to be published (i.e. not created) on the site, specifying only Month and Year.');
  t('Enter the date this page is to be published (i.e. not created), specifying only Month and Year.');
  t('For Editions. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.');
  t('Hidden field. All posts from COVE Studio are coming from admin, but POST requests are also sending along the UID of the user who should own the document. That is being stored here for processing via Rules. ');
  t('Icon');
  t('If your edition has a lead editor or editors, you can add them here using the autocomplete functionality. Leave blank if this doesn\'t apply.');
  t('Index Banner');
  t('Interior Banner');
  t('Maps in this Edition');
  t('NINES Discipline(s)');
  t('NINES Genre(s)');
  t('NINES Type(s)');
  t('NaturalFeature');
  t('OpenCalais Metadata: ContainedByCounty');
  t('OpenCalais Metadata: ContainedByState');
  t('OpenCalais Metadata: Latitude');
  t('OpenCalais Metadata: Longitude');
  t('Organization');
  t('Original publication date');
  t('Original publication/creation date');
  t('Original publication/creation date - FUZZY');
  t('Parent Resource');
  t('Parent Section');
  t('People addressed on this page (tag)');
  t('People mentioned on this page (tag)');
  t('Person');
  t('Places mentioned on this page (tag)');
  t('Please, enter the synonyms which should be related to this term.');
  t('Postgraduate Researcher');
  t('ProvinceOrState');
  t('Region');
  t('Related Person');
  t('Resource Technical Editor');
  t('Synonyms');
  t('Tags');
  t('Tags sourced from OpenCalais about City.');
  t('Tags sourced from OpenCalais about Country.');
  t('Tags sourced from OpenCalais about Province Or State.');
  t('The Banner, <strong>1200px x 600px</strong>, that appears on the Table of Contents Page, i.e. here.');
  t('The URI of the analagous document at COVE Studio');
  t('The current state of the edition. Each edition can be elevated from prototype to peer-reviewed as these milestones are reached. ');
  t('This field id import-driven, and shouldn\'t have any hand-entered tags.');
  t('This field is import-driven, and shouldn\'t have any hand-entered tags.');
  t('This is a special date handler that can contain "fuzzy" dates and with varying granularities, i.e. when the exact date of a publication is unknown or when a date can only be narrowed down to a year. ');
  t('This is a unique target, with the <idno type="edition"> element from the TEI. This allows us to use multiple feeds importers to target the same node. ');
  t('This is an auto-populated field for importing letters, you shouldn\'t enter values here manually');
  t('This text area should only be used for a brief description or abstract of the edition. ');
  t('Timelines in this Edition');
  t('Unique Target');
  t('Use the autocomplete form to add annotators to this resource');
  t('Use the autocomplete form to add any postgraduate researchers to this resource');
  t('Use the autocomplete form to add editors to this resource');
  t('XML:TEI');
  t('Your name here, or else the historical technical editor of record');

  return $field_instances;
}
