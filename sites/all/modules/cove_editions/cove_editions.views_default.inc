<?php
/**
 * @file
 * cove_editions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cove_editions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'documents_in_this_edition';
  $view->description = 'Shows a list of all docs within an edition on the resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents in this Edition';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Editorial Apparatus';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_nines_genre_s_' => 'field_nines_genre_s_',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: NINES Genre(s) */
  $handler->display->display_options['fields']['field_nines_genre_s_']['id'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['field'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = '';
  $handler->display->display_options['fields']['field_nines_genre_s_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nines_genre_s_']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:primary';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';
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
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    6 => '6',
    8 => '8',
    10 => '10',
    15 => '15',
    18 => '18',
    19 => '19',
    23 => '23',
    31 => '31',
    33 => '33',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';

  /* Display: PrimaryTexts */
  $handler = $view->new_display('panel_pane', 'PrimaryTexts', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Primary Texts';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';

  /* Display: Apparatus */
  $handler = $view->new_display('panel_pane', 'Apparatus', 'panel_pane_2');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    2 => '2',
    7 => '7',
    11 => '11',
    16 => '16',
    20 => '20',
    21 => '21',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';

  /* Display: Menu-Primary */
  $handler = $view->new_display('block', 'Menu-Primary', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Primary Texts';
  $handler->display->display_options['display_description'] = 'gets embedded onto internal pages as a menu';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';

  /* Display: Menu-Apparatus */
  $handler = $view->new_display('block', 'Menu-Apparatus', 'block_2');
  $handler->display->display_options['display_description'] = 'gets embedded onto internal pages as a menu';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    2 => '2',
    7 => '7',
    11 => '11',
    16 => '16',
    20 => '20',
    21 => '21',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $export['documents_in_this_edition'] = $view;

  $view = new view();
  $view->name = 'documents_in_this_edition_drag_';
  $view->description = 'Shows a list of all docs within an edition on the resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents in this Edition (Drag)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reorder Primary Texts on ToC';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'draggableviews' => 'draggableviews',
    'title' => 'title',
    'field_nines_genre_s_' => 'field_nines_genre_s_',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draggableviews' => array(
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
    'field_nines_genre_s_' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = 'Reorder ToC';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Save Reordering';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: NINES Genre(s) */
  $handler->display->display_options['fields']['field_nines_genre_s_']['id'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['field'] = 'field_nines_genre_s_';
  $handler->display->display_options['fields']['field_nines_genre_s_']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = '';
  $handler->display->display_options['fields']['field_nines_genre_s_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nines_genre_s_']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:primary';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'reverse_field_resource_index_node';
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
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    6 => '6',
    8 => '8',
    10 => '10',
    15 => '15',
    18 => '18',
    19 => '19',
    23 => '23',
    31 => '31',
    33 => '33',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';

  /* Display: PrimaryTexts */
  $handler = $view->new_display('page', 'PrimaryTexts', 'page_1');
  $handler->display->display_options['path'] = 'edition/%/reorder-primary-toc';

  /* Display: Apparatus */
  $handler = $view->new_display('page', 'Apparatus', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Reorder Apparatus on ToC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    2 => '2',
    7 => '7',
    11 => '11',
    16 => '16',
    20 => '20',
    21 => '21',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['reduce_duplicates'] = TRUE;
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  $handler->display->display_options['path'] = 'edition/%/reorder-apparatus-toc';
  $export['documents_in_this_edition_drag_'] = $view;

  $view = new view();
  $view->name = 'documents_in_this_edition_menu_';
  $view->description = 'A jump menu to serve as edition-level navigation';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Documents in this Edition (menu)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Navigation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Primary Texts';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'documents_in_this_edition';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = 'Editorial Apparatus';
  $handler->display->display_options['fields']['view_1']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'documents_in_this_edition';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_2';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_resource_index_node';
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
  $export['documents_in_this_edition_menu_'] = $view;

  return $export;
}
