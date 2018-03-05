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
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '69.97466627691708',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '30.025333723082923',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'right',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
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
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => NULL,
      'two_50_bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cc55f927-fd5d-46ff-a118-667bcffee7c4';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_edit__panel_context_655863e0-1fc1-4931-af43-994388cf7228';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9feacf53-9173-4532-9b5c-c9827cae3120';
  $pane->panel = 'center';
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
  $display->panels['center'][0] = 'new-9feacf53-9173-4532-9b5c-c9827cae3120';
  $pane = new stdClass();
  $pane->pid = 'new-c0680183-e0a4-49b4-bb2b-db375e4358d5';
  $pane->panel = 'center';
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
  $display->panels['center'][1] = 'new-c0680183-e0a4-49b4-bb2b-db375e4358d5';
  $pane = new stdClass();
  $pane->pid = 'new-11eeb20d-2d50-4c20-a37d-b7fe87c11575';
  $pane->panel = 'center';
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
  $display->panels['center'][2] = 'new-11eeb20d-2d50-4c20-a37d-b7fe87c11575';
  $pane = new stdClass();
  $pane->pid = 'new-7356157a-3d77-4211-831e-1bfa9ca14c19';
  $pane->panel = 'center';
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
  $display->panels['center'][3] = 'new-7356157a-3d77-4211-831e-1bfa9ca14c19';
  $pane = new stdClass();
  $pane->pid = 'new-738071e8-e31c-47cf-ae82-8228ff50131e';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_parent_chronology';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '738071e8-e31c-47cf-ae82-8228ff50131e';
  $display->content['new-738071e8-e31c-47cf-ae82-8228ff50131e'] = $pane;
  $display->panels['center'][4] = 'new-738071e8-e31c-47cf-ae82-8228ff50131e';
  $pane = new stdClass();
  $pane->pid = 'new-e9a3c682-ff82-4a81-b00c-24866762c870';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_assoc_places';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'e9a3c682-ff82-4a81-b00c-24866762c870';
  $display->content['new-e9a3c682-ff82-4a81-b00c-24866762c870'] = $pane;
  $display->panels['center'][5] = 'new-e9a3c682-ff82-4a81-b00c-24866762c870';
  $pane = new stdClass();
  $pane->pid = 'new-d371d161-765f-46ce-90f4-e666606f7759';
  $pane->panel = 'center';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:field_event_source';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'd371d161-765f-46ce-90f4-e666606f7759';
  $display->content['new-d371d161-765f-46ce-90f4-e666606f7759'] = $pane;
  $display->panels['center'][6] = 'new-d371d161-765f-46ce-90f4-e666606f7759';
  $pane = new stdClass();
  $pane->pid = 'new-b246e5b8-c662-46f7-8bf6-c0ee17ab6b99';
  $pane->panel = 'center';
  $pane->type = 'form';
  $pane->subtype = 'form';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'b246e5b8-c662-46f7-8bf6-c0ee17ab6b99';
  $display->content['new-b246e5b8-c662-46f7-8bf6-c0ee17ab6b99'] = $pane;
  $display->panels['center'][7] = 'new-b246e5b8-c662-46f7-8bf6-c0ee17ab6b99';
  $pane = new stdClass();
  $pane->pid = 'new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
  $pane->panel = 'center';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
  $display->content['new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96'] = $pane;
  $display->panels['center'][8] = 'new-534b27ce-0c38-43c7-90a4-3c52c7ddaa96';
  $pane = new stdClass();
  $pane->pid = 'new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
  $pane->panel = 'right';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
  $display->content['new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839'] = $pane;
  $display->panels['right'][0] = 'new-8faae890-bc0d-4bc1-b0f2-ec010ef6a839';
  $pane = new stdClass();
  $pane->pid = 'new-e3a9c0c0-a540-4f12-bed9-e0da147be34e';
  $pane->panel = 'right';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e3a9c0c0-a540-4f12-bed9-e0da147be34e';
  $display->content['new-e3a9c0c0-a540-4f12-bed9-e0da147be34e'] = $pane;
  $display->panels['right'][1] = 'new-e3a9c0c0-a540-4f12-bed9-e0da147be34e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit__panel_context_655863e0-1fc1-4931-af43-994388cf7228'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c30434d9-71a1-4d7d-b5ab-0f02888b8532';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'Chronological event',
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
              'chronology_entry' => 'chronology_entry',
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
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => NULL,
      'two_66_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'e4dd4d60-b50f-42be-827d-544e859d9e3f';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e380e634-9b29-4f40-bd7a-e3d719a1acd4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'colorbox',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'colorbox_node_style' => 'gallery_small',
      'colorbox_node_style_first' => '',
      'colorbox_image_style' => '',
      'colorbox_gallery' => 'post',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'leftFloat',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e380e634-9b29-4f40-bd7a-e3d719a1acd4';
  $display->content['new-e380e634-9b29-4f40-bd7a-e3d719a1acd4'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-e380e634-9b29-4f40-bd7a-e3d719a1acd4';
  $pane = new stdClass();
  $pane->pid = 'new-8a0d8122-4952-4c13-b1b5-eb15d369e7e5';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event2';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8a0d8122-4952-4c13-b1b5-eb15d369e7e5';
  $display->content['new-8a0d8122-4952-4c13-b1b5-eb15d369e7e5'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-8a0d8122-4952-4c13-b1b5-eb15d369e7e5';
  $pane = new stdClass();
  $pane->pid = 'new-e80d9431-9ebb-493c-be7e-ba5d4eb1aa2b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'map_per_event-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e80d9431-9ebb-493c-be7e-ba5d4eb1aa2b';
  $display->content['new-e80d9431-9ebb-493c-be7e-ba5d4eb1aa2b'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-e80d9431-9ebb-493c-be7e-ba5d4eb1aa2b';
  $pane = new stdClass();
  $pane->pid = 'new-ce3e242c-adcb-4949-adf1-1cb52e8e8cd9';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Event Date',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div style="display:inline-block; vertical-align:middle;" class="leftFloat"><svg xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink" version="1.1" id="Layer_1" x="0px" y="0px" width="46px" height="46px" viewBox="0 0 512 512" enable-background="new 0 0 512 512" xml:space="preserve">
<path d="M160,256H96v-64h64V256z M288,192h-64v64h64V192z M416,192h-64v64h64V192z M160,288H96v64h64V288z M288,288h-64v64h64V288z   M416,288h-64v64h64V288z M160,384H96v64h64V384z M288,384h-64v64h64V384z M128,96c17.672,0,32-14.313,32-32V32  c0-17.688-14.328-32-32-32S96,14.313,96,32v32C96,81.688,110.328,96,128,96z M512,64v448H0V64h80c0,26.469,21.531,48,48,48  s48-21.531,48-48h160c0,26.469,21.531,48,48,48s48-21.531,48-48H512z M480,160H32v320h448V160z M384,96c17.688,0,32-14.313,32-32V32  c0-17.688-14.313-32-32-32s-32,14.313-32,32v32C352,81.688,366.313,96,384,96z"></path>
</svg></div>
<div class="field">
<h2 class="field-label">Event date:</h2>
<div class="field-items"><div class="field-item even">%node:field_event_date</div></div>
</div>',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'side-meta',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ce3e242c-adcb-4949-adf1-1cb52e8e8cd9';
  $display->content['new-ce3e242c-adcb-4949-adf1-1cb52e8e8cd9'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-ce3e242c-adcb-4949-adf1-1cb52e8e8cd9';
  $pane = new stdClass();
  $pane->pid = 'new-adb4c8f6-7799-4e6c-8371-a5cffad2886d';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_parent_chronology';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'side-meta',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'adb4c8f6-7799-4e6c-8371-a5cffad2886d';
  $display->content['new-adb4c8f6-7799-4e6c-8371-a5cffad2886d'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-adb4c8f6-7799-4e6c-8371-a5cffad2886d';
  $pane = new stdClass();
  $pane->pid = 'new-b5a58f7b-c0f8-4a39-b24c-3601ef58b366';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_event_source';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Source:',
    'override_title_heading' => 'div',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'side-meta',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b5a58f7b-c0f8-4a39-b24c-3601ef58b366';
  $display->content['new-b5a58f7b-c0f8-4a39-b24c-3601ef58b366'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-b5a58f7b-c0f8-4a39-b24c-3601ef58b366';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c30434d9-71a1-4d7d-b5ab-0f02888b8532'] = $handler;

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
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_daeef62f-9ca5-477a-b879-2ee5892dc11b';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'tabs-float',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f67d3ec2-bebb-47e3-97c4-67fef0423449';
  $display->content['new-f67d3ec2-bebb-47e3-97c4-67fef0423449'] = $pane;
  $display->panels['one_main'][0] = 'new-f67d3ec2-bebb-47e3-97c4-67fef0423449';
  $pane = new stdClass();
  $pane->pid = 'new-2d7cb221-a5df-49c3-97b6-31f009ba5ca6';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'add_items_to_this_chronology2-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2d7cb221-a5df-49c3-97b6-31f009ba5ca6';
  $display->content['new-2d7cb221-a5df-49c3-97b6-31f009ba5ca6'] = $pane;
  $display->panels['one_main'][1] = 'new-2d7cb221-a5df-49c3-97b6-31f009ba5ca6';
  $pane = new stdClass();
  $pane->pid = 'new-93a8f8ff-dd31-4bee-9a11-913042a02758';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      1 => array(
        'name' => 'og_member',
        'settings' => array(
          'state' => array(
            1 => '1',
          ),
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
            1 => 4,
            2 => 10,
            3 => 7,
            4 => 9,
            5 => 8,
            6 => 3,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'admin_title' => 'Add items',
    'title' => '',
    'body' => '<ul class="tabs primary"><li><a style="background-color: #279eb2; color: white;" href="/node/add/chronology-entry?field_parent_chronology=%node:nid&destination=/node/%node:nid">+ Add items to this chronology</a></li></ul>',
    'format' => 'unfiltered_html',
    'substitute' => 1,
    'title_heading' => 'h2',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '93a8f8ff-dd31-4bee-9a11-913042a02758';
  $display->content['new-93a8f8ff-dd31-4bee-9a11-913042a02758'] = $pane;
  $display->panels['one_main'][2] = 'new-93a8f8ff-dd31-4bee-9a11-913042a02758';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9226a2ee-6092-4050-a6e2-fa186c65f124';
  $display->content['new-9226a2ee-6092-4050-a6e2-fa186c65f124'] = $pane;
  $display->panels['one_main'][3] = 'new-9226a2ee-6092-4050-a6e2-fa186c65f124';
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
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'group-nav',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2';
  $display->content['new-30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2'] = $pane;
  $display->panels['one_main'][4] = 'new-30407d3d-a8d5-4b4e-b4eb-73d0ed640ad2';
  $pane = new stdClass();
  $pane->pid = 'new-b67140a7-a598-49d0-afa7-60fa1f9e8c56';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_resource_index';
  $pane->shown = FALSE;
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
    'override_title' => 1,
    'override_title_text' => 'Part of Edition:',
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
  $pane->uuid = 'b67140a7-a598-49d0-afa7-60fa1f9e8c56';
  $display->content['new-b67140a7-a598-49d0-afa7-60fa1f9e8c56'] = $pane;
  $display->panels['one_main'][5] = 'new-b67140a7-a598-49d0-afa7-60fa1f9e8c56';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
  $display->content['new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8'] = $pane;
  $display->panels['one_main'][6] = 'new-a3e1eee0-ea20-487c-b1e4-3a142a52c6f8';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
  $display->content['new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871'] = $pane;
  $display->panels['one_main'][7] = 'new-00e6450d-2a7a-4dad-a9e1-4baa9f0c1871';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
  $display->content['new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3'] = $pane;
  $display->panels['one_main'][8] = 'new-b68eb07b-27ba-4b41-bbcf-46bc47ea41b3';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
  $display->content['new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab'] = $pane;
  $display->panels['one_main'][9] = 'new-bd04fcef-563d-481b-a193-b4b3d4c1f7ab';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '824efc0e-b952-4759-8a1b-a02e6c471364';
  $display->content['new-824efc0e-b952-4759-8a1b-a02e6c471364'] = $pane;
  $display->panels['one_main'][10] = 'new-824efc0e-b952-4759-8a1b-a02e6c471364';
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '16a80c4e-4136-4b05-ab30-9a5dc009017f';
  $display->content['new-16a80c4e-4136-4b05-ab30-9a5dc009017f'] = $pane;
  $display->panels['one_main'][11] = 'new-16a80c4e-4136-4b05-ab30-9a5dc009017f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_daeef62f-9ca5-477a-b879-2ee5892dc11b'] = $handler;

  return $export;
}
