<?php
/**
 * @file
 * cove_visualizations.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function cove_visualizations_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'annotation_dashboard';
  $page->task = 'page';
  $page->admin_title = 'Annotation Dashboard';
  $page->admin_description = 'A collection of links and visualizations ';
  $page->path = 'annotation-dashboard';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_annotation_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'annotation_dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 3,
          1 => 1,
          2 => 'main-row',
          3 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mid_right',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Mid Right',
        'width' => '14.929651016166218',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'mid-right',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_left',
          1 => 'top_right',
        ),
        'parent' => 'main',
        'class' => 'row-1',
        'hide_empty' => 0,
      ),
      'top_left' => array(
        'type' => 'region',
        'title' => 'Top Left',
        'width' => '60.938488095848506',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'top-left',
        'hide_empty' => 0,
      ),
      'top_right' => array(
        'type' => 'region',
        'title' => 'Top Right',
        'width' => '39.061511904151494',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'top-right',
        'hide_empty' => 0,
      ),
      'mid_right' => array(
        'type' => 'region',
        'title' => 'Mid Left',
        'width' => '85.07034898383378',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'mid-left',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'bottom',
        ),
        'parent' => 'main',
        'class' => 'bottom',
        'hide_empty' => 0,
      ),
      'bottom' => array(
        'type' => 'region',
        'title' => 'Bottom',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'bottom',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
        ),
        'parent' => 'main',
        'class' => 'page-header',
        'hide_empty' => 0,
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top_left' => NULL,
      'top_right' => NULL,
      'mid_right' => NULL,
      'bottom' => NULL,
      'main_' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Annotation Dashboard';
  $display->uuid = '313afe90-235c-48f9-94cf-90bb8a185203';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-78681f12-d87d-43c0-82c0-fa27b7de09b7';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'annotations_by_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '78681f12-d87d-43c0-82c0-fa27b7de09b7';
    $display->content['new-78681f12-d87d-43c0-82c0-fa27b7de09b7'] = $pane;
    $display->panels['bottom'][0] = 'new-78681f12-d87d-43c0-82c0-fa27b7de09b7';
    $pane = new stdClass();
    $pane->pid = 'new-a892d78e-61ba-4040-8894-f79db1166215';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'clone_of_annotation_visualization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => 'Annotations by page',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a892d78e-61ba-4040-8894-f79db1166215';
    $display->content['new-a892d78e-61ba-4040-8894-f79db1166215'] = $pane;
    $display->panels['bottom'][1] = 'new-a892d78e-61ba-4040-8894-f79db1166215';
    $pane = new stdClass();
    $pane->pid = 'new-2ff46c8d-58f9-4cde-943d-8f5ef506f487';
    $pane->panel = 'bottom';
    $pane->type = 'views';
    $pane->subtype = 'annotation_visualization';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 1,
      'override_title_text' => 'Annotations clustered by date',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2ff46c8d-58f9-4cde-943d-8f5ef506f487';
    $display->content['new-2ff46c8d-58f9-4cde-943d-8f5ef506f487'] = $pane;
    $display->panels['bottom'][2] = 'new-2ff46c8d-58f9-4cde-943d-8f5ef506f487';
    $pane = new stdClass();
    $pane->pid = 'new-4d504eaa-14e3-4db5-9887-43cb837eb09f';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'annotation_visualization_highcharts_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '2016',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 1,
      'override_title_text' => 'By month',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4d504eaa-14e3-4db5-9887-43cb837eb09f';
    $display->content['new-4d504eaa-14e3-4db5-9887-43cb837eb09f'] = $pane;
    $display->panels['center'][0] = 'new-4d504eaa-14e3-4db5-9887-43cb837eb09f';
    $pane = new stdClass();
    $pane->pid = 'new-330aa26a-9c6a-4b85-b2c5-60de1556c605';
    $pane->panel = 'main_';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => 'The Annotation Dashboard offers visualizations of the annotation work happening at the COVE.',
      'format' => 'unfiltered_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'descbig',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '330aa26a-9c6a-4b85-b2c5-60de1556c605';
    $display->content['new-330aa26a-9c6a-4b85-b2c5-60de1556c605'] = $pane;
    $display->panels['main_'][0] = 'new-330aa26a-9c6a-4b85-b2c5-60de1556c605';
    $pane = new stdClass();
    $pane->pid = 'new-899a461c-aa65-45f0-9359-ade1d6be5e49';
    $pane->panel = 'main_';
    $pane->type = 'views';
    $pane->subtype = 'annotation_counter';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '899a461c-aa65-45f0-9359-ade1d6be5e49';
    $display->content['new-899a461c-aa65-45f0-9359-ade1d6be5e49'] = $pane;
    $display->panels['main_'][1] = 'new-899a461c-aa65-45f0-9359-ade1d6be5e49';
    $pane = new stdClass();
    $pane->pid = 'new-3e7b4e60-3234-4f07-aec5-4ab160ff32ec';
    $pane->panel = 'mid_right';
    $pane->type = 'views';
    $pane->subtype = 'annotation_visualization_highcharts_';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '2016',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e7b4e60-3234-4f07-aec5-4ab160ff32ec';
    $display->content['new-3e7b4e60-3234-4f07-aec5-4ab160ff32ec'] = $pane;
    $display->panels['mid_right'][0] = 'new-3e7b4e60-3234-4f07-aec5-4ab160ff32ec';
    $pane = new stdClass();
    $pane->pid = 'new-1ca63d5e-e597-430c-885f-cb22d60199fc';
    $pane->panel = 'top_left';
    $pane->type = 'views';
    $pane->subtype = 'annotations_by_user';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1ca63d5e-e597-430c-885f-cb22d60199fc';
    $display->content['new-1ca63d5e-e597-430c-885f-cb22d60199fc'] = $pane;
    $display->panels['top_left'][0] = 'new-1ca63d5e-e597-430c-885f-cb22d60199fc';
    $pane = new stdClass();
    $pane->pid = 'new-3a16f43f-84b9-4cdb-a328-4e2e6cf4d758';
    $pane->panel = 'top_right';
    $pane->type = 'views';
    $pane->subtype = 'annotations_by_category';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'page',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3a16f43f-84b9-4cdb-a328-4e2e6cf4d758';
    $display->content['new-3a16f43f-84b9-4cdb-a328-4e2e6cf4d758'] = $pane;
    $display->panels['top_right'][0] = 'new-3a16f43f-84b9-4cdb-a328-4e2e6cf4d758';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3e7b4e60-3234-4f07-aec5-4ab160ff32ec';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['annotation_dashboard'] = $page;

  return $pages;

}
