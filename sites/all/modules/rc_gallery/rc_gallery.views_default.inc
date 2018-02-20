<?php
/**
 * @file
 * rc_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'gallery_collection_images';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Collection Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Collection';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['id'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['table'] = 'field_data_field_images_in_this_collection';
  $handler->display->display_options['relationships']['field_images_in_this_collection_target_id']['field'] = 'field_images_in_this_collection_target_id';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_images_in_this_collection_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
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
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['gallery_collection_images'] = $view;

  $view = new view();
  $view->name = 'gallery_collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Gallery Collections</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
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
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery/collections';
  $export['gallery_collections'] = $view;

  $view = new view();
  $view->name = 'gallery_contributor_section';
  $view->description = 'The section that appears on Contributor pages with gallery content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Contributor Section';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contributions to the RC Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid2';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['relationships']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['relationships']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['relationships']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['relationships']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_painted_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Painted';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 'exposed_form';
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 2 */
  $handler = $view->new_display('panel_pane', 'Content pane 2', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['relationships']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['relationships']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_illustrated_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Illustrated';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 3 */
  $handler = $view->new_display('panel_pane', 'Content pane 3', 'panel_pane_3');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['relationships']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['relationships']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_delineated_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Delineated';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 4 */
  $handler = $view->new_display('panel_pane', 'Content pane 4', 'panel_pane_4');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_engraved_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Engraved';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 5 */
  $handler = $view->new_display('panel_pane', 'Content pane 5', 'panel_pane_5');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['relationships']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['relationships']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_photographed_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Photographed';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 6 */
  $handler = $view->new_display('panel_pane', 'Content pane 6', 'panel_pane_6');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['relationships']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['relationships']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_work_editor_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work Editor';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 7 */
  $handler = $view->new_display('panel_pane', 'Content pane 7', 'panel_pane_7');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['relationships']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work illustrated in';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 8 */
  $handler = $view->new_display('panel_pane', 'Content pane 8', 'panel_pane_8');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['relationships']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['relationship'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['fields']['field_text_date']['label'] = '';
  $handler->display->display_options['fields']['field_text_date']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_text_date']['alter']['text'] = '([field_text_date])';
  $handler->display->display_options['fields']['field_text_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['pane_title'] = 'Work collaborated on';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['link_to_view'] = '1';

  /* Display: Content pane 9 */
  $handler = $view->new_display('panel_pane', 'Content pane 9', 'panel_pane_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 style="text-transform:uppercase; color:#2e2e2e; letter-spacing:2px;">Contributions to the RC Gallery</h2>';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'boldblue';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delineated_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_engraved_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_illustrated_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_painted_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photographed_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_editor_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['gallery_contributor_section'] = $view;

  $view = new view();
  $view->name = 'gallery_creators';
  $view->description = 'An aggregator of contributors whose work appears in the gallery';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Creators';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = 'Select';
  $handler->display->display_options['style_options']['choose'] = '- Find a Creator -';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Sort criterion: Field: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  /* Sort criterion: Field: First/Middle name (field_firstname) */
  $handler->display->display_options['sorts']['field_firstname_value']['id'] = 'field_firstname_value';
  $handler->display->display_options['sorts']['field_firstname_value']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['sorts']['field_firstname_value']['field'] = 'field_firstname_value';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'OR',
    2 => 'AND',
  );
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['id'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['table'] = 'field_data_field_collaborated_on';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['field'] = 'field_collaborated_on_target_id';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_collaborated_on_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_delineated_target_id']['id'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['table'] = 'field_data_field_delineated';
  $handler->display->display_options['filters']['field_delineated_target_id']['field'] = 'field_delineated_target_id';
  $handler->display->display_options['filters']['field_delineated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_delineated_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_engraved_target_id']['id'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['table'] = 'field_data_field_engraved';
  $handler->display->display_options['filters']['field_engraved_target_id']['field'] = 'field_engraved_target_id';
  $handler->display->display_options['filters']['field_engraved_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_engraved_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_illustrated_target_id']['id'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['table'] = 'field_data_field_illustrated';
  $handler->display->display_options['filters']['field_illustrated_target_id']['field'] = 'field_illustrated_target_id';
  $handler->display->display_options['filters']['field_illustrated_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_illustrated_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_painted_target_id']['id'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['table'] = 'field_data_field_painted';
  $handler->display->display_options['filters']['field_painted_target_id']['field'] = 'field_painted_target_id';
  $handler->display->display_options['filters']['field_painted_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_painted_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_photographed_target_id']['id'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['table'] = 'field_data_field_photographed';
  $handler->display->display_options['filters']['field_photographed_target_id']['field'] = 'field_photographed_target_id';
  $handler->display->display_options['filters']['field_photographed_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_photographed_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_editor_target_id']['id'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['table'] = 'field_data_field_work_editor';
  $handler->display->display_options['filters']['field_work_editor_target_id']['field'] = 'field_work_editor_target_id';
  $handler->display->display_options['filters']['field_work_editor_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_editor_target_id']['group'] = 1;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['id'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['table'] = 'field_data_field_work_illustrated_in';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['field'] = 'field_work_illustrated_in_target_id';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_work_illustrated_in_target_id']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'contributor' => 'contributor',
  );
  $handler->display->display_options['filters']['type']['group'] = 2;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 2;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Surname (field_surname) */
  $handler->display->display_options['filters']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['filters']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['filters']['field_surname_value']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_surname_value']['group'] = 2;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['gallery_creators'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibit_images';
  $view->description = 'A view drawn in by a panel to show thumbnails of images in each exhibit';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibit Images';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Exhibit';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'field_item_description',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_item_description' => 'field_item_description',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['relationships']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_image_target_id']['id'] = 'field_related_image_target_id';
  $handler->display->display_options['relationships']['field_related_image_target_id']['table'] = 'field_data_field_related_image';
  $handler->display->display_options['relationships']['field_related_image_target_id']['field'] = 'field_related_image_target_id';
  $handler->display->display_options['relationships']['field_related_image_target_id']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  /* Field: Content: Item Description */
  $handler->display->display_options['fields']['field_item_description']['id'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['table'] = 'field_data_field_item_description';
  $handler->display->display_options['fields']['field_item_description']['field'] = 'field_item_description';
  $handler->display->display_options['fields']['field_item_description']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['fields']['field_item_description']['label'] = 'Exhibit Description';
  $handler->display->display_options['fields']['field_item_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_item_description']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_item_description']['group_columns'] = array(
    'entity_id' => 'entity_id',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '[field_galleryimage-title]';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_for_exhibits',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'main',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_description']['label'] = 'Main Description';
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Go to the main image page';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '300',
  );
  /* Sort criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
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
    'galler_exhibit' => 'galler_exhibit',
    'gallery_exhibit_item' => 'gallery_exhibit_item',
  );
  /* Filter criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi) */
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['operator'] = 'not empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Preview of images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_item_description' => 'field_item_description',
    'title' => 'title',
    'field_description' => 'field_description',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_related_image_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '[field_galleryimage-title]';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => '40px_icon',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'preview',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['group_column'] = 'entity_id';
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Preview of images';
  $export['gallery_exhibit_images'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibit_images_2';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibit Images 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images in this Exhibit';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['id'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['table'] = 'field_data_field_images_in_exhibit';
  $handler->display->display_options['relationships']['field_images_in_exhibit_target_id']['field'] = 'field_images_in_exhibit_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'thumbnail',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'main',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_description']['label'] = 'Main Description';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_type'] = 'strong';
  /* Sort criterion: Content: Images in Exhibit (field_images_in_exhibit:delta) */
  $handler->display->display_options['sorts']['delta']['id'] = 'delta';
  $handler->display->display_options['sorts']['delta']['table'] = 'field_data_field_images_in_exhibit';
  $handler->display->display_options['sorts']['delta']['field'] = 'delta';
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
  /* Filter criterion: Content: Gallery Items in this Exhibit (field_gallery_items_in_this_exhi) */
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['id'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['table'] = 'field_data_field_gallery_items_in_this_exhi';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['field'] = 'field_gallery_items_in_this_exhi_target_id';
  $handler->display->display_options['filters']['field_gallery_items_in_this_exhi_target_id']['operator'] = 'empty';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Preview of images';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '10';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<em>Click an image above to view it in a lightbox</em>. <em>Scroll down to see the full entry for each image</em>.';
  $handler->display->display_options['footer']['area']['format'] = '1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['relationship'] = 'field_images_in_exhibit_target_id';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => '40px_icon',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'custom',
    'colorbox_gallery_custom' => 'preview',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  $handler->display->display_options['block_description'] = 'Preview of images';
  $export['gallery_exhibit_images_2'] = $view;

  $view = new view();
  $view->name = 'gallery_exhibits';
  $view->description = 'Landing page/browser for Gallery exhibits';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Exhibits';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gallery Exhibits';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_exhibit_icon' => 'field_exhibit_icon',
    'title' => 'title',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Gallery Exhibits</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total Exhibits
<br/>
<br/>';
  /* Field: Content: Exhibit Icon */
  $handler->display->display_options['fields']['field_exhibit_icon']['id'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['table'] = 'field_data_field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['field'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_icon']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_wrapper_class'] = 'alignleft';
  $handler->display->display_options['fields']['field_exhibit_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_icon']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h3';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '1000';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read more';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_path'] = '[path]';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_description']['element_wrapper_class'] = 'desc';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_credits']['id'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['table'] = 'field_data_field_credits';
  $handler->display->display_options['fields']['field_credits']['field'] = 'field_credits';
  $handler->display->display_options['fields']['field_credits']['label'] = 'Exhibit Created by';
  $handler->display->display_options['fields']['field_credits']['element_wrapper_type'] = 'h5';
  $handler->display->display_options['fields']['field_credits']['element_wrapper_class'] = 'right';
  $handler->display->display_options['fields']['field_credits']['hide_empty'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'galler_exhibit' => 'galler_exhibit',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'gallery/exhibits';
  $export['gallery_exhibits'] = $view;

  $view = new view();
  $view->name = 'gallery_slider';
  $view->description = 'A browser and two teaser blocks for RC Gallery thumbnails and content';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gallery Browser';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'COVE Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Newest first';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Oldest first';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '5';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_painter']['id'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['table'] = 'field_data_field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['field'] = 'field_creator_painter';
  $handler->display->display_options['fields']['field_creator_painter']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_painter']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_delineator']['id'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['table'] = 'field_data_field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['field'] = 'field_creator_delineator';
  $handler->display->display_options['fields']['field_creator_delineator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_delineator']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_illustrator']['id'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['table'] = 'field_data_field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['field'] = 'field_creator_illustrator';
  $handler->display->display_options['fields']['field_creator_illustrator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_illustrator']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_engraver']['id'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['table'] = 'field_data_field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['field'] = 'field_creator_engraver';
  $handler->display->display_options['fields']['field_creator_engraver']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_engraver']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_photographer']['id'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['table'] = 'field_data_field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['field'] = 'field_creator_photographer';
  $handler->display->display_options['fields']['field_creator_photographer']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_photographer']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_author']['id'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['table'] = 'field_data_field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['field'] = 'field_creator_author';
  $handler->display->display_options['fields']['field_creator_author']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_author']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_editor']['id'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['table'] = 'field_data_field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['field'] = 'field_creator_editor';
  $handler->display->display_options['fields']['field_creator_editor']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_editor']['hide_empty'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_creator_collaborator']['id'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['table'] = 'field_data_field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['field'] = 'field_creator_collaborator';
  $handler->display->display_options['fields']['field_creator_collaborator']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_creator_collaborator']['hide_empty'] = TRUE;
  /* Field: Content: Artist Unknown */
  $handler->display->display_options['fields']['field_artist_unknown']['id'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['table'] = 'field_data_field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['field'] = 'field_artist_unknown';
  $handler->display->display_options['fields']['field_artist_unknown']['label'] = '';
  $handler->display->display_options['fields']['field_artist_unknown']['element_type'] = 'em';
  $handler->display->display_options['fields']['field_artist_unknown']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_artist_unknown']['hide_empty'] = TRUE;
  /* Field: Content: Image Date */
  $handler->display->display_options['fields']['field_image_date']['id'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['table'] = 'field_data_field_image_date';
  $handler->display->display_options['fields']['field_image_date']['field'] = 'field_image_date';
  $handler->display->display_options['fields']['field_image_date']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_image_date']['click_sort_column'] = 'timestamp';
  $handler->display->display_options['fields']['field_image_date']['settings'] = array(
    'use_override' => 'none',
    'format' => 'medium',
    'component_settings' => array(
      'meridiem' => 'a',
      'year_designation' => 'sign',
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
          'format' => 'F',
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
          'value' => 'c.',
          'weight' => '-10',
        ),
      ),
    ),
  );
  /* Field: Content: From the Collection */
  $handler->display->display_options['fields']['field_from_the_collection']['id'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['table'] = 'field_data_field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['field'] = 'field_from_the_collection';
  $handler->display->display_options['fields']['field_from_the_collection']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_from_the_collection']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_from_the_collection']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="/node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="/node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
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
    'gallery_image' => 'gallery_image',
  );

  /* Display: Gallery Home */
  $handler = $view->new_display('page', 'Gallery Home', 'galleryhome');
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h1 id="page-title">Images in the Gallery</h1>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area_1']['id'] = 'area_1';
  $handler->display->display_options['header']['area_1']['table'] = 'views';
  $handler->display->display_options['header']['area_1']['field'] = 'area';
  $handler->display->display_options['header']['area_1']['content'] = '<h4 class="boldblue" style="text-align:center;">Gallery Editors: [view]</h4>';
  $handler->display->display_options['header']['area_1']['format'] = '3';
  $handler->display->display_options['header']['area_1']['tokenize'] = TRUE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = 'Displaying @start - @end of @total images';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'page',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
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
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Sort by date';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['metatags'] = array(
    'description' => array(
      'value' => 'The Romantic Circles Gallery is a fully curated gallery of Romantic-era images',
    ),
    'keywords' => array(
      'value' => 'gallery, images, Romanticism, art, art history, Romantic Era,',
    ),
    'dcterms.creator' => array(
      'value' => 'Theresa M. Kelley, Richard C. Sha',
    ),
    'dcterms.description' => array(
      'value' => 'The Romantic Circles Gallery is a fully curated gallery of Romantic-era images',
    ),
    'dcterms.publisher' => array(
      'value' => 'Romantic Circles',
    ),
    'dcterms.type' => array(
      'value' => 'Collection',
    ),
  );
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gallery Slider';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['total_pages'] = '3';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'galleryGrid';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = '';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_text_date']['id'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['table'] = 'field_data_field_text_date';
  $handler->display->display_options['fields']['field_text_date']['field'] = 'field_text_date';
  $handler->display->display_options['fields']['field_text_date']['element_label_type'] = 'strong';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<br/><a href="node/[nid]?width=800&height=600" class="colorbox-node">Quick View</a>';
  $handler->display->display_options['fields']['nid']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_class'] = 'quickView';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['label'] = '';
  $handler->display->display_options['fields']['nid_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid_2']['alter']['text'] = '<a href="node/[nid_2]">Full View</a>';
  $handler->display->display_options['fields']['nid_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid_2']['element_class'] = 'fullView';
  $handler->display->display_options['fields']['nid_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid_2']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['sorts']['random']['expose']['label'] = 'Random';

  /* Display: Featured */
  $handler = $view->new_display('block', 'Featured', 'featured');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'See all';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';

  /* Display: Slider */
  $handler = $view->new_display('block', 'Slider', 'slider');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid_1' => 0,
    'field_galleryimage' => 0,
    'title' => 0,
    'field_description' => 0,
    'field_creator_painter' => 0,
    'field_creator_delineator' => 0,
    'field_creator_illustrator' => 0,
    'field_creator_engraver' => 0,
    'field_creator_photographer' => 0,
    'field_creator_author' => 0,
    'field_creator_editor' => 0,
    'field_creator_collaborator' => 0,
    'field_artist_unknown' => 0,
    'field_from_the_collection' => 0,
    'nid' => 0,
    'nid_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'nid_1' => 0,
    'field_galleryimage' => 0,
    'title' => 0,
    'field_description' => 0,
    'field_creator_painter' => 0,
    'field_creator_delineator' => 0,
    'field_creator_illustrator' => 0,
    'field_creator_engraver' => 0,
    'field_creator_photographer' => 0,
    'field_creator_author' => 0,
    'field_creator_editor' => 0,
    'field_creator_collaborator' => 0,
    'field_artist_unknown' => 0,
    'field_from_the_collection' => 0,
    'nid' => 0,
    'nid_2' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '5';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );

  /* Display: Slider Single */
  $handler = $view->new_display('block', 'Slider Single', 'slidersingle');
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_galleryimage' => 0,
    'title' => 0,
    'field_description' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_galleryimage' => 0,
    'title' => 0,
    'field_description' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['effect'] = 'scrollHorz';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_text_date' => 'field_text_date',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_galleryimage']['id'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['table'] = 'field_data_field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['field'] = 'field_galleryimage';
  $handler->display->display_options['fields']['field_galleryimage']['label'] = '';
  $handler->display->display_options['fields']['field_galleryimage']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_galleryimage']['alter']['text'] = '<a href="node/[nid_1]?width=800&height=600" class="colorbox-node">[field_galleryimage]</a>';
  $handler->display->display_options['fields']['field_galleryimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_galleryimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_galleryimage']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_galleryimage']['settings'] = array(
    'colorbox_node_style' => 'gallery_small',
    'colorbox_image_style' => 'gallery_node',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_galleryimage']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_description']['alter']['more_link_text'] = 'Read full description';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['settings'] = array(
    'trim_length' => '400',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Original publication date -  start date (field_original_publication_date) */
  $handler->display->display_options['sorts']['field_original_publication_date_value']['id'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['field'] = 'field_original_publication_date_value';
  $handler->display->display_options['sorts']['field_original_publication_date_value']['expose']['label'] = 'Original publication date -  start date (field_original_publication_date)';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_image' => 'gallery_image',
  );
  $export['gallery_slider'] = $view;

  return $export;
}
