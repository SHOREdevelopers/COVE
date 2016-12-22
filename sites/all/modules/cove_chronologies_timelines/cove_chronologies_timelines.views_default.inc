<?php
/**
 * @file
 * cove_chronologies_timelines.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cove_chronologies_timelines_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'add_items_to_this_chronology';
  $view->description = 'A link that will appear on a chronology if a person is the author of that chronology';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add items to this chronology';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Add items to this chronology';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['id'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['table'] = 'field_data_field_parent_chronology';
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['field'] = 'field_parent_chronology_target_id';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'field_parent_chronology_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $export['add_items_to_this_chronology'] = $view;

  $view = new view();
  $view->name = 'branch_timeline';
  $view->description = 'A custom timeline added to an edition or group';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'BRANCH timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'BRANCH Timeline at the COVE';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = 0;
  $handler->display->display_options['style_options']['timeline_config']['scale_factor'] = '6';
  $handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
  $handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
  $handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['end_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['timeline_fields']['text'] = 'field_event2';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  $handler->display->display_options['style_options']['timeline_fields']['unique_id'] = 'nid';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Below is a timeline representation of historical events originally collected at <a href="http://www.branchcollective.org/">BRANCH</a>. The original timeline can be found <a href="http://www.branchcollective.org/?page_id=68">here</a>.</p> ';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @total events';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_assoc_events_node']['id'] = 'reverse_field_assoc_events_node';
  $handler->display->display_options['relationships']['reverse_field_assoc_events_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_assoc_events_node']['field'] = 'reverse_field_assoc_events_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Display Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] <span class="dateDesc">[field_event_date_1-txt_short]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_geocode']['id'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['table'] = 'field_data_field_geocode';
  $handler->display->display_options['fields']['field_geocode']['field'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['relationship'] = 'reverse_field_assoc_events_node';
  $handler->display->display_options['fields']['field_geocode']['label'] = '';
  $handler->display->display_options['fields']['field_geocode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geocode']['type'] = 'openlayers_geofield';
  $handler->display->display_options['fields']['field_geocode']['settings'] = array(
    'map_layer_preset' => 'openlayers_geofield_map_geofield_formatter:openlayers_geofield_layer_formatter',
    'data' => 'full',
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event2]
[field_geocode]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'gallery_small',
    'image_link' => 'file',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Image Caption';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1-title]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology_entry' => 'chronology_entry',
  );
  /* Filter criterion: Content: Event Source (field_event_source) */
  $handler->display->display_options['filters']['field_event_source_tid']['id'] = 'field_event_source_tid';
  $handler->display->display_options['filters']['field_event_source_tid']['table'] = 'field_data_field_event_source';
  $handler->display->display_options['filters']['field_event_source_tid']['field'] = 'field_event_source_tid';
  $handler->display->display_options['filters']['field_event_source_tid']['value'] = array(
    0 => '156',
  );
  $handler->display->display_options['filters']['field_event_source_tid']['vocabulary'] = 'event_source';
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['operator'] = 'contains';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Search events';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    5 => 0,
    4 => 0,
    6 => 0,
    7 => 0,
    9 => 0,
    8 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'title' => 'title',
    'field_event2' => 'field_event2',
  );

  /* Display: Timeline */
  $handler = $view->new_display('page', 'Timeline', 'page');
  $handler->display->display_options['path'] = 'branch/timeline';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event2' => 'field_event2',
    'field_event_date' => 'field_event_date',
    'field_event_date_2' => 'field_event2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] <span class="dateDesc">[field_event_date_1-txt_short]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event_date_2]
