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
  $view->name = 'add_documents_to_this_edition2';
  $view->description = 'Uses Entity Reference View Widget to add references to docs from a Editions Resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add documents to this edition';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
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
    'editions_page' => 'editions_page',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'body' => array(
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
  $export['add_documents_to_this_edition2'] = $view;

  $view = new view();
  $view->name = 'add_maps_to_this_edition';
  $view->description = 'Uses Entity Reference View Widget to add references to docs from a Editions Resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add maps to this edition';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
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
    'map' => 'map',
  );

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'body' => array(
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
  $export['add_maps_to_this_edition'] = $view;

  $view = new view();
  $view->name = 'add_timelines_to_this_edition';
  $view->description = 'Uses Entity Reference View Widget to add references to docs from a Editions Resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add timelines to this edition';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Entity Reference View Widget Checkbox: Content */
  $handler->display->display_options['fields']['entityreference_view_widget']['id'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['table'] = 'node';
  $handler->display->display_options['fields']['entityreference_view_widget']['field'] = 'entityreference_view_widget';
  $handler->display->display_options['fields']['entityreference_view_widget']['label'] = '';
  $handler->display->display_options['fields']['entityreference_view_widget']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityreference_view_widget']['ervw']['force_single'] = 0;
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

  /* Display: Entity Reference View Widget */
  $handler = $view->new_display('entityreference_view_widget', 'Entity Reference View Widget', 'entityreference_view_widget_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'entityreference_view_widget' => 'entityreference_view_widget',
    'title' => 'title',
    'body' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityreference_view_widget' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br/>',
      'empty_column' => 0,
    ),
    'body' => array(
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
  $export['add_timelines_to_this_edition'] = $view;

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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_nines_genre_s_' => 'field_nines_genre_s_',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<div class="rightFloat">[edit_node] </div>';
  $handler->display->display_options['header']['area_text_custom']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['id'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['table'] = 'field_data_field_documents_in_this_edition';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['field'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['fields']['field_nines_genre_s_']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = '';
  $handler->display->display_options['fields']['field_nines_genre_s_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nines_genre_s_']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a class="colorbox-node" href="/edition/!1/reorder-primary-toc?destination=node/!1">Reorder list</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit metadata';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';

  /* Display: Apparatus */
  $handler = $view->new_display('panel_pane', 'Apparatus', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['fields']['field_nines_genre_s_']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = '';
  $handler->display->display_options['fields']['field_nines_genre_s_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nines_genre_s_']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<a class="colorbox-node" href="/edition/!1/reorder-apparatus-toc?destination=node/!1">Reorder list</a>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit metadata';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['id'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['table'] = 'field_data_field_documents_in_this_edition';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['field'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
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

  /* Display: Menu-Apparatus */
  $handler = $view->new_display('block', 'Menu-Apparatus', 'block_2');
  $handler->display->display_options['display_description'] = 'gets embedded onto internal pages as a menu';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['id'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['table'] = 'field_data_field_documents_in_this_edition';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['field'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_2';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    2 => '2',
    7 => '7',
    11 => '11',
    16 => '16',
    20 => '20',
    21 => '21',
    24 => '24',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';

  /* Display: Uncat documents */
  $handler = $view->new_display('panel_pane', 'Uncat documents', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Uncategorized Documents';
  $handler->display->display_options['display_description'] = 'This shows all documents when the NINES Genres aren\'t filled as a reminder that they need to be. ';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p><em>The list below shows all documents you\'ve added to your edition but have not yet categorized. To do provide necessary additional metadata, click the edit links below.</em></p>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = '';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_page' => 'editions_page',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'none',
      'context' => 'entity:comment.author',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
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
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['id'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['table'] = 'field_data_field_documents_in_this_edition';
  $handler->display->display_options['relationships']['field_documents_in_this_edition_target_id']['field'] = 'field_documents_in_this_edition_target_id';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['fields']['draggableviews']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['fields']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['fields']['field_nines_genre_s_']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['fields']['field_nines_genre_s_']['label'] = '';
  $handler->display->display_options['fields']['field_nines_genre_s_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nines_genre_s_']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_nines_genre_s_']['delta_offset'] = '0';
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'documents_in_this_edition_drag_:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_documents_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['relationship'] = 'field_documents_in_this_edition_target_id';
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
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
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
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Primary Texts';
  $handler->display->display_options['fields']['view']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['view_1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_1']['view'] = 'documents_in_this_edition';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_2';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = 'Timelines';
  $handler->display->display_options['fields']['view_2']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_2']['view'] = 'maps_timelines_in_this_edition';
  $handler->display->display_options['fields']['view_2']['display'] = 'block_1';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  $handler->display->display_options['fields']['view_3']['table'] = 'views';
  $handler->display->display_options['fields']['view_3']['field'] = 'view';
  $handler->display->display_options['fields']['view_3']['label'] = 'Maps';
  $handler->display->display_options['fields']['view_3']['element_label_type'] = 'h4';
  $handler->display->display_options['fields']['view_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['view_3']['view'] = 'maps_timelines_in_this_edition';
  $handler->display->display_options['fields']['view_3']['display'] = 'block_2';
  $handler->display->display_options['fields']['view_3']['arguments'] = '[!nid]';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['documents_in_this_edition_menu_'] = $view;

  $view = new view();
  $view->name = 'editions_home';
  $view->description = 'COVE Electronic Editions offers a searchable archive of texts of the Victorian era. Each edition is peer-reviewed.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Editions Home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Electronic Editions';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'status',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = '[status]';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
    'field_main_author' => 'field_main_author',
    'body' => 'body',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="descbig"><strong>COVE Electronic
                      Editions</strong> offers a searchable archive of texts of the Victorian era,
                    enhanced by technology made possible in an online environment. Each edition is
                    based on the highest scholarly standards and is peer-reviewed.
                  </div>';
  $handler->display->display_options['header']['area']['format'] = 'unfiltered_html';
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
  $handler->display->display_options['fields']['field_original_publication_date']['alter']['text'] = '<span class="views-field views-field-field-original-publication-date">([field_original_publication_date])</span>';
  $handler->display->display_options['fields']['field_original_publication_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'month_year',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_main_author']['id'] = 'field_main_author';
  $handler->display->display_options['fields']['field_main_author']['table'] = 'field_data_field_main_author';
  $handler->display->display_options['fields']['field_main_author']['field'] = 'field_main_author';
  $handler->display->display_options['fields']['field_main_author']['label'] = 'by';
  $handler->display->display_options['fields']['field_main_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_main_author']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_main_author']['delta_offset'] = '0';
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_index_banner']['element_class'] = 'leftFloat';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'small_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Edited By */
  $handler->display->display_options['fields']['field_edited_by']['id'] = 'field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['field'] = 'field_edited_by';
  $handler->display->display_options['fields']['field_edited_by']['label'] = 'Edited by';
  $handler->display->display_options['fields']['field_edited_by']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edited_by']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_edited_by']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = '';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['status']['type'] = 'custom';
  $handler->display->display_options['fields']['status']['type_custom_true'] = 'Completed Prototype Editions';
  $handler->display->display_options['fields']['status']['type_custom_false'] = 'Prototype Editions Under Construction';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status']['id'] = 'status';
  $handler->display->display_options['sorts']['status']['table'] = 'node';
  $handler->display->display_options['sorts']['status']['field'] = 'status';
  $handler->display->display_options['sorts']['status']['order'] = 'DESC';
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'editions_index_page' => 'editions_index_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['metatags'] = array(
    'description' => array(
      'value' => 'The Romantic Circles Electronic Editions offers a searchable archive of texts of the Romantic era, enhanced by technology made possible in an online environment. Each edition is based on the highest scholarly standards and is peer-reviewed.',
    ),
    'keywords' => array(
      'value' => 'electronic editions, Romanticism',
    ),
    'dcterms.creator' => array(
      'value' => 'Tilar Mazzeo',
    ),
    'dcterms.subject' => array(
      'value' => 'Romantic literature',
    ),
    'dcterms.description' => array(
      'value' => 'The Romantic Circles Electronic Editions offers a searchable archive of texts of the Romantic era, enhanced by technology made possible in an online environment. Each edition is based on the highest scholarly standards and is peer-reviewed.',
    ),
    'dcterms.publisher' => array(
      'value' => 'Romantic Circles',
    ),
  );
  $handler->display->display_options['path'] = 'editions';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New at RC';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'editions/feed';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'block' => 'block',
  );
  $export['editions_home'] = $view;

  $view = new view();
  $view->name = 'maps_timelines_in_this_edition';
  $view->description = 'Shows a list of all docs within an edition on the resource page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maps/Timelines in this Edition';
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
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_nines_genre_s_' => 'field_nines_genre_s_',
    'edit_node_1' => 'edit_node_1',
  );
  $handler->display->display_options['row_options']['separator'] = ' | ';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
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
  $handler->display->display_options['filters']['status']['relationship'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'chronology' => 'chronology',
  );

  /* Display: Timelines */
  $handler = $view->new_display('panel_pane', 'Timelines', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Timelines';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['id'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['table'] = 'field_data_field_timelines_in_this_edition';
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['field'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_timelines_in_this_edition_target_id';

  /* Display: Menu-Timelines */
  $handler = $view->new_display('block', 'Menu-Timelines', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Timelines';
  $handler->display->display_options['display_description'] = 'gets embedded onto internal pages as a menu';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['id'] = 'field_timelines_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['table'] = 'field_data_field_timelines_in_this_edition';
  $handler->display->display_options['relationships']['field_timelines_in_this_edition_target_id']['field'] = 'field_timelines_in_this_edition_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_timelines_in_this_edition_target_id';
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
  $handler->display->display_options['defaults']['arguments'] = FALSE;
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

  /* Display: Maps */
  $handler = $view->new_display('panel_pane', 'Maps', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maps';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['id'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['table'] = 'field_data_field_maps_in_this_edition';
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['field'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node_1']['id'] = 'edit_node_1';
  $handler->display->display_options['fields']['edit_node_1']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node_1']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node_1']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['fields']['edit_node_1']['label'] = '';
  $handler->display->display_options['fields']['edit_node_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node_1']['text'] = 'Edit';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );

  /* Display: Menu-Maps */
  $handler = $view->new_display('block', 'Menu-Maps', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Maps';
  $handler->display->display_options['display_description'] = 'gets embedded onto internal pages as a menu';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['id'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['table'] = 'field_data_field_maps_in_this_edition';
  $handler->display->display_options['relationships']['field_maps_in_this_edition_target_id']['field'] = 'field_maps_in_this_edition_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['id'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_resource_index_node']['field'] = 'reverse_field_resource_index_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_maps_in_this_edition_target_id';
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
  $handler->display->display_options['sorts']['title']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_maps_in_this_edition_target_id';
  $handler->display->display_options['filters']['type']['value'] = array(
    'map' => 'map',
  );
  $export['maps_timelines_in_this_edition'] = $view;

  return $export;
}
