<?php
/**
 * @file
 * cove_visualizations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cove_visualizations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'annotation_visualization';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annotation visualization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by month';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'forcedirected',
    'fields' => array(
      'uid' => 'from:id',
      'name' => 'from:id',
      'created' => 'to:id',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '1024';
  $handler->display->display_options['style_options']['graphapi']['height'] = '800';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: COUNT(Content: Author uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
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
    'annotation' => 'annotation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'visualization/annotation';
  $export['annotation_visualization'] = $view;

  $view = new view();
  $view->name = 'annotation_visualization_d3_only_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annotation visualization (d3 only)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotation visualization (d3 only)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.piechart';
  $handler->display->display_options['style_options']['fields'] = array(
    'rows' => array(
      'name' => array(
        'field' => 'name',
        'aggregation' => '_none',
      ),
      'value' => array(
        'field' => 'name',
        'aggregation' => 'count',
      ),
    ),
  );
  $handler->display->display_options['style_options']['show_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
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
    'annotation' => 'annotation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'annotation-visualization-d3-only';
  $export['annotation_visualization_d3_only_'] = $view;

  $view = new view();
  $view->name = 'annotation_visualization_highcharts_';
  $view->description = 'Showing annotations by month in year and by day in month';
  $view->tag = 'chart, annotation, date';
  $view->base_table = 'node';
  $view->human_name = 'Annotations by date';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by date';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'line';
  $handler->display->display_options['style_options']['label_field'] = 'created';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'created' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'created' => '#2f7ed8',
    'nid' => '#0d233a',
  );
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '60';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: MIN(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'min';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'month';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = 'Annotations in %1';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'node_created';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
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
    'annotation' => 'annotation',
  );

  /* Display: byMonth */
  $handler = $view->new_display('page', 'byMonth', 'page');
  $handler->display->display_options['display_description'] = 'annotations by month';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: MIN(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'min';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_year']['title'] = 'Annotation in %1';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'annotations/visualization/bymonth/%';

  /* Display: byDayInMonth */
  $handler = $view->new_display('page', 'byDayInMonth', 'page_1');
  $handler->display->display_options['display_description'] = 'by Day within a month';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: MIN(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'min';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['granularity'] = 'day';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Created year */
  $handler->display->display_options['arguments']['created_year']['id'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['table'] = 'node';
  $handler->display->display_options['arguments']['created_year']['field'] = 'created_year';
  $handler->display->display_options['arguments']['created_year']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_year']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['created_year']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_year']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_year']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = 'Annotations in %2 %1';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'node_created';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['path'] = 'annotations/visualization/byday/%/%';
  $export['annotation_visualization_highcharts_'] = $view;

  $view = new view();
  $view->name = 'annotations_by_category';
  $view->description = 'Showing annotations by month in year and by day in month';
  $view->tag = 'chart, annotation, date';
  $view->base_table = 'node';
  $view->human_name = 'Annotations by category';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by category';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'column';
  $handler->display->display_options['style_options']['label_field'] = 'category';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'category' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'nid' => '#0d233a',
    'category' => '#0d233a',
  );
  $handler->display->display_options['style_options']['legend_position'] = '';
  $handler->display->display_options['style_options']['xaxis_labels_rotation'] = '60';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['label'] = 'annotation_reference';
  /* Field: MIN(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'min';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  /* Sort criterion: Content: Category (category) */
  $handler->display->display_options['sorts']['category_tid']['id'] = 'category_tid';
  $handler->display->display_options['sorts']['category_tid']['table'] = 'field_data_category';
  $handler->display->display_options['sorts']['category_tid']['field'] = 'category_tid';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = 'Annotations in %1';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'node_created';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
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
    'annotation' => 'annotation',
  );
  /* Filter criterion: Content: Category (category) */
  $handler->display->display_options['filters']['category_tid']['id'] = 'category_tid';
  $handler->display->display_options['filters']['category_tid']['table'] = 'field_data_category';
  $handler->display->display_options['filters']['category_tid']['field'] = 'category_tid';
  $handler->display->display_options['filters']['category_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['category_tid']['value'] = '';
  $handler->display->display_options['filters']['category_tid']['vocabulary'] = 'annotation_categories';

  /* Display: byCategory */
  $handler = $view->new_display('page', 'byCategory', 'page');
  $handler->display->display_options['display_description'] = 'annotations by month';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  /* Field: Content: Category */
  $handler->display->display_options['fields']['category']['id'] = 'category';
  $handler->display->display_options['fields']['category']['table'] = 'field_data_category';
  $handler->display->display_options['fields']['category']['field'] = 'category';
  $handler->display->display_options['fields']['category']['group_column'] = 'entity_id';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'annotations/visualization/bycategory';
  $export['annotations_by_category'] = $view;

  $view = new view();
  $view->name = 'annotations_by_page';
  $view->description = 'Showing annotations by month in year and by day in month';
  $view->tag = 'chart, annotation, date';
  $view->base_table = 'node';
  $view->human_name = 'Annotations by page';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by Edition';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'bar';
  $handler->display->display_options['style_options']['label_field'] = 'title';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_icon' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'nid' => '#2f7ed8',
    'field_icon' => '#0d233a',
    'title' => '#0d233a',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['label'] = 'annotation_reference';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['relationship'] = 'annotation_reference_target_id';
  /* Field: MIN(Content: Post date) */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['group_type'] = 'min';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  /* Sort criterion: Content: Annotated Content (annotation_reference) */
  $handler->display->display_options['sorts']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['sorts']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['sorts']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  /* Contextual filter: Content: Created month */
  $handler->display->display_options['arguments']['created_month']['id'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['table'] = 'node';
  $handler->display->display_options['arguments']['created_month']['field'] = 'created_month';
  $handler->display->display_options['arguments']['created_month']['default_action'] = 'summary';
  $handler->display->display_options['arguments']['created_month']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['created_month']['title'] = 'Annotations in %1';
  $handler->display->display_options['arguments']['created_month']['default_argument_type'] = 'node_created';
  $handler->display->display_options['arguments']['created_month']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['created_month']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['created_month']['summary_options']['items_per_page'] = '25';
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
    'annotation' => 'annotation',
  );
  /* Filter criterion: Content: Annotated Content (annotation_reference) */
  $handler->display->display_options['filters']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['filters']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['filters']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  $handler->display->display_options['filters']['annotation_reference_target_id']['operator'] = 'not empty';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['filters']['title']['operator'] = 'not empty';

  /* Display: byEdition */
  $handler = $view->new_display('page', 'byEdition', 'page');
  $handler->display->display_options['display_description'] = 'annotations by edition';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: COUNT(DISTINCT Content: Nid) */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['group_type'] = 'count_distinct';
  $handler->display->display_options['fields']['nid']['label'] = 'Number of annotations';
  /* Field: Content: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_icon']['settings'] = array(
    'image_style' => '40px_icon',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_icon']['group_column'] = 'entity_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_icon][title]';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'annotations/visualization/bycategory';
  $export['annotations_by_page'] = $view;

  $view = new view();
  $view->name = 'annotations_by_position';
  $view->description = 'by position within text';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annotations by position';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by position';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['type'] = 'area';
  $handler->display->display_options['style_options']['label_field'] = '';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'ranges' => 'ranges',
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'ranges' => '#2f7ed8',
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['label'] = 'annotation_reference';
  /* Field: Content: Ranges */
  $handler->display->display_options['fields']['ranges']['id'] = 'ranges';
  $handler->display->display_options['fields']['ranges']['table'] = 'field_data_ranges';
  $handler->display->display_options['fields']['ranges']['field'] = 'ranges';
  $handler->display->display_options['fields']['ranges']['label'] = 'Position';
  $handler->display->display_options['fields']['ranges']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Ranges (ranges:format) */
  $handler->display->display_options['sorts']['ranges_format']['id'] = 'ranges_format';
  $handler->display->display_options['sorts']['ranges_format']['table'] = 'field_data_ranges';
  $handler->display->display_options['sorts']['ranges_format']['field'] = 'ranges_format';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'annotation_reference_target_id';
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
    'annotation' => 'annotation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['annotations_by_position'] = $view;

  $view = new view();
  $view->name = 'annotations_by_user';
  $view->description = 'Shows pie chart of all annotations by user';
  $view->tag = 'annotation, visualization, user';
  $view->base_table = 'node';
  $view->human_name = 'Annotations by user';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by user';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'd3_style';
  $handler->display->display_options['style_options']['library'] = 'd3.piechart';
  $handler->display->display_options['style_options']['fields'] = array(
    'rows' => array(
      'name' => array(
        'field' => 'name',
        'aggregation' => '_none',
      ),
      'value' => array(
        'field' => 'name',
        'aggregation' => 'count',
      ),
    ),
  );
  $handler->display->display_options['style_options']['show_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'month_year';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['sorts']['name']['relationship'] = 'uid';
  $handler->display->display_options['sorts']['name']['group_type'] = 'count';
  $handler->display->display_options['sorts']['name']['order'] = 'DESC';
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
    'annotation' => 'annotation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'annotation-visualization-d3-only';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'chart';
  $handler->display->display_options['style_options']['label_field'] = 'name_1';
  $handler->display->display_options['style_options']['data_fields'] = array(
    'name' => 'name',
    'name_1' => 0,
  );
  $handler->display->display_options['style_options']['field_colors'] = array(
    'name' => '#0d233a',
    'name_1' => '#8bbc21',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['group_type'] = 'count';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['path'] = 'annotations/visualization/byuser';
  $export['annotations_by_user'] = $view;

  $view = new view();
  $view->name = 'clone_of_annotation_visualization';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Annotation by page (cluster)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Annotations by edition (cluster)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'graphapi_style';
  $handler->display->display_options['style_options']['engine'] = 'd3';
  $handler->display->display_options['style_options']['d3'] = array(
    'library' => 'forcedirected',
    'fields' => array(
      'uid' => 'from:id',
      'name' => 'from:id',
      'title' => 'to:id',
      'title_1' => 'to:content',
    ),
  );
  $handler->display->display_options['style_options']['graphapi']['width'] = '1024';
  $handler->display->display_options['style_options']['graphapi']['height'] = '800';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['annotation_reference_target_id']['id'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['table'] = 'field_data_annotation_reference';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['field'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['annotation_reference_target_id']['label'] = 'annotation_reference';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_resource_index_target_id']['id'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['table'] = 'field_data_field_resource_index';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['field'] = 'field_resource_index_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['relationship'] = 'annotation_reference_target_id';
  $handler->display->display_options['relationships']['field_resource_index_target_id']['label'] = 'Parent Resource';
  /* Field: COUNT(Content: Author uid) */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['group_type'] = 'count';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['title']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title']['node_in_colorbox_rel'] = '';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_resource_index_target_id';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'strong';
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_width'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_height'] = '600';
  $handler->display->display_options['fields']['title_1']['node_in_colorbox_rel'] = '';
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
    'annotation' => 'annotation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'annotations/visualization/bypage-cluster';
  $export['clone_of_annotation_visualization'] = $view;

  $view = new view();
  $view->name = 'timeline';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Timeline';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Timeline of COVE Editions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'timelinejs';
  $handler->display->display_options['style_options']['timeline_config']['hash_bookmark'] = '1';
  $handler->display->display_options['style_options']['timeline_fields']['media'] = 'field_index_banner';
  $handler->display->display_options['style_options']['timeline_fields']['headline'] = 'title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Field: Content: Original publication date */
  $handler->display->display_options['fields']['field_original_publication_date']['id'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['table'] = 'field_data_field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['field'] = 'field_original_publication_date';
  $handler->display->display_options['fields']['field_original_publication_date']['label'] = '';
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
  /* Field: Content: Index Banner */
  $handler->display->display_options['fields']['field_index_banner']['id'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['table'] = 'field_data_field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['field'] = 'field_index_banner';
  $handler->display->display_options['fields']['field_index_banner']['label'] = '';
  $handler->display->display_options['fields']['field_index_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_index_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_index_banner']['settings'] = array(
    'image_style' => 'index_banner',
    'image_link' => 'content',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '600';
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
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
    'editions_index_page' => 'editions_index_page',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'editions/timeline';
  $export['timeline'] = $view;

  return $export;
}
