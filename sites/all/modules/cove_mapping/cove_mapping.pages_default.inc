<?php
/**
 * @file
 * cove_mapping.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_mapping_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__panel_context_3048f3a7-e891-4a20-a374-2b85de04dec3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Place Add',
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
              'place' => 'place',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
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
          0 => 1,
          1 => 'main-row',
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Mapping',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'widget-map-region',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'title_and_desc',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'title_and_desc' => array(
        'type' => 'region',
        'title' => 'Title and Desc',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'helpers',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'helpers' => array(
        'type' => 'region',
        'title' => 'Helpers',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'title_and_desc' => NULL,
      'helpers' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '82e5241d-3bab-420e-a622-075818120baa';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-cab02721-5821-48aa-8745-ca987cf5bf02';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_geocode';
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
  $pane->uuid = 'cab02721-5821-48aa-8745-ca987cf5bf02';
  $display->content['new-cab02721-5821-48aa-8745-ca987cf5bf02'] = $pane;
  $display->panels['center'][0] = 'new-cab02721-5821-48aa-8745-ca987cf5bf02';
  $pane = new stdClass();
  $pane->pid = 'new-e336d619-5855-41a6-a627-068e082f940c';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_place_search';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
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
  $pane->uuid = 'e336d619-5855-41a6-a627-068e082f940c';
  $display->content['new-e336d619-5855-41a6-a627-068e082f940c'] = $pane;
  $display->panels['center'][1] = 'new-e336d619-5855-41a6-a627-068e082f940c';
  $pane = new stdClass();
  $pane->pid = 'new-538934c2-e95c-4b26-b43b-00885854c23e';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_geocoder';
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
  $pane->uuid = '538934c2-e95c-4b26-b43b-00885854c23e';
  $display->content['new-538934c2-e95c-4b26-b43b-00885854c23e'] = $pane;
  $display->panels['center'][2] = 'new-538934c2-e95c-4b26-b43b-00885854c23e';
  $pane = new stdClass();
  $pane->pid = 'new-b94cb89d-58b2-4185-98c9-8801b4a2bb40';
  $pane->panel = 'helpers';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_assoc_events';
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
  $pane->uuid = 'b94cb89d-58b2-4185-98c9-8801b4a2bb40';
  $display->content['new-b94cb89d-58b2-4185-98c9-8801b4a2bb40'] = $pane;
  $display->panels['helpers'][0] = 'new-b94cb89d-58b2-4185-98c9-8801b4a2bb40';
  $pane = new stdClass();
  $pane->pid = 'new-74cad362-ac95-4f4f-9ae4-d571e77a100e';
  $pane->panel = 'helpers';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_resource_index';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 8,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
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
  $pane->uuid = '74cad362-ac95-4f4f-9ae4-d571e77a100e';
  $display->content['new-74cad362-ac95-4f4f-9ae4-d571e77a100e'] = $pane;
  $display->panels['helpers'][1] = 'new-74cad362-ac95-4f4f-9ae4-d571e77a100e';
  $pane = new stdClass();
  $pane->pid = 'new-af3a115c-d4ba-49ba-b24f-0375c1b76d80';
  $pane->panel = 'helpers';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'af3a115c-d4ba-49ba-b24f-0375c1b76d80';
  $display->content['new-af3a115c-d4ba-49ba-b24f-0375c1b76d80'] = $pane;
  $display->panels['helpers'][2] = 'new-af3a115c-d4ba-49ba-b24f-0375c1b76d80';
  $pane = new stdClass();
  $pane->pid = 'new-c0dfc509-fd7e-4026-9793-271d83e53962';
  $pane->panel = 'helpers';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'c0dfc509-fd7e-4026-9793-271d83e53962';
  $display->content['new-c0dfc509-fd7e-4026-9793-271d83e53962'] = $pane;
  $display->panels['helpers'][3] = 'new-c0dfc509-fd7e-4026-9793-271d83e53962';
  $pane = new stdClass();
  $pane->pid = 'new-76754dec-805e-4367-aab2-ba1a90693bc7';
  $pane->panel = 'title_and_desc';
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
  $pane->uuid = '76754dec-805e-4367-aab2-ba1a90693bc7';
  $display->content['new-76754dec-805e-4367-aab2-ba1a90693bc7'] = $pane;
  $display->panels['title_and_desc'][0] = 'new-76754dec-805e-4367-aab2-ba1a90693bc7';
  $pane = new stdClass();
  $pane->pid = 'new-b2db93f7-702d-4916-8fb0-ae2613d254cb';
  $pane->panel = 'title_and_desc';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_parent_map';
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
  $pane->uuid = 'b2db93f7-702d-4916-8fb0-ae2613d254cb';
  $display->content['new-b2db93f7-702d-4916-8fb0-ae2613d254cb'] = $pane;
  $display->panels['title_and_desc'][1] = 'new-b2db93f7-702d-4916-8fb0-ae2613d254cb';
  $pane = new stdClass();
  $pane->pid = 'new-c7cadfac-69e9-4ec3-a41f-98f0ca19acfb';
  $pane->panel = 'title_and_desc';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
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
  $pane->uuid = 'c7cadfac-69e9-4ec3-a41f-98f0ca19acfb';
  $display->content['new-c7cadfac-69e9-4ec3-a41f-98f0ca19acfb'] = $pane;
  $display->panels['title_and_desc'][2] = 'new-c7cadfac-69e9-4ec3-a41f-98f0ca19acfb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-76754dec-805e-4367-aab2-ba1a90693bc7';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_3048f3a7-e891-4a20-a374-2b85de04dec3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__map';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Map',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'map',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'map' => 'map',
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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__map';
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
    'body' => '<ul class="tabs primary"><li><a style="background-color: #279eb2; color: white;" href="/node/add/place?field_parent_map=%node:nid">+ Add places to this map</a></li></ul>',
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
  $pane->pid = 'new-9226a2ee-6092-4050-a6e2-fa186c65f124';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => '',
    'title' => '',
    'body' => '<p>Created by&nbsp;<span><a href="%node:author:url">%node:author</a> on&nbsp;</span><span>%node:created</span></p>',
    'format' => 'unfiltered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'submitted',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '9226a2ee-6092-4050-a6e2-fa186c65f124';
  $display->content['new-9226a2ee-6092-4050-a6e2-fa186c65f124'] = $pane;
  $display->panels['one_main'][2] = 'new-9226a2ee-6092-4050-a6e2-fa186c65f124';
  $pane = new stdClass();
  $pane->pid = 'new-30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:og_group_ref';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
      'colorbox_node_link' => 0,
      'colorbox_node_classes' => '',
      'colorbox_node_width' => '600',
      'colorbox_node_height' => '600',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Part of Group:',
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
  $pane->uuid = '30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2';
  $display->content['new-30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2'] = $pane;
  $display->panels['one_main'][3] = 'new-30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2';
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
    'override_title_text' => 'Created by',
    'override_title_heading' => 'span',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
  $display->content['new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8'] = $pane;
  $display->panels['one_main'][4] = 'new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
  $display->content['new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871'] = $pane;
  $display->panels['one_main'][5] = 'new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
  $display->content['new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3'] = $pane;
  $display->panels['one_main'][6] = 'new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
  $pane = new stdClass();
  $pane->pid = 'new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'custom_timeline-panel_pane_1';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
  $display->content['new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab'] = $pane;
  $display->panels['one_main'][7] = 'new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
  $pane = new stdClass();
  $pane->pid = 'new-824efc0e-b952-4759-8a1b-a02e6c471364';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'custom_timeline-panel_pane_2';
  $pane->shown = FALSE;
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '16a80c4e-4136-4b05-ab30-9a5dc009017f';
  $display->content['new-16a80c4e-4136-4b05-ab30-9a5dc009017f'] = $pane;
  $display->panels['one_main'][9] = 'new-16a80c4e-4136-4b05-ab30-9a5dc009017f';
  $pane = new stdClass();
  $pane->pid = 'new-0bd30478-6210-4f5b-8de8-f1bfd97c10a0';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'custom_map';
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
    'override_title_text' => '',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => '',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '0bd30478-6210-4f5b-8de8-f1bfd97c10a0';
  $display->content['new-0bd30478-6210-4f5b-8de8-f1bfd97c10a0'] = $pane;
  $display->panels['one_main'][10] = 'new-0bd30478-6210-4f5b-8de8-f1bfd97c10a0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__map'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_8ada688c-148f-4276-ac54-62d5000c4de2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Place',
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
              'place' => 'place',
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
  $display->layout = 'two_66_33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ec3553d6-f6ac-4503-9fd5-cab1daa2ccc9';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-7befe152-d4c7-4af8-a4d6-2ab4d40f8cff';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'timeline_per_place-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '7befe152-d4c7-4af8-a4d6-2ab4d40f8cff';
  $display->content['new-7befe152-d4c7-4af8-a4d6-2ab4d40f8cff'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-7befe152-d4c7-4af8-a4d6-2ab4d40f8cff';
  $pane = new stdClass();
  $pane->pid = 'new-3757e759-9d5c-4b9c-9075-7ebcc1f67131';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'views';
  $pane->subtype = 'timeline_per_place';
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '3757e759-9d5c-4b9c-9075-7ebcc1f67131';
  $display->content['new-3757e759-9d5c-4b9c-9075-7ebcc1f67131'] = $pane;
  $display->panels['two_66_33_bottom'][1] = 'new-3757e759-9d5c-4b9c-9075-7ebcc1f67131';
  $pane = new stdClass();
  $pane->pid = 'new-343fc522-bc86-4733-8a4d-8d961272e23f';
  $pane->panel = 'two_66_33_first';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '343fc522-bc86-4733-8a4d-8d961272e23f';
  $display->content['new-343fc522-bc86-4733-8a4d-8d961272e23f'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-343fc522-bc86-4733-8a4d-8d961272e23f';
  $pane = new stdClass();
  $pane->pid = 'new-46f6ccb2-ced0-46e0-86d9-b63ad50a6b5b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_geocode';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'openlayers_geofield',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'data' => 'full',
      'map_layer_preset' => 'openlayers_geofield_map_geofield_formatter:openlayers_geofield_layer_formatter',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '46f6ccb2-ced0-46e0-86d9-b63ad50a6b5b';
  $display->content['new-46f6ccb2-ced0-46e0-86d9-b63ad50a6b5b'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-46f6ccb2-ced0-46e0-86d9-b63ad50a6b5b';
  $pane = new stdClass();
  $pane->pid = 'new-4de367fb-f577-4dc5-88fb-f84f1cbd1af4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_assoc_events';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
      'colorbox_node_link' => 0,
      'colorbox_node_classes' => '',
      'colorbox_node_width' => '600',
      'colorbox_node_height' => '600',
    ),
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4de367fb-f577-4dc5-88fb-f84f1cbd1af4';
  $display->content['new-4de367fb-f577-4dc5-88fb-f84f1cbd1af4'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-4de367fb-f577-4dc5-88fb-f84f1cbd1af4';
  $pane = new stdClass();
  $pane->pid = 'new-d0eb25b8-f478-418f-8a56-75eeeb94b9e5';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_index';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
      'colorbox_node_link' => 0,
      'colorbox_node_classes' => '',
      'colorbox_node_width' => '600',
      'colorbox_node_height' => '600',
    ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd0eb25b8-f478-418f-8a56-75eeeb94b9e5';
  $display->content['new-d0eb25b8-f478-418f-8a56-75eeeb94b9e5'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-d0eb25b8-f478-418f-8a56-75eeeb94b9e5';
  $pane = new stdClass();
  $pane->pid = 'new-2e26aa13-7237-45c0-bf40-a7bc427ac821';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_parent_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
      'colorbox_node_link' => 0,
      'colorbox_node_classes' => '',
      'colorbox_node_width' => '600',
      'colorbox_node_height' => '600',
    ),
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2e26aa13-7237-45c0-bf40-a7bc427ac821';
  $display->content['new-2e26aa13-7237-45c0-bf40-a7bc427ac821'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-2e26aa13-7237-45c0-bf40-a7bc427ac821';
  $pane = new stdClass();
  $pane->pid = 'new-2046b4b8-9692-43d3-a89c-160814c6d71a';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_geocode';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'geofield_latlon',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'data' => 'full',
      'format' => 'decimal_degrees',
      'labels' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Coordinates',
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
  $pane->uuid = '2046b4b8-9692-43d3-a89c-160814c6d71a';
  $display->content['new-2046b4b8-9692-43d3-a89c-160814c6d71a'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-2046b4b8-9692-43d3-a89c-160814c6d71a';
  $pane = new stdClass();
  $pane->pid = 'new-d8bdefe6-4b90-4450-9683-0fb30c5297f0';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 1,
    'markup' => 'none',
    'id' => '',
    'class' => '',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd8bdefe6-4b90-4450-9683-0fb30c5297f0';
  $display->content['new-d8bdefe6-4b90-4450-9683-0fb30c5297f0'] = $pane;
  $display->panels['two_66_33_top'][0] = 'new-d8bdefe6-4b90-4450-9683-0fb30c5297f0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d8bdefe6-4b90-4450-9683-0fb30c5297f0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_8ada688c-148f-4276-ac54-62d5000c4de2'] = $handler;

  return $export;
}
