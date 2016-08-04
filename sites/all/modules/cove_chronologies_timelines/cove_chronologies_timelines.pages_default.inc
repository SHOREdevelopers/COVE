<?php
/**
 * @file
 * cove_chronologies_timelines.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_chronologies_timelines_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_655863e0-1fc1-4931-af43-994388cf7228';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Chronology Add',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'chronology_entry' => 'chronology_entry',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cc55f927-fd5d-46ff-a118-667bcffee7c4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
    $pane->panel = 'two_66_33_bottom';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
    $display->content['new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96'] = $pane;
    $display->panels['two_66_33_bottom'][0] = 'new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
    $pane = new stdClass();
    $pane->pid = 'new-9feacf53-9173-4532-9b5c-c9827cae3120';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'node_form_title';
    $pane->subtype = 'node_form_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = '9feacf53-9173-4532-9b5c-c9827cae3120';
    $display->content['new-9feacf53-9173-4532-9b5c-c9827cae3120'] = $pane;
    $display->panels['two_66_33_first'][0] = 'new-9feacf53-9173-4532-9b5c-c9827cae3120';
    $pane = new stdClass();
    $pane->pid = 'new-c0680183-e0a4-49b4-bb2b-db375e4358d5';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c0680183-e0a4-49b4-bb2b-db375e4358d5';
    $display->content['new-c0680183-e0a4-49b4-bb2b-db375e4358d5'] = $pane;
    $display->panels['two_66_33_first'][1] = 'new-c0680183-e0a4-49b4-bb2b-db375e4358d5';
    $pane = new stdClass();
    $pane->pid = 'new-11eeb20d-2d50-4c20-a37d-b7fe87c11575';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_event2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '11eeb20d-2d50-4c20-a37d-b7fe87c11575';
    $display->content['new-11eeb20d-2d50-4c20-a37d-b7fe87c11575'] = $pane;
    $display->panels['two_66_33_first'][2] = 'new-11eeb20d-2d50-4c20-a37d-b7fe87c11575';
    $pane = new stdClass();
    $pane->pid = 'new-7356157a-3d77-4211-831e-1bfa9ca14c19';
    $pane->panel = 'two_66_33_first';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7356157a-3d77-4211-831e-1bfa9ca14c19';
    $display->content['new-7356157a-3d77-4211-831e-1bfa9ca14c19'] = $pane;
    $display->panels['two_66_33_first'][3] = 'new-7356157a-3d77-4211-831e-1bfa9ca14c19';
    $pane = new stdClass();
    $pane->pid = 'new-e3a9c0c0-a540-4f12-bed9-e0da147be34e';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:field_event_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->uuid = 'e3a9c0c0-a540-4f12-bed9-e0da147be34e';
    $display->content['new-e3a9c0c0-a540-4f12-bed9-e0da147be34e'] = $pane;
    $display->panels['two_66_33_second'][0] = 'new-e3a9c0c0-a540-4f12-bed9-e0da147be34e';
    $pane = new stdClass();
    $pane->pid = 'new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
    $pane->panel = 'two_66_33_second';
    $pane->type = 'entity_form_field';
    $pane->subtype = 'node:group_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => '',
      'formatter' => '',
      'context' => 'argument_node_edit_1',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
    $display->content['new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839'] = $pane;
    $display->panels['two_66_33_second'][1] = 'new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_655863e0-1fc1-4931-af43-994388cf7228'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_daeef62f-9ca5-477a-b879-2ee5892dc11b';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Chronology',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'chronology' => 'chronology',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1188da97-a7f0-4716-a4a0-b6f62d61cc96';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f67d3ec2-bebb-47e3-97c4-67fef0423449';
    $pane->panel = 'one_main';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = 'f67d3ec2-bebb-47e3-97c4-67fef0423449';
    $display->content['new-f67d3ec2-bebb-47e3-97c4-67fef0423449'] = $pane;
    $display->panels['one_main'][0] = 'new-f67d3ec2-bebb-47e3-97c4-67fef0423449';
    $pane = new stdClass();
    $pane->pid = 'new-93a8f8ff-dd31-4bee-9a11-913042a02758';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 5,
              2 => 4,
              3 => 6,
              4 => 7,
              5 => 9,
              6 => 8,
              7 => 10,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Add items',
      'title' => '',
      'body' => '<ul class="tabs primary"><li><a style="background-color: #279eb2; color: white;" href="/node/add/chronology-entry?field_parent_chronology=%node:nid">+ Add items to this chronology</a></li></ul>',
      'format' => 'unfiltered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'chron-tab',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '93a8f8ff-dd31-4bee-9a11-913042a02758';
    $display->content['new-93a8f8ff-dd31-4bee-9a11-913042a02758'] = $pane;
    $display->panels['one_main'][1] = 'new-93a8f8ff-dd31-4bee-9a11-913042a02758';
    $pane = new stdClass();
    $pane->pid = 'new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
    $pane->panel = 'one_main';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Authored by ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
    $display->content['new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8'] = $pane;
    $display->panels['one_main'][2] = 'new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
    $pane = new stdClass();
    $pane->pid = 'new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
    $pane->panel = 'one_main';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'on ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
    $display->content['new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871'] = $pane;
    $display->panels['one_main'][3] = 'new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
    $pane = new stdClass();
    $pane->pid = 'new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
    $display->content['new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3'] = $pane;
    $display->panels['one_main'][4] = 'new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
    $pane = new stdClass();
    $pane->pid = 'new-16a80c4e-4136-4b05-ab30-9a5dc009017f';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:chronology:field_items_in_this_chronology',
          'settings' => array(
            'field_items_in_this_chronology' => array(
              'und' => array(),
            ),
            'field_items_in_this_chronology_target_id' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Table link',
      'title' => '',
      'body' => '<a href="#timeline-table">View as table</a>',
      'format' => 'unfiltered_html',
      'substitute' => 0,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'rightFloat',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '16a80c4e-4136-4b05-ab30-9a5dc009017f';
    $display->content['new-16a80c4e-4136-4b05-ab30-9a5dc009017f'] = $pane;
    $display->panels['one_main'][5] = 'new-16a80c4e-4136-4b05-ab30-9a5dc009017f';
    $pane = new stdClass();
    $pane->pid = 'new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'custom_timeline-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
    $display->content['new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab'] = $pane;
    $display->panels['one_main'][6] = 'new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
    $pane = new stdClass();
    $pane->pid = 'new-394f3a60-e686-4ceb-a0d5-c7606ce430eb';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'custom_timeline';
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
      'display' => 'page_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Chronological Table',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'timeline-table',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '394f3a60-e686-4ceb-a0d5-c7606ce430eb';
    $display->content['new-394f3a60-e686-4ceb-a0d5-c7606ce430eb'] = $pane;
    $display->panels['one_main'][7] = 'new-394f3a60-e686-4ceb-a0d5-c7606ce430eb';
    $pane = new stdClass();
    $pane->pid = 'new-824efc0e-b952-4759-8a1b-a02e6c471364';
    $pane->panel = 'one_main';
    $pane->type = 'views_panes';
    $pane->subtype = 'custom_timeline-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'timeline-table',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '824efc0e-b952-4759-8a1b-a02e6c471364';
    $display->content['new-824efc0e-b952-4759-8a1b-a02e6c471364'] = $pane;
    $display->panels['one_main'][8] = 'new-824efc0e-b952-4759-8a1b-a02e6c471364';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_daeef62f-9ca5-477a-b879-2ee5892dc11b'] = $handler;

  return $export;
}
