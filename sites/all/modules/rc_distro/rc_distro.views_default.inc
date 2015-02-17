<?php
/**
 * @file
 * rc_distro.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rc_distro_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'about_the_author_s_';
  $view->description = 'A simple block view to show a contributor\'s profile via a lightbox on a Praxis page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'About the Author(s)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About the Author(s)';
  $handler->display->display_options['css_class'] = 'teaserItemSimple';
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['use_more_text'] = 'More';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'teaserItem';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['label'] = 'instruction';
  $handler->display->display_options['header']['area']['content'] = '<em>Click an author\'s name to view his or her complete profile</em>';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  /* Field: Field: Biography */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['element_wrapper_type'] = 'p';
  /* Field: Content: Authored by (Primary) */
  $handler->display->display_options['fields']['field_authored_by_primary_']['id'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['field'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_authored_by_primary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_primary_']['delta_offset'] = '0';
  /* Field: Field: Biography */
  $handler->display->display_options['fields']['field_bio_1']['id'] = 'field_bio_1';
  $handler->display->display_options['fields']['field_bio_1']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio_1']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio_1']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['field_bio_1']['label'] = '';
  $handler->display->display_options['fields']['field_bio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_1']['element_wrapper_type'] = 'p';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['group'] = 2;
  /* Filter criterion: Content: Authored by (Primary) (field_authored_by_primary_) */
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['group'] = 2;
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_published_value']['value']['value'] = '2014-05';
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'month';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/about';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'About the Author';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/about?width=450&height=400">About the Author(s)</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['group'] = 2;
  /* Filter criterion: Content: Authored by (Primary) (field_authored_by_primary_) */
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_authored_by_primary__target_id']['group'] = 2;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
  );
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_published_value']['value']['value'] = '2014-05';
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'month';
  $translatables['about_the_author_s_'] = array(
    t('Master'),
    t('About the Author(s)'),
    t('More'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('instruction'),
    t('<em>Click an author\'s name to view his or her complete profile</em>'),
    t('Content entity referenced from field_authored_by_secondary_'),
    t('Content entity referenced from field_authored_by_primary_'),
    t('All'),
    t('Page'),
    t('more'),
    t('Block'),
    t('About the Author'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/about?width=450&height=400">About the Author(s)</a></div>'),
  );
  $export['about_the_author_s_'] = $view;

  $view = new view();
  $view->name = 'abstracts';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Abstracts';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Abstract';
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = 'p';
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'forthcoming_page' => 'forthcoming_page',
    'pedagogies_page' => 'pedagogies_page',
    'praxis_page' => 'praxis_page',
  );
  /* Filter criterion: Content: Authored by (Secondary) (field_authored_by_secondary_) */
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['field_authored_by_secondary__target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: NINES Genre(s) (field_nines_genre_s_) */
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['id'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['table'] = 'field_data_field_nines_genre_s_';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['field'] = 'field_nines_genre_s__tid';
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['value'] = array(
    0 => '27175',
  );
  $handler->display->display_options['filters']['field_nines_genre_s__tid']['vocabulary'] = 'nines_genre';
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['operator'] = '>=';
  $handler->display->display_options['filters']['field_published_value']['value']['value'] = '2014-05';
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'month';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'node/%/abstract';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/abstract?width=450&height=300">Abstract</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $translatables['abstracts'] = array(
    t('Master'),
    t('Abstract'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Block'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/abstract?width=450&height=300">Abstract</a></div>'),
  );
  $export['abstracts'] = $view;

  $view = new view();
  $view->name = 'chronology';
  $view->description = 'The master view for all chronologies on the site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Chronology';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_date_range' => 'field_date_range',
    'field_related_events' => 'field_related_events',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_date_range' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_events' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Date range */
  $handler->display->display_options['fields']['field_date_range']['id'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['table'] = 'field_data_field_date_range';
  $handler->display->display_options['fields']['field_date_range']['field'] = 'field_date_range';
  $handler->display->display_options['fields']['field_date_range']['label'] = 'Year';
  $handler->display->display_options['fields']['field_date_range']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Date Month/Day */
  $handler->display->display_options['fields']['field_eventdate_monthday']['id'] = 'field_eventdate_monthday';
  $handler->display->display_options['fields']['field_eventdate_monthday']['table'] = 'field_data_field_eventdate_monthday';
  $handler->display->display_options['fields']['field_eventdate_monthday']['field'] = 'field_eventdate_monthday';
  $handler->display->display_options['fields']['field_eventdate_monthday']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event */
  $handler->display->display_options['fields']['field_event2']['id'] = 'field_event2';
  $handler->display->display_options['fields']['field_event2']['table'] = 'field_data_field_event2';
  $handler->display->display_options['fields']['field_event2']['field'] = 'field_event2';
  /* Field: Content: Related Events */
  $handler->display->display_options['fields']['field_related_events']['id'] = 'field_related_events';
  $handler->display->display_options['fields']['field_related_events']['table'] = 'field_data_field_related_events';
  $handler->display->display_options['fields']['field_related_events']['field'] = 'field_related_events';
  /* Field: Field: Notes/Comments */
  $handler->display->display_options['fields']['field_notes_comments']['id'] = 'field_notes_comments';
  $handler->display->display_options['fields']['field_notes_comments']['table'] = 'field_data_field_notes_comments';
  $handler->display->display_options['fields']['field_notes_comments']['field'] = 'field_notes_comments';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Content: Event Date Month/Day (field_eventdate_monthday) */
  $handler->display->display_options['sorts']['field_eventdate_monthday_value']['id'] = 'field_eventdate_monthday_value';
  $handler->display->display_options['sorts']['field_eventdate_monthday_value']['table'] = 'field_data_field_eventdate_monthday';
  $handler->display->display_options['sorts']['field_eventdate_monthday_value']['field'] = 'field_eventdate_monthday_value';
  $handler->display->display_options['sorts']['field_eventdate_monthday_value']['exposed'] = TRUE;
  $handler->display->display_options['sorts']['field_eventdate_monthday_value']['expose']['label'] = 'Event Date Month/Day (field_eventdate_monthday)';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['operator'] = 'status_op';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['required'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'thelwall_chronologh' => 'thelwall_chronologh',
  );
  /* Filter criterion: Content: Parent Resource (field_resource_index) */
  $handler->display->display_options['filters']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['filters']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['filters']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['filters']['field_resource_index_target_id']['value']['value'] = '28593';
  $translatables['chronology'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Year'),
    t('Event Date Month/Day'),
    t('Event'),
    t('Related Events'),
    t('Notes/Comments'),
    t('Event Date Month/Day (field_eventdate_monthday)'),
    t('Published'),
  );
  $export['chronology'] = $view;

  $view = new view();
  $view->name = 'contributors';
  $view->description = 'A view for a panel that overrides the display of E. Ref. Field "Pages Authored at RC"; it adds the resource the page comes from';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pages Authored at RC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['css_class'] = 'pages-authored';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_at_rc1_target_id']['id'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['relationships']['field_authored_at_rc1_target_id']['table'] = 'field_data_field_authored_at_rc1';
  $handler->display->display_options['relationships']['field_authored_at_rc1_target_id']['field'] = 'field_authored_at_rc1_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['relationship'] = 'field_authored_at_rc1_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Pages Authored at RC */
  $handler->display->display_options['fields']['field_authored_at_rc1']['id'] = 'field_authored_at_rc1';
  $handler->display->display_options['fields']['field_authored_at_rc1']['table'] = 'field_data_field_authored_at_rc1';
  $handler->display->display_options['fields']['field_authored_at_rc1']['field'] = 'field_authored_at_rc1';
  $handler->display->display_options['fields']['field_authored_at_rc1']['label'] = '';
  $handler->display->display_options['fields']['field_authored_at_rc1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_authored_at_rc1']['alter']['text'] = '[field_authored_at_rc1] << [title]';
  $handler->display->display_options['fields']['field_authored_at_rc1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_at_rc1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_at_rc1']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_at_rc1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_authored_at_rc1']['multi_type'] = 'ul';
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
    'contributor' => 'contributor',
  );
  /* Filter criterion: Content: Pages Authored at RC (field_authored_at_rc1) */
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['id'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['table'] = 'field_data_field_authored_at_rc1';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['field'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'poets_on_poets_entry' => 'poets_on_poets_entry',
  );
  $translatables['contributors'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_authored_at_rc1'),
    t('Content entity referenced from field_resource_index'),
    t('[field_authored_at_rc1] << [title]'),
    t('All'),
  );
  $export['contributors'] = $view;

  $view = new view();
  $view->name = 'edited_at_rc';
  $view->description = 'A view for a panel that overrides the display of E. Ref. Field Edited at RC"; controls whether fortcoming pages appear';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Edited at RC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['id'] = 'field_edited_at_rc_target_id';
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['table'] = 'field_data_field_edited_at_rc';
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['field'] = 'field_edited_at_rc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_section_target_id']['id'] = 'field_parent_section_target_id';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['table'] = 'field_data_field_parent_section';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['field'] = 'field_parent_section_target_id';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['relationship'] = 'field_edited_at_rc_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_parent_section_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Edited at RC */
  $handler->display->display_options['fields']['field_edited_at_rc']['id'] = 'field_edited_at_rc';
  $handler->display->display_options['fields']['field_edited_at_rc']['table'] = 'field_data_field_edited_at_rc';
  $handler->display->display_options['fields']['field_edited_at_rc']['field'] = 'field_edited_at_rc';
  $handler->display->display_options['fields']['field_edited_at_rc']['label'] = '';
  $handler->display->display_options['fields']['field_edited_at_rc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_edited_at_rc']['alter']['text'] = '[field_edited_at_rc] | [title]';
  $handler->display->display_options['fields']['field_edited_at_rc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_edited_at_rc']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_edited_at_rc']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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
    'contributor' => 'contributor',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_edited_at_rc_target_id';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'forthcoming_resource' => 'forthcoming_resource',
  );
  $translatables['edited_at_rc'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_edited_at_rc'),
    t('Content entity referenced from field_parent_section'),
    t('[field_edited_at_rc] | [title]'),
    t('All'),
  );
  $export['edited_at_rc'] = $view;

  $view = new view();
  $view->name = 'editions_home';
  $view->description = 'Romantic Circles Electronic Editions offers a searchable archive of texts of the Romantic era. Each edition is peer-reviewed.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'editions_home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Electronic Editions';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
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
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '20';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_published',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_original_publication_date' => 'field_original_publication_date',
    'view_2' => 'view_2',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="descbig"><span class="boldblue">Romantic Circles Electronic
                      Editions</span> offers a searchable archive of texts of the Romantic era,
                    enhanced by technology made possible in an online environment. Each edition is
                    based on the highest scholarly standards and is peer-reviewed.
                  </div>
<h4 class="boldblue" style="text-align:center;">Section Editor: [view_1]</h4>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
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
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_original_publication_date']['separator'] = ',';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['view_2']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view_2']['display'] = 'block_4';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '100px_ed_icon',
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
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Edited by';
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'attribution';
  $handler->display->display_options['fields']['view']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_3';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
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
    'editions_index_page' => 'editions_index_page',
  );
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_value']['expose']['operator_id'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['label'] = 'Date published';
  $handler->display->display_options['filters']['field_published_value']['expose']['operator'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['identifier'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_published_value']['year_range'] = '1997:+0';
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value_1']['id'] = 'field_published_value_1';
  $handler->display->display_options['filters']['field_published_value_1']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value_1']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value_1']['operator'] = 'not empty';

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
  $translatables['editions_home'] = array(
    t('Master'),
    t('Electronic Editions'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="descbig"><span class="boldblue">Romantic Circles Electronic
                      Editions</span> offers a searchable archive of texts of the Romantic era,
                    enhanced by technology made possible in an online environment. Each edition is
                    based on the highest scholarly standards and is peer-reviewed.
                  </div>
<h4 class="boldblue" style="text-align:center;">Section Editor: [view_1]</h4>'),
    t('<span class="views-field views-field-field-original-publication-date">([field_original_publication_date])</span>'),
    t('Edited by'),
    t('Date published'),
    t('Page'),
    t('Block'),
    t('New at RC'),
    t('Feed'),
  );
  $export['editions_home'] = $view;

  $view = new view();
  $view->name = 'essays_etc_authored_at_rc';
  $view->description = 'A view for a panel that overrides the display of E. Ref. Field "Essays Authored at RC"; it adds the resource the page comes from';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Essays, etc. Authored at RC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_at_rc_target_id']['id'] = 'field_authored_at_rc_target_id';
  $handler->display->display_options['relationships']['field_authored_at_rc_target_id']['table'] = 'field_data_field_authored_at_rc';
  $handler->display->display_options['relationships']['field_authored_at_rc_target_id']['field'] = 'field_authored_at_rc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['relationship'] = 'field_authored_at_rc_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Essays, etc. Authored at RC */
  $handler->display->display_options['fields']['field_authored_at_rc']['id'] = 'field_authored_at_rc';
  $handler->display->display_options['fields']['field_authored_at_rc']['table'] = 'field_data_field_authored_at_rc';
  $handler->display->display_options['fields']['field_authored_at_rc']['field'] = 'field_authored_at_rc';
  $handler->display->display_options['fields']['field_authored_at_rc']['label'] = '';
  $handler->display->display_options['fields']['field_authored_at_rc']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_authored_at_rc']['alter']['text'] = '[field_authored_at_rc] | [title]';
  $handler->display->display_options['fields']['field_authored_at_rc']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_at_rc']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_at_rc']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_at_rc']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_authored_at_rc']['multi_type'] = 'ul';
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
    'contributor' => 'contributor',
  );
  /* Filter criterion: Content: Pages Authored at RC (field_authored_at_rc1) */
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['id'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['table'] = 'field_data_field_authored_at_rc1';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['field'] = 'field_authored_at_rc1_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc1_target_id']['operator'] = 'empty';
  /* Filter criterion: Content: Essays, etc. Authored at RC (field_authored_at_rc) */
  $handler->display->display_options['filters']['field_authored_at_rc_target_id']['id'] = 'field_authored_at_rc_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc_target_id']['table'] = 'field_data_field_authored_at_rc';
  $handler->display->display_options['filters']['field_authored_at_rc_target_id']['field'] = 'field_authored_at_rc_target_id';
  $handler->display->display_options['filters']['field_authored_at_rc_target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_authored_at_rc_target_id';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
  );
  $translatables['essays_etc_authored_at_rc'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_authored_at_rc'),
    t('Content entity referenced from field_resource_index'),
    t('[field_authored_at_rc] | [title]'),
    t('All'),
  );
  $export['essays_etc_authored_at_rc'] = $view;

  $view = new view();
  $view->name = 'frontpage_slider_2';
  $view->description = 'View for showing the front page slideshow/carousel for "Featured Resources"';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FrontPage Slider 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'FrontPage Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
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
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_index_banner_1' => 'field_index_banner_1',
    'body' => 0,
    'field_index_banner' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_hover'] = 1;
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'body' => 0,
    'field_index_banner_1' => 0,
    'field_index_banner' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['transition_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['sync'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['action_advanced'] = 1;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'body' => 'body',
    'field_index_banner_1' => 'field_index_banner_1',
    'field_index_banner' => 'field_index_banner',
  );
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner_1']['id'] = 'field_index_banner_1';
  $handler->display->display_options['fields']['field_index_banner_1']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner_1']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner_1']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_index_banner_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_index_banner_1']['alter']['link_class'] = '[field_index_banner_1]';
  $handler->display->display_options['fields']['field_index_banner_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner_1']['settings'] = array(
    'image_style' => 'front_thumbnail',
    'image_link' => '',
  );
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'front_banner',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '400';
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'more';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = '[view_node]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'frontpageSliderText desc';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '400',
  );
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  $handler->display->display_options['sorts']['changed']['granularity'] = 'hour';
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
    'editions_index_page' => 'editions_index_page',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_caching'] = '-1';
  $translatables['frontpage_slider_2'] = array(
    t('Master'),
    t('FrontPage Slider'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['frontpage_slider_2'] = $view;

  $view = new view();
  $view->name = 'image_gallery';
  $view->description = 'A view to show attached images on the Image Gallery content type. Needed to display the title text as a caption';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Gallery';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="zoomWindow"></div>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '[field_gallery_image]
<div class="galleryCaption">[field_gallery_image-title]</div>
';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['type'] = 'cloud_zoom';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'slide_style' => 'medium',
    'zoom_style' => '0',
    'gallery_filedset' => array(
      'gallery_mode' => 0,
      'thumb_style' => 'thumbnail',
    ),
    'zoom_position_fieldset' => array(
      'zoom_width' => 'auto',
      'zoom_height' => 'auto',
      'position' => 'zoomWindow',
      'adjust_x' => '0',
      'adjust_y' => '0',
    ),
    'zoom_style_fieldset' => array(
      'tint' => 'false',
      'tint_opacity' => '0.5',
      'lens_opacity' => '1',
      'soft_focus' => 0,
      'smooth_move' => '3',
      'Show title' => 0,
      'title_opacity' => '0.5',
    ),
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery' => 'gallery',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['path'] = 'image-gallery';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div id="zoomWindow2"></div>';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Gallery Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = '';
  $handler->display->display_options['fields']['field_gallery_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_gallery_image']['alter']['text'] = '[field_gallery_image]
<div class="galleryCaption">[field_gallery_image-title]</div>
';
  $handler->display->display_options['fields']['field_gallery_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['type'] = 'colorbox';
  $handler->display->display_options['fields']['field_gallery_image']['settings'] = array(
    'colorbox_node_style' => 'medium',
    'colorbox_node_style_first' => '',
    'colorbox_image_style' => '',
    'colorbox_gallery' => 'post',
    'colorbox_gallery_custom' => '',
    'colorbox_caption' => 'auto',
    'colorbox_caption_custom' => '',
  );
  $handler->display->display_options['fields']['field_gallery_image']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
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
  $translatables['image_gallery'] = array(
    t('Master'),
    t('Image Gallery'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div id="zoomWindow"></div>'),
    t('[field_gallery_image]
<div class="galleryCaption">[field_gallery_image-title]</div>
'),
    t('Page'),
    t('Block'),
    t('All'),
    t('<div id="zoomWindow2"></div>'),
  );
  $export['image_gallery'] = $view;

  $view = new view();
  $view->name = 'interior_banner';
  $view->description = 'Shows the interior banner, attached to the "Resource" content type on the "page" content type, i.e. interior pages for a resourc';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Interior Banner';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Interior Banner';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  /* Field: Content: Interior Banner */
  $handler->display->display_options['fields']['field_banner_image']['id'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['table'] = 'field_data_field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['field'] = 'field_banner_image';
  $handler->display->display_options['fields']['field_banner_image']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_banner_image']['label'] = '';
  $handler->display->display_options['fields']['field_banner_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_image']['settings'] = array(
    'image_style' => 'interior_banner',
    'image_link' => 'content',
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['interior_banner'] = array(
    t('Master'),
    t('Interior Banner'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_resource_index'),
    t('All'),
    t('Block'),
  );
  $export['interior_banner'] = $view;

  $view = new view();
  $view->name = 'main_blog_categories2';
  $view->description = 'block and page views for the main blog categories';
  $view->tag = 'blog, categories';
  $view->base_table = 'node';
  $view->human_name = 'Main Blog Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Main Blog Categories';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_59' => 'vocabulary_59',
    'vocabulary_52' => 0,
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'vocabulary_3' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'vocabulary_63' => 0,
    'vocabulary_61' => 0,
    'anniversary' => 0,
    'calais_document_category' => 0,
    'city' => 0,
    'company' => 0,
    'continent' => 0,
    'country' => 0,
    'currency' => 0,
    'email_address' => 0,
    'entertainment_award_event' => 0,
    'events_facts' => 0,
    'facility' => 0,
    'fax_number' => 0,
    'holiday' => 0,
    'industry_term' => 0,
    'market_index' => 0,
    'medical_condition' => 0,
    'medical_treatment' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'operating_system' => 0,
    'organization' => 0,
    'person' => 0,
    'phone_number' => 0,
    'position' => 0,
    'product' => 0,
    'programming_language' => 0,
    'province_or_state' => 0,
    'published_medium' => 0,
    'radio_program' => 0,
    'radio_station' => 0,
    'region' => 0,
    'vocabulary_64' => 0,
    'social_tags' => 0,
    'sports_event' => 0,
    'sports_game' => 0,
    'sports_league' => 0,
    'technology' => 0,
    'tvshow' => 0,
    'tvstation' => 0,
    'url' => 0,
  );
  /* Field: Content: Main Blog Categories */
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['id'] = 'taxonomy_vocabulary_59';
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['table'] = 'field_data_taxonomy_vocabulary_59';
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['field'] = 'taxonomy_vocabulary_59';
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['label'] = '';
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_59']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
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
    'blog' => 'blog',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Main Blog Categories';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'default';
  $handler->display->display_options['arguments']['name']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['name']['title'] = 'Posts in category "%1"';
  $handler->display->display_options['arguments']['name']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['name']['summary']['sort_order'] = 'desc';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '1';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  $handler->display->display_options['arguments']['name']['path_case'] = 'lower';
  $handler->display->display_options['arguments']['name']['transform_dash'] = TRUE;
  $handler->display->display_options['path'] = 'blog_rc/category/wordpress-category/%';
  $translatables['main_blog_categories2'] = array(
    t('Master'),
    t('Main Blog Categories'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Displaying @start - @end of @total'),
    t('term'),
    t('All'),
    t('Block'),
    t('Page'),
    t('Posts in category "%1"'),
    t('%2'),
  );
  $export['main_blog_categories2'] = $view;

  $view = new view();
  $view->name = 'most_popular_content';
  $view->description = 'A Google analytics-based view showing the locations around the worlds most utilizing RC';
  $view->tag = 'google analytics, stats, location, visited';
  $view->base_table = 'google_analytics';
  $view->human_name = 'RC World Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Romantic Circles Around the World';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'city' => 'city',
    'country' => 'country',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'The cities worldwide with the most visitors to Romantic Circles.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['label'] = '';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['city']['alter']['text'] = '[city],';
  $handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['label'] = '';
  $handler->display->display_options['fields']['country']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['country']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['visits']['id'] = 'visits';
  $handler->display->display_options['fields']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visits']['field'] = 'visits';
  $handler->display->display_options['fields']['visits']['label'] = '';
  $handler->display->display_options['fields']['visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['visits']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['visits']['id'] = 'visits';
  $handler->display->display_options['sorts']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['visits']['field'] = 'visits';
  $handler->display->display_options['sorts']['visits']['order'] = 'DESC';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['visits']['id'] = 'visits';
  $handler->display->display_options['filters']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['visits']['field'] = 'visits';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'world-stats';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['most_popular_content'] = array(
    t('Master'),
    t('Romantic Circles Around the World'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('The cities worldwide with the most visitors to Romantic Circles.'),
    t('[city],'),
    t('Page'),
    t('Block'),
  );
  $export['most_popular_content'] = $view;

  $view = new view();
  $view->name = 'most_visited';
  $view->description = 'A Google Analytics-based view showing most visited page on site';
  $view->tag = 'default';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Most Visited';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Most Visited Scholarly Resources Pages';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['fields']['pagePath']['label'] = 'ga:pagePath';
  $handler->display->display_options['fields']['pagePath']['exclude'] = TRUE;
  $handler->display->display_options['fields']['pagePath']['alter']['path'] = '[pagePath]';
  $handler->display->display_options['fields']['pagePath']['alter']['absolute'] = TRUE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['pageTitle']['id'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['pageTitle']['field'] = 'pageTitle';
  $handler->display->display_options['fields']['pageTitle']['label'] = '';
  $handler->display->display_options['fields']['pageTitle']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['pageTitle']['alter']['text'] = '<a href="http://www.rc.umd.edu[pagePath]">[pageTitle]</a>';
  $handler->display->display_options['fields']['pageTitle']['alter']['path'] = 'dev.rc.umd.edu[pagePath]';
  $handler->display->display_options['fields']['pageTitle']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['visits']['id'] = 'visits';
  $handler->display->display_options['fields']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visits']['field'] = 'visits';
  $handler->display->display_options['fields']['visits']['label'] = '';
  $handler->display->display_options['fields']['visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['visits']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['visits']['id'] = 'visits';
  $handler->display->display_options['sorts']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['visits']['field'] = 'visits';
  $handler->display->display_options['sorts']['visits']['order'] = 'DESC';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['operator'] = 'contains';
  $handler->display->display_options['filters']['pagePath']['value'] = 'reference';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Visited Pages';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  $handler->display->display_options['path'] = 'most-visited';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Visited Pages';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['visits']['id'] = 'visits';
  $handler->display->display_options['filters']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['visits']['field'] = 'visits';
  $handler->display->display_options['filters']['visits']['operator'] = '>';
  $handler->display->display_options['filters']['visits']['value'] = array(
    'min' => '',
    'max' => '',
    'value' => '0',
  );
  $handler->display->display_options['block_caching'] = '8';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Visited Praxis Pages';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['ui_name'] = 'Denotes most popular Praxis pages';
  $handler->display->display_options['filters']['pagePath']['operator'] = 'contains';
  $handler->display->display_options['filters']['pagePath']['value'] = 'praxis';
  $handler->display->display_options['block_description'] = 'Most Visited Praxis Pages';

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Visited Editions Pages';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['operator'] = 'contains';
  $handler->display->display_options['filters']['pagePath']['value'] = 'editions';
  $handler->display->display_options['block_description'] = 'Most Visited Editions Pages';

  /* Display: Block 3 */
  $handler = $view->new_display('block', 'Block 3', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Visited Pedagogies Pages';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['pagePath']['id'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['pagePath']['field'] = 'pagePath';
  $handler->display->display_options['filters']['pagePath']['operator'] = 'contains';
  $handler->display->display_options['filters']['pagePath']['value'] = 'pedagogies';
  $handler->display->display_options['block_description'] = 'Most Visited Pedagogies Pages';

  /* Display: Block 4 */
  $handler = $view->new_display('block', 'Block 4', 'block_4');
  $handler->display->display_options['block_description'] = 'Most Visited Scholarly Resources Pages';

  /* Display: Block 5 */
  $handler = $view->new_display('block', 'Block 5', 'block_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Most Recently Visited Pages';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['start_end']['id'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['start_end']['field'] = 'start_end';
  $handler->display->display_options['filters']['start_end']['operator'] = '>=';
  $handler->display->display_options['filters']['start_end']['value'] = array(
    'min' => '-1 minute',
    'max' => '-1 second',
    'value' => '-1 hour',
    'type' => 'offset',
  );
  $translatables['most_visited'] = array(
    t('Master'),
    t('Most Visited Scholarly Resources Pages'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('ga:pagePath'),
    t('<a href="http://www.rc.umd.edu[pagePath]">[pageTitle]</a>'),
    t('Page'),
    t('Most Visited Pages'),
    t('Block'),
    t('Most Visited Praxis Pages'),
    t('Block 2'),
    t('Most Visited Editions Pages'),
    t('Block 3'),
    t('Most Visited Pedagogies Pages'),
    t('Block 4'),
    t('Block 5'),
    t('Most Recently Visited Pages'),
  );
  $export['most_visited'] = $view;

  $view = new view();
  $view->name = 'newest_resources';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Newest Resources';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Newest Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_published']['element_class'] = 'field-name-field-published';
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
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
    'editions_index_page' => 'editions_index_page',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['newest_resources'] = array(
    t('Master'),
    t('Newest Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Block'),
  );
  $export['newest_resources'] = $view;

  $view = new view();
  $view->name = 'node_metadata';
  $view->description = 'Collects all the metadata on node fields and opens in a colorbox link';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Node Metadata';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Node Metadata';
  $handler->display->display_options['css_class'] = 'teaserItemSimple';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['element_type'] = 'h5';
  $handler->display->display_options['fields']['field_original_publication_date']['element_class'] = 'block-title';
  $handler->display->display_options['fields']['field_original_publication_date']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_original_publication_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_original_publication_date']['delta_offset'] = '0';
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = 'Published @ RC';
  $handler->display->display_options['fields']['field_published']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_published']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_published']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Authored by (Primary) */
  $handler->display->display_options['fields']['field_authored_by_primary_']['id'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['field'] = 'field_authored_by_primary_';
  $handler->display->display_options['fields']['field_authored_by_primary_']['label'] = 'Author';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_by_primary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_primary_']['delta_offset'] = '0';
  /* Field: Content: Authored by (Secondary) */
  $handler->display->display_options['fields']['field_authored_by_secondary_']['id'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['field'] = 'field_authored_by_secondary_';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['label'] = 'Author';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_authored_by_secondary_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_authored_by_secondary_']['delta_offset'] = '0';
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Person */
  $handler->display->display_options['fields']['opencalais_person_tags']['id'] = 'opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['table'] = 'field_data_opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['field'] = 'opencalais_person_tags';
  $handler->display->display_options['fields']['opencalais_person_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_person_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_person_tags']['delta_offset'] = '0';
  /* Field: Content: City */
  $handler->display->display_options['fields']['opencalais_city_tags']['id'] = 'opencalais_city_tags';
  $handler->display->display_options['fields']['opencalais_city_tags']['table'] = 'field_data_opencalais_city_tags';
  $handler->display->display_options['fields']['opencalais_city_tags']['field'] = 'opencalais_city_tags';
  $handler->display->display_options['fields']['opencalais_city_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_city_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_city_tags']['delta_offset'] = '0';
  /* Field: Content: ProvinceOrState */
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['id'] = 'opencalais_provinceorstate_tags';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['table'] = 'field_data_opencalais_provinceorstate_tags';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['field'] = 'opencalais_provinceorstate_tags';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['label'] = 'Province/State';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_provinceorstate_tags']['delta_offset'] = '0';
  /* Field: Content: Country */
  $handler->display->display_options['fields']['opencalais_country_tags']['id'] = 'opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['table'] = 'field_data_opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['field'] = 'opencalais_country_tags';
  $handler->display->display_options['fields']['opencalais_country_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_country_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_country_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_country_tags']['delta_offset'] = '0';
  /* Field: Content: Region */
  $handler->display->display_options['fields']['opencalais_region_tags']['id'] = 'opencalais_region_tags';
  $handler->display->display_options['fields']['opencalais_region_tags']['table'] = 'field_data_opencalais_region_tags';
  $handler->display->display_options['fields']['opencalais_region_tags']['field'] = 'opencalais_region_tags';
  $handler->display->display_options['fields']['opencalais_region_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_region_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_region_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_region_tags']['delta_offset'] = '0';
  /* Field: Content: Continent */
  $handler->display->display_options['fields']['opencalais_continent_tags']['id'] = 'opencalais_continent_tags';
  $handler->display->display_options['fields']['opencalais_continent_tags']['table'] = 'field_data_opencalais_continent_tags';
  $handler->display->display_options['fields']['opencalais_continent_tags']['field'] = 'opencalais_continent_tags';
  $handler->display->display_options['fields']['opencalais_continent_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_continent_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_continent_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_continent_tags']['delta_offset'] = '0';
  /* Field: Content: NaturalFeature */
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['id'] = 'opencalais_naturalfeature_tags';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['table'] = 'field_data_opencalais_naturalfeature_tags';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['field'] = 'opencalais_naturalfeature_tags';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['label'] = 'Natural Feature';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['element_label_type'] = 'h5';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['element_label_class'] = 'block-title';
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['opencalais_naturalfeature_tags']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = 'Metadata in %1';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_authored_by_primary_' => 'field_authored_by_primary_',
    'field_authored_by_secondary_' => 'field_authored_by_secondary_',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: View area */
  $handler->display->display_options['footer']['view']['id'] = 'view';
  $handler->display->display_options['footer']['view']['table'] = 'views';
  $handler->display->display_options['footer']['view']['field'] = 'view';
  $handler->display->display_options['footer']['view']['view_to_insert'] = 'map_per_node:block_1';
  $handler->display->display_options['footer']['view']['inherit_arguments'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/metadata';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'floatViewBlocks';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<div class="links"><a class="colorbox-node" href="/node/[nid]/metadata?width=350&height=350">About this Page</a></div>';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['nid']['node_in_colorbox_rel'] = '';
  $translatables['node_metadata'] = array(
    t('Master'),
    t('Node Metadata'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Original publication date'),
    t('Published @ RC'),
    t('Author'),
    t('Tags'),
    t('Person'),
    t('City'),
    t('Province/State'),
    t('Country'),
    t('Region'),
    t('Continent'),
    t('Natural Feature'),
    t('All'),
    t('Metadata in %1'),
    t('Page'),
    t('Block'),
    t('<div class="links"><a class="colorbox-node" href="/node/[nid]/metadata?width=350&height=350">About this Page</a></div>'),
  );
  $export['node_metadata'] = $view;

  $view = new view();
  $view->name = 'place_mentioned_in';
  $view->description = 'Shows the title of a node that mentions a person/place. Needed to pass value from the Anchor vocab over to the node';
  $view->tag = 'people, place';
  $view->base_table = 'node';
  $view->human_name = 'Person/Place Mentioned In';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mentioned in';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '@total pages';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h4>%1 has not been mentioned on any pages</h4>';
  $handler->display->display_options['empty']['area']['format'] = '3';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Field: Content: Associated Place Anchor Tag */
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['id'] = 'field_associated_place_anchor_ta';
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['table'] = 'field_data_field_associated_place_anchor_ta';
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['field'] = 'field_associated_place_anchor_ta';
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['label'] = '';
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_place_anchor_ta']['settings'] = array(
    'link' => 0,
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
  /* Filter criterion: Content: Associated Place Anchor Tag (field_associated_place_anchor_ta) */
  $handler->display->display_options['filters']['field_associated_place_anchor_ta_target_id']['id'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['filters']['field_associated_place_anchor_ta_target_id']['table'] = 'field_data_field_associated_place_anchor_ta';
  $handler->display->display_options['filters']['field_associated_place_anchor_ta_target_id']['field'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['filters']['field_associated_place_anchor_ta_target_id']['operator'] = 'not empty';

  /* Display: Person Mentioned in */
  $handler = $view->new_display('block', 'Person Mentioned in', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mentioned in';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['id'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['table'] = 'field_data_field_person_anchor_tag';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['field'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Pages that mention this person */
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['id'] = 'field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['field'] = 'field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['label'] = '';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Pages that mention this person (field_pages_that_mention_this_pe)) */
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['id'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['field'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Pages that mention this person (field_pages_that_mention_this_pe) */
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['id'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['field'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['operator'] = 'not empty';

  /* Display: Person addressed in */
  $handler = $view->new_display('block', 'Person addressed in', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Addressed in';
  $handler->display->display_options['display_description'] = 'Page in which a person is addressed';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['id'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['table'] = 'field_data_field_person_anchor_tag';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['field'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Addressed in */
  $handler->display->display_options['fields']['field_addressed_in']['id'] = 'field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['field'] = 'field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['fields']['field_addressed_in']['label'] = '';
  $handler->display->display_options['fields']['field_addressed_in']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_addressed_in']['empty'] = 'Nothing here at the moment.';
  $handler->display->display_options['fields']['field_addressed_in']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_addressed_in']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_addressed_in']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_addressed_in']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Addressed in (field_addressed_in)) */
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['id'] = 'field_addressed_in_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['field'] = 'field_addressed_in_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Addressed in (field_addressed_in) */
  $handler->display->display_options['filters']['field_addressed_in_target_id']['id'] = 'field_addressed_in_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['field'] = 'field_addressed_in_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['operator'] = 'not empty';

  /* Display: Place Mentioned in */
  $handler = $view->new_display('block', 'Place Mentioned in', 'block_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associated_place_anchor_ta_target_id']['id'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['relationships']['field_associated_place_anchor_ta_target_id']['table'] = 'field_data_field_associated_place_anchor_ta';
  $handler->display->display_options['relationships']['field_associated_place_anchor_ta_target_id']['field'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Pages that mention this place */
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['id'] = 'field_pages_that_mention_this_pl';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['table'] = 'field_data_field_pages_that_mention_this_pl';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['field'] = 'field_pages_that_mention_this_pl';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['relationship'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['label'] = '';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pl']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Pages that mention this place (field_pages_that_mention_this_pl) */
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pl_target_id']['id'] = 'field_pages_that_mention_this_pl_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pl_target_id']['table'] = 'field_data_field_pages_that_mention_this_pl';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pl_target_id']['field'] = 'field_pages_that_mention_this_pl_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pl_target_id']['relationship'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pl_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Pages that mention this place (field_pages_that_mention_this_pl) */
  $handler->display->display_options['filters']['field_pages_that_mention_this_pl_target_id']['id'] = 'field_pages_that_mention_this_pl_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pl_target_id']['table'] = 'field_data_field_pages_that_mention_this_pl';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pl_target_id']['field'] = 'field_pages_that_mention_this_pl_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pl_target_id']['relationship'] = 'field_associated_place_anchor_ta_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pl_target_id']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Show All -';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['id'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['table'] = 'field_data_field_person_anchor_tag';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['field'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Pages that mention this person */
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['id'] = 'field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['field'] = 'field_pages_that_mention_this_pe';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['label'] = '';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['empty'] = '%1 has not been mentioned on any pages.';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pages_that_mention_this_pe']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Pages that mention this person (field_pages_that_mention_this_pe)) */
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['id'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['field'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_pages_that_mention_this_pe_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Pages that mention this person (field_pages_that_mention_this_pe) */
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['id'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['table'] = 'field_data_field_pages_that_mention_this_pe';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['field'] = 'field_pages_that_mention_this_pe_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['filters']['field_pages_that_mention_this_pe_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'editions/southey_letters/%/mentioned-in';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['id'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['table'] = 'field_data_field_person_anchor_tag';
  $handler->display->display_options['relationships']['field_person_anchor_tag_target_id']['field'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Addressed in */
  $handler->display->display_options['fields']['field_addressed_in']['id'] = 'field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['field'] = 'field_addressed_in';
  $handler->display->display_options['fields']['field_addressed_in']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['fields']['field_addressed_in']['label'] = '';
  $handler->display->display_options['fields']['field_addressed_in']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_addressed_in']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_addressed_in']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_addressed_in']['multi_type'] = 'ul';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Taxonomy term: Addressed in (field_addressed_in)) */
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['id'] = 'field_addressed_in_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['field'] = 'field_addressed_in_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_addressed_in_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Addressed in (field_addressed_in) */
  $handler->display->display_options['filters']['field_addressed_in_target_id']['id'] = 'field_addressed_in_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['table'] = 'field_data_field_addressed_in';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['field'] = 'field_addressed_in_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['relationship'] = 'field_person_anchor_tag_target_id';
  $handler->display->display_options['filters']['field_addressed_in_target_id']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'editions/southey_letters/%/addressed-in';
  $translatables['place_mentioned_in'] = array(
    t('Master'),
    t('Mentioned in'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('@total pages'),
    t('<h4>%1 has not been mentioned on any pages</h4>'),
    t('All'),
    t('Person Mentioned in'),
    t('Taxonomy term entity referenced from field_person_anchor_tag'),
    t('Person addressed in'),
    t('Addressed in'),
    t('Page in which a person is addressed'),
    t('Nothing here at the moment.'),
    t('Place Mentioned in'),
    t('Taxonomy term entity referenced from field_associated_place_anchor_ta'),
    t('Page'),
    t('- Show All -'),
    t('%1 has not been mentioned on any pages.'),
    t('Page 2'),
  );
  $export['place_mentioned_in'] = $view;

  $view = new view();
  $view->name = 'places_mentioned';
  $view->description = 'Shows the person and place mentioned on a node. Needed to display the proper label instead of anchor id in Anchor vocab';
  $view->tag = 'people, place';
  $view->base_table = 'node';
  $view->human_name = 'People/Places Mentioned';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Places mentioned';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_associated_place' => 'field_associated_place',
    'field_associated_place_1' => 'field_associated_place_1',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_places_mentioned_in_this_l_target_id']['id'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['relationships']['field_places_mentioned_in_this_l_target_id']['table'] = 'field_data_field_places_mentioned_in_this_l';
  $handler->display->display_options['relationships']['field_places_mentioned_in_this_l_target_id']['field'] = 'field_places_mentioned_in_this_l_target_id';
  /* Field: Taxonomy term: Associated Place */
  $handler->display->display_options['fields']['field_associated_place']['id'] = 'field_associated_place';
  $handler->display->display_options['fields']['field_associated_place']['table'] = 'field_data_field_associated_place';
  $handler->display->display_options['fields']['field_associated_place']['field'] = 'field_associated_place';
  $handler->display->display_options['fields']['field_associated_place']['relationship'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['fields']['field_associated_place']['label'] = '';
  $handler->display->display_options['fields']['field_associated_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_place']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_associated_place']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_associated_place']['group_column'] = 'entity_id';
  /* Field: COUNT(Taxonomy term: Associated Place) */
  $handler->display->display_options['fields']['field_associated_place_1']['id'] = 'field_associated_place_1';
  $handler->display->display_options['fields']['field_associated_place_1']['table'] = 'field_data_field_associated_place';
  $handler->display->display_options['fields']['field_associated_place_1']['field'] = 'field_associated_place';
  $handler->display->display_options['fields']['field_associated_place_1']['relationship'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['fields']['field_associated_place_1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_associated_place_1']['label'] = '';
  $handler->display->display_options['fields']['field_associated_place_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_place_1']['separator'] = ', ';
  $handler->display->display_options['fields']['field_associated_place_1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['field_associated_place_1']['format_plural_singular'] = 'mentioned 1 time';
  $handler->display->display_options['fields']['field_associated_place_1']['format_plural_plural'] = 'mentioned @count times';
  $handler->display->display_options['fields']['field_associated_place_1']['prefix'] = '(';
  $handler->display->display_options['fields']['field_associated_place_1']['suffix'] = ')';
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
  /* Filter criterion: Content: Places mentioned on this page (tag) (field_places_mentioned_in_this_l) */
  $handler->display->display_options['filters']['field_places_mentioned_in_this_l_target_id']['id'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['filters']['field_places_mentioned_in_this_l_target_id']['table'] = 'field_data_field_places_mentioned_in_this_l';
  $handler->display->display_options['filters']['field_places_mentioned_in_this_l_target_id']['field'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['filters']['field_places_mentioned_in_this_l_target_id']['operator'] = 'not empty';

  /* Display: Places mentioned */
  $handler = $view->new_display('block', 'Places mentioned', 'block_1');
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: Places mentioned on this page (tag) (field_places_mentioned_in_this_l)) */
  $handler->display->display_options['sorts']['field_places_mentioned_in_this_l_target_id']['id'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['sorts']['field_places_mentioned_in_this_l_target_id']['table'] = 'field_data_field_places_mentioned_in_this_l';
  $handler->display->display_options['sorts']['field_places_mentioned_in_this_l_target_id']['field'] = 'field_places_mentioned_in_this_l_target_id';
  $handler->display->display_options['sorts']['field_places_mentioned_in_this_l_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_places_mentioned_in_this_l_target_id']['order'] = 'DESC';

  /* Display: People mentioned */
  $handler = $view->new_display('block', 'People mentioned', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People mentioned';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_associated_person_' => 'field_associated_person_',
    'field_associated_person__1' => 'field_associated_person__1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_people_mentioned_on_this_p_target_id']['id'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['relationships']['field_people_mentioned_on_this_p_target_id']['table'] = 'field_data_field_people_mentioned_on_this_p';
  $handler->display->display_options['relationships']['field_people_mentioned_on_this_p_target_id']['field'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Associated Person */
  $handler->display->display_options['fields']['field_associated_person_']['id'] = 'field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['table'] = 'field_data_field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['field'] = 'field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['relationship'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['fields']['field_associated_person_']['label'] = '';
  $handler->display->display_options['fields']['field_associated_person_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_person_']['settings'] = array(
    'link' => 1,
  );
  /* Field: COUNT(Taxonomy term: Associated Person) */
  $handler->display->display_options['fields']['field_associated_person__1']['id'] = 'field_associated_person__1';
  $handler->display->display_options['fields']['field_associated_person__1']['table'] = 'field_data_field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person__1']['field'] = 'field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person__1']['relationship'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['fields']['field_associated_person__1']['group_type'] = 'count';
  $handler->display->display_options['fields']['field_associated_person__1']['label'] = '';
  $handler->display->display_options['fields']['field_associated_person__1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_person__1']['separator'] = ', ';
  $handler->display->display_options['fields']['field_associated_person__1']['format_plural'] = TRUE;
  $handler->display->display_options['fields']['field_associated_person__1']['format_plural_singular'] = 'mentioned 1 time';
  $handler->display->display_options['fields']['field_associated_person__1']['format_plural_plural'] = 'mentioned @count times';
  $handler->display->display_options['fields']['field_associated_person__1']['prefix'] = '(';
  $handler->display->display_options['fields']['field_associated_person__1']['suffix'] = ')';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: COUNT(Content: People mentioned on this page (tag) (field_people_mentioned_on_this_p)) */
  $handler->display->display_options['sorts']['field_people_mentioned_on_this_p_target_id']['id'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['sorts']['field_people_mentioned_on_this_p_target_id']['table'] = 'field_data_field_people_mentioned_on_this_p';
  $handler->display->display_options['sorts']['field_people_mentioned_on_this_p_target_id']['field'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['sorts']['field_people_mentioned_on_this_p_target_id']['group_type'] = 'count';
  $handler->display->display_options['sorts']['field_people_mentioned_on_this_p_target_id']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: People mentioned on this page (tag) (field_people_mentioned_on_this_p) */
  $handler->display->display_options['filters']['field_people_mentioned_on_this_p_target_id']['id'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['filters']['field_people_mentioned_on_this_p_target_id']['table'] = 'field_data_field_people_mentioned_on_this_p';
  $handler->display->display_options['filters']['field_people_mentioned_on_this_p_target_id']['field'] = 'field_people_mentioned_on_this_p_target_id';
  $handler->display->display_options['filters']['field_people_mentioned_on_this_p_target_id']['operator'] = 'not empty';

  /* Display: People Addressed */
  $handler = $view->new_display('block', 'People Addressed', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Addressee';
  $handler->display->display_options['display_description'] = 'The person addressed on the page';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_associated_person_' => 'field_associated_person_',
    'field_associated_person__1' => 'field_associated_person__1',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_people_addressed_on_this_p_target_id']['id'] = 'field_people_addressed_on_this_p_target_id';
  $handler->display->display_options['relationships']['field_people_addressed_on_this_p_target_id']['table'] = 'field_data_field_people_addressed_on_this_p';
  $handler->display->display_options['relationships']['field_people_addressed_on_this_p_target_id']['field'] = 'field_people_addressed_on_this_p_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Associated Person */
  $handler->display->display_options['fields']['field_associated_person_']['id'] = 'field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['table'] = 'field_data_field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['field'] = 'field_associated_person_';
  $handler->display->display_options['fields']['field_associated_person_']['relationship'] = 'field_people_addressed_on_this_p_target_id';
  $handler->display->display_options['fields']['field_associated_person_']['label'] = '';
  $handler->display->display_options['fields']['field_associated_person_']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_associated_person_']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: People addressed on this page (tag) (field_people_addressed_on_this_p) */
  $handler->display->display_options['filters']['field_people_addressed_on_this_p_target_id']['id'] = 'field_people_addressed_on_this_p_target_id';
  $handler->display->display_options['filters']['field_people_addressed_on_this_p_target_id']['table'] = 'field_data_field_people_addressed_on_this_p';
  $handler->display->display_options['filters']['field_people_addressed_on_this_p_target_id']['field'] = 'field_people_addressed_on_this_p_target_id';
  $handler->display->display_options['filters']['field_people_addressed_on_this_p_target_id']['operator'] = 'not empty';
  $translatables['places_mentioned'] = array(
    t('Master'),
    t('Places mentioned'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Taxonomy term entity referenced from field_places_mentioned_in_this_l'),
    t('All'),
    t('People mentioned'),
    t('Taxonomy term entity referenced from field_people_mentioned_on_this_p'),
    t('People Addressed'),
    t('Addressee'),
    t('The person addressed on the page'),
    t('Taxonomy term entity referenced from field_people_addressed_on_this_p'),
  );
  $export['places_mentioned'] = $view;

  $view = new view();
  $view->name = 'praxis_home';
  $view->description = 'Romantic Circles Praxis is a series of peer-reviewed critical volumes devoted to the field of Romanticism.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'praxis_home';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Praxis Series';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Previous Praxis Volumes';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
    ),
    'field_published_value' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_published',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_prax_icon' => 'field_prax_icon',
    'body' => 'body',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="descbig"><span class="boldblue">Romantic Circles
              Praxis</span> is a series of peer-reviewed critical volumes devoted to the field of Romanticism and its theoretical underpinnings. Closer in form to a scholarly book of essays than a critical journal, each volume in <span class="boldblue">Romantic Circles Praxis Series (RCPS)</span> explores a particular subject, figure, or theoretical approach, such as the gothic, contemporary culture, discourses of empire, and many others.   </div>
<h4 class="boldblue" style="text-align:center;">Section Editor: [view_1]</h4>

';
  $handler->display->display_options['header']['area']['format'] = '3';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '100px_prax_icon',
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
  $handler->display->display_options['fields']['view']['label'] = 'Edited by';
  $handler->display->display_options['fields']['view']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_wrapper_class'] = 'attribution';
  $handler->display->display_options['fields']['view']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view']['display'] = 'block_1';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'contributor_names_landing_pages';
  $handler->display->display_options['fields']['view_1']['display'] = 'block_3';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_value']['expose']['operator_id'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['label'] = 'Date published';
  $handler->display->display_options['filters']['field_published_value']['expose']['operator'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['identifier'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_published_value']['year_range'] = '1997:-0';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'praxis_index_page' => 'praxis_index_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['metatags'] = array(
    'description' => array(
      'value' => 'Romantic Circles Praxis is a series of peer-reviewed critical volumes devoted to the field of Romanticism and its theoretical underpinnings. Closer in form to a scholarly book of essays than a critical journal, each volume in Romantic Circles Praxis Series (RCPS) explores a particular subject, figure, or theoretical approach, such as the gothic, contemporary culture, discourses of empire, and many others.',
    ),
    'keywords' => array(
      'value' => 'literary criticism, Romanticism',
    ),
    'dcterms.creator' => array(
      'value' => 'Orrin N.C. Wang',
    ),
    'dcterms.description' => array(
      'value' => 'Romantic Circles Praxis is a series of peer-reviewed critical volumes devoted to the field of Romanticism and its theoretical underpinnings. Closer in form to a scholarly book of essays than a critical journal, each volume in Romantic Circles Praxis Series (RCPS) explores a particular subject, figure, or theoretical approach, such as the gothic, contemporary culture, discourses of empire, and many others.',
    ),
    'dcterms.publisher' => array(
      'value' => 'Romantic Circles',
    ),
  );
  $handler->display->display_options['path'] = 'praxis';

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
  $handler->display->display_options['path'] = 'praxis/feed';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
    'block' => 'block',
  );
  $translatables['praxis_home'] = array(
    t('Master'),
    t('Praxis Series'),
    t('Previous Praxis Volumes'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="descbig"><span class="boldblue">Romantic Circles
              Praxis</span> is a series of peer-reviewed critical volumes devoted to the field of Romanticism and its theoretical underpinnings. Closer in form to a scholarly book of essays than a critical journal, each volume in <span class="boldblue">Romantic Circles Praxis Series (RCPS)</span> explores a particular subject, figure, or theoretical approach, such as the gothic, contemporary culture, discourses of empire, and many others.   </div>
<h4 class="boldblue" style="text-align:center;">Section Editor: [view_1]</h4>

'),
    t('Edited by'),
    t('Date published'),
    t('Page'),
    t('more'),
    t('Block'),
    t('New at RC'),
    t('Feed'),
  );
  $export['praxis_home'] = $view;

  $view = new view();
  $view->name = 'rc_blog';
  $view->description = 'News, notes, and announcements from the RC community';
  $view->tag = 'rcblog';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Romantic Circles Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Published */
  $handler->display->display_options['sorts']['status_1']['id'] = 'status_1';
  $handler->display->display_options['sorts']['status_1']['table'] = 'node';
  $handler->display->display_options['sorts']['status_1']['field'] = 'status';
  $handler->display->display_options['sorts']['status_1']['order'] = 'DESC';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Created date */
  $handler->display->display_options['arguments']['created_fulldate']['id'] = 'created_fulldate';
  $handler->display->display_options['arguments']['created_fulldate']['table'] = 'node';
  $handler->display->display_options['arguments']['created_fulldate']['field'] = 'created_fulldate';
  $handler->display->display_options['arguments']['created_fulldate']['exception']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_fulldate']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_fulldate']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_fulldate']['specify_validation'] = TRUE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );
  $handler->display->display_options['filters']['type']['group'] = '0';
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'blog_rc';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Blog Posts';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Recent blog posts';
  $translatables['rc_blog'] = array(
    t('Defaults'),
    t('Romantic Circles Blog'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Block'),
    t('Recent Blog Posts'),
    t('Recent blog posts'),
  );
  $export['rc_blog'] = $view;

  $view = new view();
  $view->name = 'rc_publications';
  $view->description = 'Landing page for Praxis';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'RC publications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Romantic Circles Publications';
  $handler->display->display_options['css_class'] = 'teaserItem';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_published',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_author_primary' => 'field_author_primary',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="descbig"><span class="boldblue">Romantic Circles Publications</span> displays all the peer-reviewed content published by Romantic Circles.</div>';
  $handler->display->display_options['header']['area']['format'] = '3';
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_published']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '100px_ed_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '100px_prax_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '100px_ped_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '100px_ref_icon',
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
  /* Sort criterion: Content: Date published (field_published) */
  $handler->display->display_options['sorts']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['sorts']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['sorts']['field_published_value']['order'] = 'DESC';
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
    'editions_index_page' => 'editions_index_page',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Section';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['reduce'] = TRUE;
  /* Filter criterion: Content: Date published (field_published) */
  $handler->display->display_options['filters']['field_published_value']['id'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['table'] = 'field_data_field_published';
  $handler->display->display_options['filters']['field_published_value']['field'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_published_value']['expose']['operator_id'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['label'] = 'Date published';
  $handler->display->display_options['filters']['field_published_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_published_value']['expose']['operator'] = 'field_published_value_op';
  $handler->display->display_options['filters']['field_published_value']['expose']['identifier'] = 'field_published_value';
  $handler->display->display_options['filters']['field_published_value']['granularity'] = 'year';
  $handler->display->display_options['filters']['field_published_value']['year_range'] = '1997:+0';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['path'] = 'publications';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'New at RC';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_author_primary' => 'field_author_primary',
    'field_editor' => 'field_editor',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_author_primary']['id'] = 'field_author_primary';
  $handler->display->display_options['fields']['field_author_primary']['table'] = 'field_data_field_author_primary';
  $handler->display->display_options['fields']['field_author_primary']['field'] = 'field_author_primary';
  $handler->display->display_options['fields']['field_author_primary']['label'] = 'by';
  $handler->display->display_options['fields']['field_author_primary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_author_primary']['hide_empty'] = TRUE;
  /* Field: Content: Date published */
  $handler->display->display_options['fields']['field_published']['id'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['table'] = 'field_data_field_published';
  $handler->display->display_options['fields']['field_published']['field'] = 'field_published';
  $handler->display->display_options['fields']['field_published']['label'] = '';
  $handler->display->display_options['fields']['field_published']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_published']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_published']['settings'] = array(
    'format_type' => 'rc_published_date',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_editor']['id'] = 'field_editor';
  $handler->display->display_options['fields']['field_editor']['table'] = 'field_data_field_editor';
  $handler->display->display_options['fields']['field_editor']['field'] = 'field_editor';
  $handler->display->display_options['fields']['field_editor']['label'] = 'Editor(s)';
  $handler->display->display_options['fields']['field_editor']['element_wrapper_type'] = 'span';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'editions_index_page' => 'editions_index_page',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );
  $handler->display->display_options['block_description'] = 'New at RC';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['row_options']['links'] = TRUE;
  $handler->display->display_options['path'] = 'publications/feed';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block' => 0,
  );
  $translatables['rc_publications'] = array(
    t('Master'),
    t('Romantic Circles Publications'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div class="descbig"><span class="boldblue">Romantic Circles Publications</span> displays all the peer-reviewed content published by Romantic Circles.</div>'),
    t('Displaying @start - @end of @total'),
    t('Section'),
    t('Date published'),
    t('Page'),
    t('Block'),
    t('New at RC'),
    t('by'),
    t('Editor(s)'),
    t('Feed'),
  );
  $export['rc_publications'] = $view;

  $view = new view();
  $view->name = 'related_resources_algorithmic';
  $view->description = 'Shows related resources based on several taxonomy vocabularies';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Related Resources Algorithmic';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Related Resources';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '518400';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '518400';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Editions Icon */
  $handler->display->display_options['fields']['field_ed_icon']['id'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['table'] = 'field_data_field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['field'] = 'field_ed_icon';
  $handler->display->display_options['fields']['field_ed_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ed_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ed_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ed_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Pedagogies Icon */
  $handler->display->display_options['fields']['field_ped_icon']['id'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['table'] = 'field_data_field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['field'] = 'field_ped_icon';
  $handler->display->display_options['fields']['field_ped_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ped_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ped_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ped_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Praxis Icon */
  $handler->display->display_options['fields']['field_prax_icon']['id'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['table'] = 'field_data_field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['field'] = 'field_prax_icon';
  $handler->display->display_options['fields']['field_prax_icon']['label'] = '';
  $handler->display->display_options['fields']['field_prax_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_prax_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_prax_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Reference Icon */
  $handler->display->display_options['fields']['field_ref_icon']['id'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['table'] = 'field_data_field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['field'] = 'field_ref_icon';
  $handler->display->display_options['fields']['field_ref_icon']['label'] = '';
  $handler->display->display_options['fields']['field_ref_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ref_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_ref_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Exhibit Icon */
  $handler->display->display_options['fields']['field_exhibit_icon']['id'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['table'] = 'field_data_field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['field'] = 'field_exhibit_icon';
  $handler->display->display_options['fields']['field_exhibit_icon']['label'] = '';
  $handler->display->display_options['fields']['field_exhibit_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_exhibit_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_exhibit_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h6';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Field: Field: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['max_length'] = '250';
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Sort criterion: Similar By Terms: Similarity */
  $handler->display->display_options['sorts']['similarterms']['id'] = 'similarterms';
  $handler->display->display_options['sorts']['similarterms']['table'] = 'node';
  $handler->display->display_options['sorts']['similarterms']['field'] = 'similarterms';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_3' => 'vocabulary_3',
    'city' => 'city',
    'person' => 'person',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
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
    'editions_index_page' => 'editions_index_page',
    'galler_exhibit' => 'galler_exhibit',
    'pedagogies_index_page' => 'pedagogies_index_page',
    'praxis_index_page' => 'praxis_index_page',
    'reference_index_page' => 'reference_index_page',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['similar_nid']['vocabularies'] = array(
    52 => '52',
    173 => '173',
    3 => '3',
    152 => '152',
    154 => '154',
    155 => '155',
    170 => '170',
    182 => '182',
    178 => '178',
    108 => 0,
    107 => 0,
    106 => 0,
    59 => 0,
    60 => 0,
    62 => 0,
    193 => 0,
    194 => 0,
    202 => 0,
    197 => 0,
    198 => 0,
    199 => 0,
    200 => 0,
    201 => 0,
    203 => 0,
    63 => 0,
    61 => 0,
    192 => 0,
    191 => 0,
    167 => 0,
    168 => 0,
    169 => 0,
    172 => 0,
    64 => 0,
  );
  $handler->display->display_options['arguments']['similar_nid']['include_args'] = 1;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Related Resources';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
    'author_primary_' => 0,
    'author' => 0,
    'editor' => 0,
    'person' => 0,
    'vocabulary_3' => 0,
    'city' => 0,
    'vocabulary_59' => 0,
    'vocabulary_60' => 0,
    'vocabulary_62' => 0,
    'creation_technique' => 0,
    'flagged_gallery_categories' => 0,
    'gallery_locations' => 0,
    'gallery_tags' => 0,
    'vocabulary_63' => 0,
    'style' => 0,
    'support_medium' => 0,
    'video_categories' => 0,
    'vocabulary_61' => 0,
    'academic_interests' => 0,
    'audio_categories' => 0,
    'continent' => 0,
    'country' => 0,
    'movie' => 0,
    'music_album' => 0,
    'music_group' => 0,
    'natural_feature' => 0,
    'organization' => 0,
    'province_or_state' => 0,
    'region' => 0,
    'vocabulary_64' => 0,
  );
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'vocabulary_52' => 'vocabulary_52',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['not'] = TRUE;
  $handler->display->display_options['block_description'] = 'Related Resources2';
  $handler->display->display_options['block_caching'] = '4';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Similar By Terms: Nid */
  $handler->display->display_options['arguments']['similar_nid']['id'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['table'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['field'] = 'similar_nid';
  $handler->display->display_options['arguments']['similar_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['similar_nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['similar_nid']['title'] = 'Resources Related to %1';
  $handler->display->display_options['arguments']['similar_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['similar_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['similar_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['similar_nid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['nid']['not'] = TRUE;
  $handler->display->display_options['path'] = 'node/%/related-resources';
  $translatables['related_resources_algorithmic'] = array(
    t('Master'),
    t('Related Resources'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('term'),
    t('All'),
    t('Block'),
    t('Related Resources2'),
    t('Page'),
    t('Resources Related to %1'),
  );
  $export['related_resources_algorithmic'] = $view;

  $view = new view();
  $view->name = 'romantic_circles_people_2';
  $view->description = 'A tabular display of authors and their content on the site';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Romantic Circles People 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Index of Primary Authors ';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
    'field_resource_index' => 'title_1',
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
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '  |  ',
      'empty_column' => 0,
    ),
    'field_resource_index' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_authored_at_rc1_node']['id'] = 'reverse_field_authored_at_rc1_node';
  $handler->display->display_options['relationships']['reverse_field_authored_at_rc1_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_authored_at_rc1_node']['field'] = 'reverse_field_authored_at_rc1_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'field_authored_by_primary__target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value_1']['id'] = 'field_surname_value_1';
  $handler->display->display_options['sorts']['field_surname_value_1']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value_1']['field'] = 'field_surname_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'Find a person by searching all or part of his or her name';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
    'forthcoming_resource' => 'forthcoming_resource',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['path'] = 'rc-primary-authors';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Index of Secondary Authors ';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['id'] = 'reverse_field_authored_by_secondary__node';
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_authored_by_secondary__node']['field'] = 'reverse_field_authored_by_secondary__node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'field_authored_by_secondary__target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'Find a person by searching all or part of his or her name';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_page' => 'forthcoming_page',
  );
  $handler->display->display_options['path'] = 'rc-secondary-authors';

  /* Display: Page 2 */
  $handler = $view->new_display('page', 'Page 2', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Index of Editors';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_by_target_id']['id'] = 'field_edited_by_target_id';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['field'] = 'field_edited_by_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'field_edited_by_target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['title_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title_1']['expose']['operator_id'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['title_1']['expose']['description'] = 'Find a person by searching all or part of his or her name';
  $handler->display->display_options['filters']['title_1']['expose']['operator'] = 'title_1_op';
  $handler->display->display_options['filters']['title_1']['expose']['identifier'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    5 => 0,
    8 => 0,
    10 => 0,
    4 => 0,
    9 => 0,
    3 => 0,
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['operator'] = 'not in';
  $handler->display->display_options['filters']['type']['value'] = array(
    'forthcoming_resource' => 'forthcoming_resource',
  );
  $handler->display->display_options['path'] = 'rc-editors';

  /* Display: Page 3 */
  $handler = $view->new_display('page', 'Page 3', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Index of Contributors';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'title_2',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    2 => array(
      'field' => 'title_3',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_2' => 'title_2',
    'title_3' => 'title_3',
    'title_1' => 'title_1',
    'field_resource_index' => 'title_1',
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
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_3' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '  |  ',
      'empty_column' => 0,
    ),
    'field_resource_index' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['id'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['table'] = 'field_data_field_authored_by_primary_';
  $handler->display->display_options['relationships']['field_authored_by_primary__target_id']['field'] = 'field_authored_by_primary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['id'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['table'] = 'field_data_field_authored_by_secondary_';
  $handler->display->display_options['relationships']['field_authored_by_secondary__target_id']['field'] = 'field_authored_by_secondary__target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_by_target_id']['id'] = 'field_edited_by_target_id';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['table'] = 'field_data_field_edited_by';
  $handler->display->display_options['relationships']['field_edited_by_target_id']['field'] = 'field_edited_by_target_id';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['fields']['title_2']['label'] = '';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_2']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_2']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_3']['id'] = 'title_3';
  $handler->display->display_options['fields']['title_3']['table'] = 'node';
  $handler->display->display_options['fields']['title_3']['field'] = 'title';
  $handler->display->display_options['fields']['title_3']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['fields']['title_3']['label'] = '';
  $handler->display->display_options['fields']['title_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_3']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title_3']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_3']['node_in_colorbox_height'] = '600';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  /* Field: Content: Parent Resource */
  $handler->display->display_options['fields']['field_resource_index']['id'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['field'] = 'field_resource_index';
  $handler->display->display_options['fields']['field_resource_index']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value']['id'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value']['relationship'] = 'field_authored_by_primary__target_id';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value_1']['id'] = 'field_surname_value_1';
  $handler->display->display_options['sorts']['field_surname_value_1']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value_1']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value_1']['relationship'] = 'field_authored_by_secondary__target_id';
  /* Sort criterion: Content: Surname (field_surname) */
  $handler->display->display_options['sorts']['field_surname_value_2']['id'] = 'field_surname_value_2';
  $handler->display->display_options['sorts']['field_surname_value_2']['table'] = 'field_data_field_surname';
  $handler->display->display_options['sorts']['field_surname_value_2']['field'] = 'field_surname_value';
  $handler->display->display_options['sorts']['field_surname_value_2']['relationship'] = 'field_edited_by_target_id';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['sorts']['created']['granularity'] = 'minute';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_authored_by_primary__target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_1']['id'] = 'title_1';
  $handler->display->display_options['filters']['title_1']['table'] = 'node';
  $handler->display->display_options['filters']['title_1']['field'] = 'title';
  $handler->display->display_options['filters']['title_1']['relationship'] = 'field_authored_by_secondary__target_id';
  $handler->display->display_options['filters']['title_1']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_1']['group'] = 2;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title_2']['id'] = 'title_2';
  $handler->display->display_options['filters']['title_2']['table'] = 'node';
  $handler->display->display_options['filters']['title_2']['field'] = 'title';
  $handler->display->display_options['filters']['title_2']['relationship'] = 'field_edited_by_target_id';
  $handler->display->display_options['filters']['title_2']['operator'] = 'not empty';
  $handler->display->display_options['filters']['title_2']['group'] = 2;
  $handler->display->display_options['path'] = 'about/rc-contributors';
  $translatables['romantic_circles_people_2'] = array(
    t('Master'),
    t('Index of Primary Authors '),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Content entity referenced from field_authored_by_primary_'),
    t('Content referencing Content from field_authored_at_rc1'),
    t('Parent Resource'),
    t('Name'),
    t('Find a person by searching all or part of his or her name'),
    t('Page'),
    t('Index of Secondary Authors '),
    t('Content entity referenced from field_authored_by_secondary_'),
    t('Content referencing Content from field_authored_by_secondary_'),
    t('Page 2'),
    t('Index of Editors'),
    t('Content entity referenced from field_edited_by'),
    t('Page 3'),
    t('Index of Contributors'),
  );
  $export['romantic_circles_people_2'] = $view;

  $view = new view();
  $view->name = 'technical_edited_at_rc';
  $view->description = 'A view for a panel that overrides the display of E. Ref. Field Edited at RC"; controls whether fortcoming pages appear';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Technical Edited at RC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['id'] = 'field_edited_at_rc_target_id';
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['table'] = 'field_data_field_edited_at_rc';
  $handler->display->display_options['relationships']['field_edited_at_rc_target_id']['field'] = 'field_edited_at_rc_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_parent_section_target_id']['id'] = 'field_parent_section_target_id';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['table'] = 'field_data_field_parent_section';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['field'] = 'field_parent_section_target_id';
  $handler->display->display_options['relationships']['field_parent_section_target_id']['relationship'] = 'field_edited_at_rc_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_parent_section_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Technical Editor on */
  $handler->display->display_options['fields']['field_technical_edited']['id'] = 'field_technical_edited';
  $handler->display->display_options['fields']['field_technical_edited']['table'] = 'field_data_field_technical_edited';
  $handler->display->display_options['fields']['field_technical_edited']['field'] = 'field_technical_edited';
  $handler->display->display_options['fields']['field_technical_edited']['label'] = '';
  $handler->display->display_options['fields']['field_technical_edited']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_technical_edited']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_technical_edited']['delta_offset'] = '0';
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
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate']['fail'] = 'ignore';
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
    'contributor' => 'contributor',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'field_edited_at_rc_target_id';
  $handler->display->display_options['filters']['type_1']['operator'] = 'not in';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'forthcoming_resource' => 'forthcoming_resource',
  );
  $translatables['technical_edited_at_rc'] = array(
    t('Master'),
    t('<none>'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Content entity referenced from field_edited_at_rc'),
    t('Content entity referenced from field_parent_section'),
    t('All'),
  );
  $export['technical_edited_at_rc'] = $view;

  $view = new view();
  $view->name = 'top_google_searches';
  $view->description = 'A view showing the top searches (from any engine) that lead people to the site';
  $view->tag = 'search';
  $view->base_table = 'google_analytics';
  $view->human_name = 'Top Searches';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Top Searches';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['type'] = 'ol';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'keyword' => 'keyword',
    'visits' => 'visits',
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'The top searches leading to Romantic Circles from external search engines.';
  $handler->display->display_options['header']['area']['format'] = '1';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['keyword']['id'] = 'keyword';
  $handler->display->display_options['fields']['keyword']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['keyword']['field'] = 'keyword';
  $handler->display->display_options['fields']['keyword']['label'] = '';
  $handler->display->display_options['fields']['keyword']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['keyword']['alter']['path'] = 'search/site/[keyword]';
  $handler->display->display_options['fields']['keyword']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['keyword']['element_label_colon'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['visits']['id'] = 'visits';
  $handler->display->display_options['fields']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['fields']['visits']['field'] = 'visits';
  $handler->display->display_options['fields']['visits']['label'] = '';
  $handler->display->display_options['fields']['visits']['exclude'] = TRUE;
  $handler->display->display_options['fields']['visits']['element_label_colon'] = FALSE;
  /* Sort criterion: Broken/missing handler */
  $handler->display->display_options['sorts']['visits']['id'] = 'visits';
  $handler->display->display_options['sorts']['visits']['table'] = 'google_analytics';
  $handler->display->display_options['sorts']['visits']['field'] = 'visits';
  $handler->display->display_options['sorts']['visits']['order'] = 'DESC';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keyword']['id'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['keyword']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword']['operator'] = 'not';
  $handler->display->display_options['filters']['keyword']['value'] = 'viagra';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keyword_1']['id'] = 'keyword_1';
  $handler->display->display_options['filters']['keyword_1']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['keyword_1']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword_1']['operator'] = 'not';
  $handler->display->display_options['filters']['keyword_1']['value'] = 'romantic circles';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keyword_2']['id'] = 'keyword_2';
  $handler->display->display_options['filters']['keyword_2']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['keyword_2']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword_2']['operator'] = 'not';
  $handler->display->display_options['filters']['keyword_2']['value'] = '.edu';
  /* Filter criterion: Broken/missing handler */
  $handler->display->display_options['filters']['keyword_3']['id'] = 'keyword_3';
  $handler->display->display_options['filters']['keyword_3']['table'] = 'google_analytics';
  $handler->display->display_options['filters']['keyword_3']['field'] = 'keyword';
  $handler->display->display_options['filters']['keyword_3']['operator'] = 'not';
  $handler->display->display_options['filters']['keyword_3']['value'] = 'not';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['path'] = 'top-searches';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['block_caching'] = '8';
  $translatables['top_google_searches'] = array(
    t('Master'),
    t('Top Searches'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('The top searches leading to Romantic Circles from external search engines.'),
    t('Page'),
    t('Block'),
  );
  $export['top_google_searches'] = $view;

  return $export;
}