[field_event2]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = 'Date Notes';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['alter']['text'] = '[field_event_date_2-txt_short]';
  $handler->display->display_options['fields']['field_event_date_2']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'circa. ',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date */
  $handler->display->display_options['sorts']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['path'] = 'edition/timeline/table';
  $export['branch_timeline'] = $view;

  $view = new view();
  $view->name = 'custom_timeline';
  $view->description = 'A custom timeline added to an edition or group';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Custom timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = TRUE;
  $handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
  $handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
  $handler->display->display_options['style_options']['timeline_fields']['caption'] = 'field_image_1';
  $handler->display->display_options['style_options']['timeline_fields']['media'] = 'field_image';
  $handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['end_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['timeline_fields']['text'] = 'field_event2';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  $handler->display->display_options['style_options']['timeline_fields']['unique_id'] = 'nid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['id'] = 'field_assoc_places_target_id';
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['table'] = 'field_data_field_assoc_places';
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['field'] = 'field_assoc_places_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Display Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] <span class="dateDesc">[field_event_date_1-txt_short]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event_date_2]
[field_event2]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'gallery_small',
    'image_link' => 'file',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Image Caption';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1-title]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Parent Chronology (field_parent_chronology) */
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['id'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['table'] = 'field_data_field_parent_chronology';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['field'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology_entry' => 'chronology_entry',
  );

  /* Display: Timeline pane */
  $handler = $view->new_display('panel_pane', 'Timeline pane', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'For use with Panels';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_geocode']['id'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['table'] = 'field_data_field_geocode';
  $handler->display->display_options['fields']['field_geocode']['field'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['relationship'] = 'field_assoc_places_target_id';
  $handler->display->display_options['fields']['field_geocode']['label'] = 'Associated Place';
  $handler->display->display_options['fields']['field_geocode']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geocode']['type'] = 'openlayers_geofield';
  $handler->display->display_options['fields']['field_geocode']['settings'] = array(
    'map_layer_preset' => 'openlayers_geofield_map_geofield_formatter:openlayers_geofield_layer_formatter',
    'data' => 'full',
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event2]
[field_geocode]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Display Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] <span class="dateDesc">[field_event_date_1-txt_short]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'gallery_small',
    'image_link' => 'file',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Image Caption';
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1-title]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';

  /* Display: Timeline */
  $handler = $view->new_display('page', 'Timeline', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'custom-timeline';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_event_date_1' => 'field_event_date_1',
    'field_event2' => 'field_event2',
    'field_event_date' => 'field_event_date',
    'field_event_date_2' => 'field_event2',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] <span class="dateDesc">[field_event_date_1-txt_short]</span>';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event_date_2]
[field_event2]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = 'Date Notes';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['alter']['text'] = '[field_event_date_2-txt_short]';
  $handler->display->display_options['fields']['field_event_date_2']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'circa. ',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date */
  $handler->display->display_options['sorts']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['path'] = 'edition/timeline/table';

  /* Display: Table pane */
  $handler = $view->new_display('panel_pane', 'Table pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Chronological table';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_event_date_1' => 'field_event_date_1',
    'field_event_date_2' => 'field_event2',
    'title' => 'field_event2',
    'field_image_1' => 'field_event2',
    'field_image' => 'field_event2',
    'field_event2' => 'field_event2',
    'field_event_date' => 'field_event_date',
    'nid' => 'nid',
    'edit_node' => 'edit_node',
    'delete_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_event_date_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => ' | ',
      'empty_column' => 1,
    ),
    'delete_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_1']['id'] = 'field_event_date_1';
  $handler->display->display_options['fields']['field_event_date_1']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_1']['label'] = 'Date';
  $handler->display->display_options['fields']['field_event_date_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_1']['alter']['text'] = '[field_event_date_1] ';
  $handler->display->display_options['fields']['field_event_date_1']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_1']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date_2']['id'] = 'field_event_date_2';
  $handler->display->display_options['fields']['field_event_date_2']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date_2']['label'] = 'Date Notes';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['alter']['text'] = '<p class="dateDesc">[field_event_date_2-txt_short]</p>
<!--<a class="tooltip" id="tooltip" href="#" title="[field_event_date_2-txt_short]">*</a>-->';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['path'] = 'something';
  $handler->display->display_options['fields']['field_event_date_2']['alter']['alt'] = '[field_event_date_2-txt_short]';
  $handler->display->display_options['fields']['field_event_date_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_event_date_2']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date_2']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y',
          'empty' => '',
          'weight' => '-7',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '-8',
        ),
        'day' => array(
          'format' => 'j',
          'empty' => '',
          'weight' => '-9',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '-6',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '-5',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '-4',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '-3',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '-2',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '-1',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '0',
        ),
        'approx' => array(
          'value' => 'circa. ',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image_1']['id'] = 'field_image_1';
  $handler->display->display_options['fields']['field_image_1']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image_1']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image_1']['label'] = 'Image Caption';
  $handler->display->display_options['fields']['field_image_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image_1']['alter']['text'] = '[field_image_1-title]';
  $handler->display->display_options['fields']['field_image_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '<div class="figure leftFloat">[field_image]<div class="caption">[field_image_1]</div></div>';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'colorbox_node_style' => 'front_thumbnail',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'none',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['label'] = 'Event';
  $handler->display->display_options['fields']['field_event2']['alter']['text'] = '[field_event_date_2]
[field_event2]';
  /* Field: Content: Event date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = 'Timestamp';
  $handler->display->display_options['fields']['field_event_date']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_date']['alter']['text'] = '[field_event_date-timestamp]';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'long',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'ce',
      'display' => array(
        'year' => 'estimate_label',
        'month' => 'estimate_label',
        'day' => 'estimate_label',
        'hour' => 'estimate_label',
        'minute' => 'estimate_label',
        'second' => 'estimate_label',
        'timezone' => 'date_only',
      ),
      'separator' => array(
        'date' => ' ',
        'time' => ':',
        'datetime' => ' ',
        'other' => ' ',
        'range' => '',
      ),
      'components' => array(
        'year' => array(
          'format' => 'Y-ce',
          'empty' => '',
          'weight' => '0',
        ),
        'month' => array(
          'format' => 'M',
          'empty' => '',
          'weight' => '1',
        ),
        'day' => array(
          'format' => 'j-S',
          'empty' => '',
          'weight' => '2',
        ),
        'hour' => array(
          'format' => 'h',
          'empty' => '',
          'weight' => '3',
        ),
        'minute' => array(
          'format' => 'i',
          'empty' => '',
          'weight' => '4',
        ),
        'second' => array(
          'format' => 's',
          'empty' => '',
          'weight' => '5',
        ),
        'timezone' => array(
          'format' => 'T',
          'empty' => '',
          'weight' => '6',
        ),
        'c1' => array(
          'value' => '',
          'weight' => '7',
        ),
        'c2' => array(
          'value' => '',
          'weight' => '8',
        ),
        'c3' => array(
          'value' => '',
          'weight' => '9',
        ),
        'approx' => array(
          'value' => '',
          'weight' => '-1',
        ),
      ),
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Manage';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = '';
  $handler->display->display_options['fields']['delete_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_node']['text'] = 'delete';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Event date */
  $handler->display->display_options['sorts']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['sorts']['field_event_date']['field'] = 'field_event_date';

  /* Display: Timeline pane small */
  $handler = $view->new_display('panel_pane', 'Timeline pane small', 'panel_pane_3');
  $handler->display->display_options['display_description'] = 'Smaller one for use in other Views, such as the Course Dashboard';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_config']['height'] = '30em';
  $handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = TRUE;
  $handler->display->display_options['style_options']['timeline_config']['start_at_end'] = 0;
  $handler->display->display_options['style_options']['additional_config']['start_at_current'] = 0;
  $handler->display->display_options['style_options']['timeline_fields']['caption'] = 'field_image_1';
  $handler->display->display_options['style_options']['timeline_fields']['media'] = 'field_image';
  $handler->display->display_options['style_options']['timeline_fields']['start_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['end_date'] = 'field_event_date';
  $handler->display->display_options['style_options']['timeline_fields']['display_date'] = 'field_event_date_1';
  $handler->display->display_options['style_options']['timeline_fields']['text'] = 'field_event2';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  $handler->display->display_options['style_options']['timeline_fields']['unique_id'] = 'nid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['custom_timeline'] = $view;

  $view = new view();
  $view->name = 'map_per_event';
  $view->description = 'Map that will show all places associated with an event';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Map per Event';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Associated Place(s)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['id'] = 'field_assoc_places_target_id';
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['table'] = 'field_data_field_assoc_places';
  $handler->display->display_options['relationships']['field_assoc_places_target_id']['field'] = 'field_assoc_places_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_assoc_places_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Geocode */
  $handler->display->display_options['fields']['field_geocode']['id'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['table'] = 'field_data_field_geocode';
  $handler->display->display_options['fields']['field_geocode']['field'] = 'field_geocode';
  $handler->display->display_options['fields']['field_geocode']['relationship'] = 'field_assoc_places_target_id';
  $handler->display->display_options['fields']['field_geocode']['label'] = '';
  $handler->display->display_options['fields']['field_geocode']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geocode']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geocode']['type'] = 'openlayers_geofield';
  $handler->display->display_options['fields']['field_geocode']['settings'] = array(
    'map_layer_preset' => 'openlayers_geofield_map_geofield_formatter:openlayers_geofield_layer_formatter',
    'data' => 'full',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology_entry' => 'chronology_entry',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Associated Places */
  $handler->display->display_options['fields']['field_assoc_places']['id'] = 'field_assoc_places';
  $handler->display->display_options['fields']['field_assoc_places']['table'] = 'field_data_field_assoc_places';
  $handler->display->display_options['fields']['field_assoc_places']['field'] = 'field_assoc_places';
  $handler->display->display_options['fields']['field_assoc_places']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_assoc_places']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_assoc_places']['multi_type'] = 'ol';
  $export['map_per_event'] = $view;

  $view = new view();
  $view->name = 'my_chronologies';
  $view->description = 'Shows Chronologies built by users';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Chronologies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Your Chronologies';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    10 => '10',
    4 => '4',
    5 => '5',
    6 => '6',
    7 => '7',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = 'Remember, you can create additional chronologies <a href="/node/add/chronology">here</a>.';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'You haven\'t created any chronologies yet. To create one, go <a href="/node/add/chronology">here</a>. ';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology' => 'chronology',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/your-chronologies';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Your Chronologies';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['my_chronologies'] = $view;

  $view = new view();
  $view->name = 'timeline_manager';
  $view->description = 'Allows management of timeline, including adding existing events to a timeline';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timeline Manager';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline Manager';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_event2' => 'title',
    'field_parent_chronology' => 'field_parent_chronology',
    'uid' => 'uid',
    'ops' => 'ops',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_parent_chronology' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'uid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'ops' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Here, you can select existing chronological events for addition to a timeline. Check the boxes next to events you\'d like to add, then click the "Add to my Timeline" button. From there, you will be taken to another screen allowing you to select the timeline, in case you\'ve created more than one, to which to add these events.</p>';
  /* Relationship: Flags: add_to_timeline */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['required'] = 0;
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'add_to_timeline';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['id'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['table'] = 'field_data_field_parent_chronology';
  $handler->display->display_options['relationships']['field_parent_chronology_target_id']['field'] = 'field_parent_chronology_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Add to Timeline',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'chronology_entry::field_parent_chronology' => 'chronology_entry::field_parent_chronology',
        ),
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title and Description';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Event Description */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['alter']['max_length'] = '300';
  /* Field: Content: Parent Chronology */
  $handler->display->display_options['fields']['field_parent_chronology']['id'] = 'field_parent_chronology';
  $handler->display->display_options['fields']['field_parent_chronology']['table'] = 'field_data_field_parent_chronology';
  $handler->display->display_options['fields']['field_parent_chronology']['field'] = 'field_parent_chronology';
  $handler->display->display_options['fields']['field_parent_chronology']['label'] = 'Current Chronology';
  $handler->display->display_options['fields']['field_parent_chronology']['empty'] = 'None';
  $handler->display->display_options['fields']['field_parent_chronology']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_parent_chronology']['delta_offset'] = '0';
  /* Field: Flags: User uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'flagging';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['exclude'] = TRUE;
  /* Field: Content: Event Source */
  $handler->display->display_options['fields']['field_event_source']['id'] = 'field_event_source';
  $handler->display->display_options['fields']['field_event_source']['table'] = 'field_data_field_event_source';
  $handler->display->display_options['fields']['field_event_source']['field'] = 'field_event_source';
  $handler->display->display_options['fields']['field_event_source']['label'] = 'Source';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Parent Chronology (field_parent_chronology) */
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['id'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['table'] = 'field_data_field_parent_chronology';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['field'] = 'field_parent_chronology_target_id';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['title'] = 'Add existing entries to chronology';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_parent_chronology_target_id']['not'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology_entry' => 'chronology_entry',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'chronology/%/manager';
  $export['timeline_manager'] = $view;

  return $export;
}
