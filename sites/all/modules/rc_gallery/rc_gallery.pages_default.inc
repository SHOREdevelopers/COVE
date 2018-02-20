<?php
/**
 * @file
 * rc_gallery.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function rc_gallery_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -23;
  $handler->conf = array(
    'title' => 'Gallery Override',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'gallery_image' => 'gallery_image',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
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
      'middle' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => array(
        'corner_location' => 'panel',
      ),
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => NULL,
    ),
    'right_below' => array(
      'style' => '-1',
    ),
    'right_above' => array(
      'style' => 'rounded_corners',
    ),
    'two_66_33_second' => array(
      'style' => '-1',
    ),
    'two_66_33_bottom' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'eabce23e-fd0f-4236-a18e-1863e4244177';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-64aaff94-37a6-4359-bd82-3ab6896b8271';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_galleryimage';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'cloud_zoom',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'image_style' => 'gallery_node',
      'image_link' => 'file',
      'colorbox_node_style' => 'gallery_node',
      'colorbox_image_style' => '',
      'colorbox_gallery' => 'page',
      'colorbox_gallery_custom' => '',
      'colorbox_caption' => 'auto',
      'colorbox_caption_custom' => '',
      'slide_style' => 'gallery_node',
      'zoom_style' => 'gallery_zoom',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64aaff94-37a6-4359-bd82-3ab6896b8271';
  $display->content['new-64aaff94-37a6-4359-bd82-3ab6896b8271'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-64aaff94-37a6-4359-bd82-3ab6896b8271';
  $pane = new stdClass();
  $pane->pid = 'new-3c027b23-c198-405e-bcc3-f5a9a9758c8d';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Dowload link',
    'title' => '',
    'body' => '<a style="margin-right:25px;" href="%node:field_galleryimage" download>Download full-size image</a>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'right',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '3c027b23-c198-405e-bcc3-f5a9a9758c8d';
  $display->content['new-3c027b23-c198-405e-bcc3-f5a9a9758c8d'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-3c027b23-c198-405e-bcc3-f5a9a9758c8d';
  $pane = new stdClass();
  $pane->pid = 'new-e38245db-2d32-4748-8e86-23b62d0ffcda';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e38245db-2d32-4748-8e86-23b62d0ffcda';
  $display->content['new-e38245db-2d32-4748-8e86-23b62d0ffcda'] = $pane;
  $display->panels['two_66_33_first'][2] = 'new-e38245db-2d32-4748-8e86-23b62d0ffcda';
  $pane = new stdClass();
  $pane->pid = 'new-a1339dd2-e549-4709-a681-6ca56f6925fa';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_copyright';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'a1339dd2-e549-4709-a681-6ca56f6925fa';
  $display->content['new-a1339dd2-e549-4709-a681-6ca56f6925fa'] = $pane;
  $display->panels['two_66_33_first'][3] = 'new-a1339dd2-e549-4709-a681-6ca56f6925fa';
  $pane = new stdClass();
  $pane->pid = 'new-ef139c26-a93d-46bb-9d39-a6e98b6e97a9';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_gallery_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'ef139c26-a93d-46bb-9d39-a6e98b6e97a9';
  $display->content['new-ef139c26-a93d-46bb-9d39-a6e98b6e97a9'] = $pane;
  $display->panels['two_66_33_first'][4] = 'new-ef139c26-a93d-46bb-9d39-a6e98b6e97a9';
  $pane = new stdClass();
  $pane->pid = 'new-983be153-5d7b-40b9-b0af-a0ed966d6ffa';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_primary_works';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '983be153-5d7b-40b9-b0af-a0ed966d6ffa';
  $display->content['new-983be153-5d7b-40b9-b0af-a0ed966d6ffa'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-983be153-5d7b-40b9-b0af-a0ed966d6ffa';
  $pane = new stdClass();
  $pane->pid = 'new-3832cf9f-3258-4686-a275-5a4142a460e4';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_accession_number_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '3832cf9f-3258-4686-a275-5a4142a460e4';
  $display->content['new-3832cf9f-3258-4686-a275-5a4142a460e4'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-3832cf9f-3258-4686-a275-5a4142a460e4';
  $pane = new stdClass();
  $pane->pid = 'new-f6616ed2-b887-402c-a4a9-1f8217037864';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_provenance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f6616ed2-b887-402c-a4a9-1f8217037864';
  $display->content['new-f6616ed2-b887-402c-a4a9-1f8217037864'] = $pane;
  $display->panels['two_66_33_first'][7] = 'new-f6616ed2-b887-402c-a4a9-1f8217037864';
  $pane = new stdClass();
  $pane->pid = 'new-7fd029ef-18c0-4fa3-b309-797c4b08e69d';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_exhibition_history';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7fd029ef-18c0-4fa3-b309-797c4b08e69d';
  $display->content['new-7fd029ef-18c0-4fa3-b309-797c4b08e69d'] = $pane;
  $display->panels['two_66_33_first'][8] = 'new-7fd029ef-18c0-4fa3-b309-797c4b08e69d';
  $pane = new stdClass();
  $pane->pid = 'new-a73002a2-c6df-4aac-a821-e3919a23e33a';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creation_technique_';
  $pane->shown = FALSE;
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
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'a73002a2-c6df-4aac-a821-e3919a23e33a';
  $display->content['new-a73002a2-c6df-4aac-a821-e3919a23e33a'] = $pane;
  $display->panels['two_66_33_first'][9] = 'new-a73002a2-c6df-4aac-a821-e3919a23e33a';
  $pane = new stdClass();
  $pane->pid = 'new-a18168d3-ca53-4961-bd12-3145d1aee296';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creation_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'a18168d3-ca53-4961-bd12-3145d1aee296';
  $display->content['new-a18168d3-ca53-4961-bd12-3145d1aee296'] = $pane;
  $display->panels['two_66_33_first'][10] = 'new-a18168d3-ca53-4961-bd12-3145d1aee296';
  $pane = new stdClass();
  $pane->pid = 'new-457c1660-f42d-4776-aa27-5fb8ddebcf7b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_height_in_centimeters';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '457c1660-f42d-4776-aa27-5fb8ddebcf7b';
  $display->content['new-457c1660-f42d-4776-aa27-5fb8ddebcf7b'] = $pane;
  $display->panels['two_66_33_first'][11] = 'new-457c1660-f42d-4776-aa27-5fb8ddebcf7b';
  $pane = new stdClass();
  $pane->pid = 'new-d55d8bca-bb0b-4c93-aff5-3ec8a9e221aa';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_width_in_centimeters_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'd55d8bca-bb0b-4c93-aff5-3ec8a9e221aa';
  $display->content['new-d55d8bca-bb0b-4c93-aff5-3ec8a9e221aa'] = $pane;
  $display->panels['two_66_33_first'][12] = 'new-d55d8bca-bb0b-4c93-aff5-3ec8a9e221aa';
  $pane = new stdClass();
  $pane->pid = 'new-a361a378-a495-4978-8ece-78561f83079b';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_parts_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'a361a378-a495-4978-8ece-78561f83079b';
  $display->content['new-a361a378-a495-4978-8ece-78561f83079b'] = $pane;
  $display->panels['two_66_33_first'][13] = 'new-a361a378-a495-4978-8ece-78561f83079b';
  $pane = new stdClass();
  $pane->pid = 'new-5f9406c2-5ca6-4cd6-ad2d-8ee76225e102';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_marks_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '5f9406c2-5ca6-4cd6-ad2d-8ee76225e102';
  $display->content['new-5f9406c2-5ca6-4cd6-ad2d-8ee76225e102'] = $pane;
  $display->panels['two_66_33_first'][14] = 'new-5f9406c2-5ca6-4cd6-ad2d-8ee76225e102';
  $pane = new stdClass();
  $pane->pid = 'new-661ede9e-d456-426a-9127-a7ea72ee7aa8';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_edition_and_state';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '661ede9e-d456-426a-9127-a7ea72ee7aa8';
  $display->content['new-661ede9e-d456-426a-9127-a7ea72ee7aa8'] = $pane;
  $display->panels['two_66_33_first'][15] = 'new-661ede9e-d456-426a-9127-a7ea72ee7aa8';
  $pane = new stdClass();
  $pane->pid = 'new-61a739a9-3c0d-411d-ad6e-582c14c81622';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_printing_context';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '61a739a9-3c0d-411d-ad6e-582c14c81622';
  $display->content['new-61a739a9-3c0d-411d-ad6e-582c14c81622'] = $pane;
  $display->panels['two_66_33_first'][16] = 'new-61a739a9-3c0d-411d-ad6e-582c14c81622';
  $pane = new stdClass();
  $pane->pid = 'new-ed43d308-b962-49ff-9e6d-1225fd584dde';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_associated_events';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = 'ed43d308-b962-49ff-9e6d-1225fd584dde';
  $display->content['new-ed43d308-b962-49ff-9e6d-1225fd584dde'] = $pane;
  $display->panels['two_66_33_first'][17] = 'new-ed43d308-b962-49ff-9e6d-1225fd584dde';
  $pane = new stdClass();
  $pane->pid = 'new-8eb08594-64fe-468e-8ad7-0ee36c9d9b58';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_associated_people_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = '8eb08594-64fe-468e-8ad7-0ee36c9d9b58';
  $display->content['new-8eb08594-64fe-468e-8ad7-0ee36c9d9b58'] = $pane;
  $display->panels['two_66_33_first'][18] = 'new-8eb08594-64fe-468e-8ad7-0ee36c9d9b58';
  $pane = new stdClass();
  $pane->pid = 'new-26f7fac9-c936-4279-9520-7e39520cc036';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_associated_places';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '26f7fac9-c936-4279-9520-7e39520cc036';
  $display->content['new-26f7fac9-c936-4279-9520-7e39520cc036'] = $pane;
  $display->panels['two_66_33_first'][19] = 'new-26f7fac9-c936-4279-9520-7e39520cc036';
  $pane = new stdClass();
  $pane->pid = 'new-789335d2-2206-4652-a578-1b074834f7da';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_associated_texts';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '789335d2-2206-4652-a578-1b074834f7da';
  $display->content['new-789335d2-2206-4652-a578-1b074834f7da'] = $pane;
  $display->panels['two_66_33_first'][20] = 'new-789335d2-2206-4652-a578-1b074834f7da';
  $pane = new stdClass();
  $pane->pid = 'new-0df4901a-38b4-4650-bfd2-8bf1b5fe4442';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_subject';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '0df4901a-38b4-4650-bfd2-8bf1b5fe4442';
  $display->content['new-0df4901a-38b4-4650-bfd2-8bf1b5fe4442'] = $pane;
  $display->panels['two_66_33_first'][21] = 'new-0df4901a-38b4-4650-bfd2-8bf1b5fe4442';
  $pane = new stdClass();
  $pane->pid = 'new-9a65dfc9-c8a0-41d7-8e6c-fc03e4a4c8b8';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_theme';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = '9a65dfc9-c8a0-41d7-8e6c-fc03e4a4c8b8';
  $display->content['new-9a65dfc9-c8a0-41d7-8e6c-fc03e4a4c8b8'] = $pane;
  $display->panels['two_66_33_first'][22] = 'new-9a65dfc9-c8a0-41d7-8e6c-fc03e4a4c8b8';
  $pane = new stdClass();
  $pane->pid = 'new-2cac32ab-8126-4dc9-8777-0507a6e38421';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_significance';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = '2cac32ab-8126-4dc9-8777-0507a6e38421';
  $display->content['new-2cac32ab-8126-4dc9-8777-0507a6e38421'] = $pane;
  $display->panels['two_66_33_first'][23] = 'new-2cac32ab-8126-4dc9-8777-0507a6e38421';
  $pane = new stdClass();
  $pane->pid = 'new-c8313728-4748-4716-b534-435e3e994381';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_function';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = 'c8313728-4748-4716-b534-435e3e994381';
  $display->content['new-c8313728-4748-4716-b534-435e3e994381'] = $pane;
  $display->panels['two_66_33_first'][24] = 'new-c8313728-4748-4716-b534-435e3e994381';
  $pane = new stdClass();
  $pane->pid = 'new-ef674020-b7b6-44eb-99ef-3d113853a4a8';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bibliography';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 25;
  $pane->locks = array();
  $pane->uuid = 'ef674020-b7b6-44eb-99ef-3d113853a4a8';
  $display->content['new-ef674020-b7b6-44eb-99ef-3d113853a4a8'] = $pane;
  $display->panels['two_66_33_first'][25] = 'new-ef674020-b7b6-44eb-99ef-3d113853a4a8';
  $pane = new stdClass();
  $pane->pid = 'new-dc45399e-ae4a-4b6e-aaf6-cb3ae36be451';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_long_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 26;
  $pane->locks = array();
  $pane->uuid = 'dc45399e-ae4a-4b6e-aaf6-cb3ae36be451';
  $display->content['new-dc45399e-ae4a-4b6e-aaf6-cb3ae36be451'] = $pane;
  $display->panels['two_66_33_first'][26] = 'new-dc45399e-ae4a-4b6e-aaf6-cb3ae36be451';
  $pane = new stdClass();
  $pane->pid = 'new-58e465ad-4999-4bf6-8400-3f8d2274d8ab';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'flag_link';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'flag_name' => 'gallery_favorite_flag',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '58e465ad-4999-4bf6-8400-3f8d2274d8ab';
  $display->content['new-58e465ad-4999-4bf6-8400-3f8d2274d8ab'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-58e465ad-4999-4bf6-8400-3f8d2274d8ab';
  $pane = new stdClass();
  $pane->pid = 'new-eb55f26d-c7b7-4dcd-8c39-842575b6552b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_featured_in_exhibit';
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
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'admin_title' => 'Error report',
    'title' => '',
    'body' => '<a href="/contact/gallery-error-report>Report an Issue</a>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'eb55f26d-c7b7-4dcd-8c39-842575b6552b';
  $display->content['new-eb55f26d-c7b7-4dcd-8c39-842575b6552b'] = $pane;
  $display->panels['two_66_33_second'][1] = 'new-eb55f26d-c7b7-4dcd-8c39-842575b6552b';
  $pane = new stdClass();
  $pane->pid = 'new-e086ce12-6a56-42e9-826b-7a8cbf940069';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_from_the_collection';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'entityreference_label',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'e086ce12-6a56-42e9-826b-7a8cbf940069';
  $display->content['new-e086ce12-6a56-42e9-826b-7a8cbf940069'] = $pane;
  $display->panels['two_66_33_second'][2] = 'new-e086ce12-6a56-42e9-826b-7a8cbf940069';
  $pane = new stdClass();
  $pane->pid = 'new-b584faa2-0e46-459b-97f7-ba101f94ed31';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b584faa2-0e46-459b-97f7-ba101f94ed31';
  $display->content['new-b584faa2-0e46-459b-97f7-ba101f94ed31'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-b584faa2-0e46-459b-97f7-ba101f94ed31';
  $pane = new stdClass();
  $pane->pid = 'new-9aad04a9-d649-433c-8cda-6af95c3b85e1';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artist_unknown';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:gallery_image:field_artist_unknown',
        'settings' => array(
          'field_artist_unknown' => array(
            'und' => array(
              0 => array(
                'value' => 1,
              ),
            ),
          ),
          'field_artist_unknown_value' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Artist Unknown',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '9aad04a9-d649-433c-8cda-6af95c3b85e1';
  $display->content['new-9aad04a9-d649-433c-8cda-6af95c3b85e1'] = $pane;
  $display->panels['two_66_33_second'][4] = 'new-9aad04a9-d649-433c-8cda-6af95c3b85e1';
  $pane = new stdClass();
  $pane->pid = 'new-15ef166d-16d0-4b6a-8ff5-3d8d20c62343';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_painter';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Painter',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '15ef166d-16d0-4b6a-8ff5-3d8d20c62343';
  $display->content['new-15ef166d-16d0-4b6a-8ff5-3d8d20c62343'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-15ef166d-16d0-4b6a-8ff5-3d8d20c62343';
  $pane = new stdClass();
  $pane->pid = 'new-791dd284-175c-41ec-8a9b-0cb9f04483cc';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_engraver';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Engraver',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '791dd284-175c-41ec-8a9b-0cb9f04483cc';
  $display->content['new-791dd284-175c-41ec-8a9b-0cb9f04483cc'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-791dd284-175c-41ec-8a9b-0cb9f04483cc';
  $pane = new stdClass();
  $pane->pid = 'new-228a27c5-aec1-446b-95c1-90fa2fcfcae8';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_delineator';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Delineator',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '228a27c5-aec1-446b-95c1-90fa2fcfcae8';
  $display->content['new-228a27c5-aec1-446b-95c1-90fa2fcfcae8'] = $pane;
  $display->panels['two_66_33_second'][7] = 'new-228a27c5-aec1-446b-95c1-90fa2fcfcae8';
  $pane = new stdClass();
  $pane->pid = 'new-69b1b6af-3af3-4772-ae39-2cfadfce870b';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_illustrator';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Illustrator',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '69b1b6af-3af3-4772-ae39-2cfadfce870b';
  $display->content['new-69b1b6af-3af3-4772-ae39-2cfadfce870b'] = $pane;
  $display->panels['two_66_33_second'][8] = 'new-69b1b6af-3af3-4772-ae39-2cfadfce870b';
  $pane = new stdClass();
  $pane->pid = 'new-0a57ee94-a64c-4e65-ac22-d4e778426495';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_photographer';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Photographer',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '0a57ee94-a64c-4e65-ac22-d4e778426495';
  $display->content['new-0a57ee94-a64c-4e65-ac22-d4e778426495'] = $pane;
  $display->panels['two_66_33_second'][9] = 'new-0a57ee94-a64c-4e65-ac22-d4e778426495';
  $pane = new stdClass();
  $pane->pid = 'new-b6763bdd-4576-40b6-ab10-9103f0c17564';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Author',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'b6763bdd-4576-40b6-ab10-9103f0c17564';
  $display->content['new-b6763bdd-4576-40b6-ab10-9103f0c17564'] = $pane;
  $display->panels['two_66_33_second'][10] = 'new-b6763bdd-4576-40b6-ab10-9103f0c17564';
  $pane = new stdClass();
  $pane->pid = 'new-75f54061-5209-4389-a5f0-083560ae02dc';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_editor';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Editor',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '75f54061-5209-4389-a5f0-083560ae02dc';
  $display->content['new-75f54061-5209-4389-a5f0-083560ae02dc'] = $pane;
  $display->panels['two_66_33_second'][11] = 'new-75f54061-5209-4389-a5f0-083560ae02dc';
  $pane = new stdClass();
  $pane->pid = 'new-58a9f16b-962d-4315-ae4d-70eeea5d8896';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creator_collaborator';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'entityreference_label',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Collaborator',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '58a9f16b-962d-4315-ae4d-70eeea5d8896';
  $display->content['new-58a9f16b-962d-4315-ae4d-70eeea5d8896'] = $pane;
  $display->panels['two_66_33_second'][12] = 'new-58a9f16b-962d-4315-ae4d-70eeea5d8896';
  $pane = new stdClass();
  $pane->pid = 'new-f22395de-fdd2-40e2-aa38-824db2ddf945';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_text_date';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'f22395de-fdd2-40e2-aa38-824db2ddf945';
  $display->content['new-f22395de-fdd2-40e2-aa38-824db2ddf945'] = $pane;
  $display->panels['two_66_33_second'][13] = 'new-f22395de-fdd2-40e2-aa38-824db2ddf945';
  $pane = new stdClass();
  $pane->pid = 'new-17053c22-8d3c-4207-b8a7-0383f875c2df';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_image_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'partial_date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format' => 'medium',
      'use_override' => 'long',
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
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 14;
  $pane->locks = array();
  $pane->uuid = '17053c22-8d3c-4207-b8a7-0383f875c2df';
  $display->content['new-17053c22-8d3c-4207-b8a7-0383f875c2df'] = $pane;
  $display->panels['two_66_33_second'][14] = 'new-17053c22-8d3c-4207-b8a7-0383f875c2df';
  $pane = new stdClass();
  $pane->pid = 'new-0f7c3372-04aa-41b3-ac43-5826b832d46e';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_publisher';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 15;
  $pane->locks = array();
  $pane->uuid = '0f7c3372-04aa-41b3-ac43-5826b832d46e';
  $display->content['new-0f7c3372-04aa-41b3-ac43-5826b832d46e'] = $pane;
  $display->panels['two_66_33_second'][15] = 'new-0f7c3372-04aa-41b3-ac43-5826b832d46e';
  $pane = new stdClass();
  $pane->pid = 'new-7df4f2f8-5e42-47f1-a4dc-7134228f9fc2';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_original_pub_date';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 16;
  $pane->locks = array();
  $pane->uuid = '7df4f2f8-5e42-47f1-a4dc-7134228f9fc2';
  $display->content['new-7df4f2f8-5e42-47f1-a4dc-7134228f9fc2'] = $pane;
  $display->panels['two_66_33_second'][16] = 'new-7df4f2f8-5e42-47f1-a4dc-7134228f9fc2';
  $pane = new stdClass();
  $pane->pid = 'new-7b4bbcfa-f87e-4481-8a30-e41c827cc680';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_creation_technique_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 17;
  $pane->locks = array();
  $pane->uuid = '7b4bbcfa-f87e-4481-8a30-e41c827cc680';
  $display->content['new-7b4bbcfa-f87e-4481-8a30-e41c827cc680'] = $pane;
  $display->panels['two_66_33_second'][17] = 'new-7b4bbcfa-f87e-4481-8a30-e41c827cc680';
  $pane = new stdClass();
  $pane->pid = 'new-e42a7fde-a523-401d-af54-393a13fd8c57';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_support_medium';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 18;
  $pane->locks = array();
  $pane->uuid = 'e42a7fde-a523-401d-af54-393a13fd8c57';
  $display->content['new-e42a7fde-a523-401d-af54-393a13fd8c57'] = $pane;
  $display->panels['two_66_33_second'][18] = 'new-e42a7fde-a523-401d-af54-393a13fd8c57';
  $pane = new stdClass();
  $pane->pid = 'new-1a7af34b-fc36-41b6-8af3-8f73a8ce10fd';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_agent';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 19;
  $pane->locks = array();
  $pane->uuid = '1a7af34b-fc36-41b6-8af3-8f73a8ce10fd';
  $display->content['new-1a7af34b-fc36-41b6-8af3-8f73a8ce10fd'] = $pane;
  $display->panels['two_66_33_second'][19] = 'new-1a7af34b-fc36-41b6-8af3-8f73a8ce10fd';
  $pane = new stdClass();
  $pane->pid = 'new-987bc16f-de4f-4c10-ba74-b8c1a3018351';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:opencalais_person_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 20;
  $pane->locks = array();
  $pane->uuid = '987bc16f-de4f-4c10-ba74-b8c1a3018351';
  $display->content['new-987bc16f-de4f-4c10-ba74-b8c1a3018351'] = $pane;
  $display->panels['two_66_33_second'][20] = 'new-987bc16f-de4f-4c10-ba74-b8c1a3018351';
  $pane = new stdClass();
  $pane->pid = 'new-8b0abaf8-2b83-4b50-9803-107cfa07a6e7';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_associated_user';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 21;
  $pane->locks = array();
  $pane->uuid = '8b0abaf8-2b83-4b50-9803-107cfa07a6e7';
  $display->content['new-8b0abaf8-2b83-4b50-9803-107cfa07a6e7'] = $pane;
  $display->panels['two_66_33_second'][21] = 'new-8b0abaf8-2b83-4b50-9803-107cfa07a6e7';
  $pane = new stdClass();
  $pane->pid = 'new-647c4616-65cb-49ee-9687-2037928a27ab';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'views';
  $pane->subtype = 'custom_gallery_items';
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 22;
  $pane->locks = array();
  $pane->uuid = '647c4616-65cb-49ee-9687-2037928a27ab';
  $display->content['new-647c4616-65cb-49ee-9687-2037928a27ab'] = $pane;
  $display->panels['two_66_33_second'][22] = 'new-647c4616-65cb-49ee-9687-2037928a27ab';
  $pane = new stdClass();
  $pane->pid = 'new-7f62865e-76b7-4653-9012-6f584047d8d4';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_style';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 23;
  $pane->locks = array();
  $pane->uuid = '7f62865e-76b7-4653-9012-6f584047d8d4';
  $display->content['new-7f62865e-76b7-4653-9012-6f584047d8d4'] = $pane;
  $display->panels['two_66_33_second'][23] = 'new-7f62865e-76b7-4653-9012-6f584047d8d4';
  $pane = new stdClass();
  $pane->pid = 'new-758de361-1e91-484d-b1a2-8c09b554f973';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Gallery Error Report',
    'title' => '',
    'body' => '<a style="font-weight:bold; font-size:110%;" href="/contact/gallery-error-report">Report an Issue</a>',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 24;
  $pane->locks = array();
  $pane->uuid = '758de361-1e91-484d-b1a2-8c09b554f973';
  $display->content['new-758de361-1e91-484d-b1a2-8c09b554f973'] = $pane;
  $display->panels['two_66_33_second'][24] = 'new-758de361-1e91-484d-b1a2-8c09b554f973';
  $pane = new stdClass();
  $pane->pid = 'new-26a167ea-692c-4375-a2c6-02ee3cab92b8';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Context Title',
    'title' => '',
    'body' => '<div class="galleryBanner">Romantic Circles Gallery</div>',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '26a167ea-692c-4375-a2c6-02ee3cab92b8';
  $display->content['new-26a167ea-692c-4375-a2c6-02ee3cab92b8'] = $pane;
  $display->panels['two_66_33_top'][0] = 'new-26a167ea-692c-4375-a2c6-02ee3cab92b8';
  $pane = new stdClass();
  $pane->pid = 'new-030fc4fd-94d5-46ca-b310-33b14b57cf63';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'block';
  $pane->subtype = 'superfish-9';
  $pane->shown = FALSE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '030fc4fd-94d5-46ca-b310-33b14b57cf63';
  $display->content['new-030fc4fd-94d5-46ca-b310-33b14b57cf63'] = $pane;
  $display->panels['two_66_33_top'][1] = 'new-030fc4fd-94d5-46ca-b310-33b14b57cf63';
  $pane = new stdClass();
  $pane->pid = 'new-69d6140e-237f-419a-9c85-ff5731dfa30d';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Extra Break',
    'title' => '',
    'body' => '<br/>',
    'format' => '3',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '69d6140e-237f-419a-9c85-ff5731dfa30d';
  $display->content['new-69d6140e-237f-419a-9c85-ff5731dfa30d'] = $pane;
  $display->panels['two_66_33_top'][2] = 'new-69d6140e-237f-419a-9c85-ff5731dfa30d';
  $pane = new stdClass();
  $pane->pid = 'new-f1f8aaf5-fb87-4486-b694-3ebfb353a77d';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'node-title',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f1f8aaf5-fb87-4486-b694-3ebfb353a77d';
  $display->content['new-f1f8aaf5-fb87-4486-b694-3ebfb353a77d'] = $pane;
  $display->panels['two_66_33_top'][3] = 'new-f1f8aaf5-fb87-4486-b694-3ebfb353a77d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Gallery Exhibit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'galler_exhibit' => 'galler_exhibit',
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
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'two_66_33_bottom' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3c8dece5-2be3-43cd-9308-aeee62b9e815';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_3';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-65c12e34-73fb-4581-a680-58a7817c92d8';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'display' => 'default',
    'override_title' => 0,
    'override_title_text' => 'Image Thumbnails',
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '65c12e34-73fb-4581-a680-58a7817c92d8';
  $display->content['new-65c12e34-73fb-4581-a680-58a7817c92d8'] = $pane;
  $display->panels['two_66_33_bottom'][0] = 'new-65c12e34-73fb-4581-a680-58a7817c92d8';
  $pane = new stdClass();
  $pane->pid = 'new-89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $pane->panel = 'two_66_33_bottom';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(),
  );
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
    'display' => 'default',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $display->content['new-89cc1a54-a89b-471f-a45e-5c8bda7518df'] = $pane;
  $display->panels['two_66_33_bottom'][1] = 'new-89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $pane = new stdClass();
  $pane->pid = 'new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_description';
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
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $display->content['new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3'] = $pane;
  $display->panels['two_66_33_first'][0] = 'new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $pane = new stdClass();
  $pane->pid = 'new-6dcfffab-d64e-4d6a-b51d-40c8a38aa804';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_credits';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Exhibit Created by',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6dcfffab-d64e-4d6a-b51d-40c8a38aa804';
  $display->content['new-6dcfffab-d64e-4d6a-b51d-40c8a38aa804'] = $pane;
  $display->panels['two_66_33_first'][1] = 'new-6dcfffab-d64e-4d6a-b51d-40c8a38aa804';
  $pane = new stdClass();
  $pane->pid = 'new-3ed72c29-d46b-457f-9421-10d531ed4af5';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_exhibit_tags';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_link',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ed72c29-d46b-457f-9421-10d531ed4af5';
  $display->content['new-3ed72c29-d46b-457f-9421-10d531ed4af5'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-3ed72c29-d46b-457f-9421-10d531ed4af5';
  $pane = new stdClass();
  $pane->pid = 'new-c2f34875-fa06-4f4d-8e78-c963b984ae60';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Context Title',
    'title' => '',
    'body' => '<div class="galleryBanner">Gallery Exhibits</div>',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c2f34875-fa06-4f4d-8e78-c963b984ae60';
  $display->content['new-c2f34875-fa06-4f4d-8e78-c963b984ae60'] = $pane;
  $display->panels['two_66_33_top'][0] = 'new-c2f34875-fa06-4f4d-8e78-c963b984ae60';
  $pane = new stdClass();
  $pane->pid = 'new-dd66ac06-882b-4ad1-aba7-03cda2668618';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'block';
  $pane->subtype = 'superfish-9';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'dd66ac06-882b-4ad1-aba7-03cda2668618';
  $display->content['new-dd66ac06-882b-4ad1-aba7-03cda2668618'] = $pane;
  $display->panels['two_66_33_top'][1] = 'new-dd66ac06-882b-4ad1-aba7-03cda2668618';
  $pane = new stdClass();
  $pane->pid = 'new-dcc922aa-f0a0-43f8-a970-7c135a19f030';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Extra Break',
    'title' => '',
    'body' => '<br />',
    'format' => '3',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'dcc922aa-f0a0-43f8-a970-7c135a19f030';
  $display->content['new-dcc922aa-f0a0-43f8-a970-7c135a19f030'] = $pane;
  $display->panels['two_66_33_top'][2] = 'new-dcc922aa-f0a0-43f8-a970-7c135a19f030';
  $pane = new stdClass();
  $pane->pid = 'new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Exhibit: ',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'node-title',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $display->content['new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b'] = $pane;
  $display->panels['two_66_33_top'][3] = 'new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $pane = new stdClass();
  $pane->pid = 'new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images';
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
    'override_title_text' => 'Image Preview',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
    'style' => 'default',
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'galleryContribRegion',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $display->content['new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650'] = $pane;
  $display->panels['two_66_33_top'][4] = 'new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $pane = new stdClass();
  $pane->pid = 'new-b67577fb-6a1e-46db-9154-93cf6ce15296';
  $pane->panel = 'two_66_33_top';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images_2';
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
    'display' => 'block_2',
    'context' => array(
      0 => '',
    ),
    'override_title' => 0,
    'override_title_text' => '',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'galleryContribRegion',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'b67577fb-6a1e-46db-9154-93cf6ce15296';
  $display->content['new-b67577fb-6a1e-46db-9154-93cf6ce15296'] = $pane;
  $display->panels['two_66_33_top'][5] = 'new-b67577fb-6a1e-46db-9154-93cf6ce15296';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Gallery Collection',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'collection' => 'collection',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
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
  $display->title = '%node:title';
  $display->uuid = 'fc67ce19-b969-4543-94a2-ebc5b4b16e49';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view_panel_context_4';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6e0b3084-cab4-41f4-9142-e53d7cd72cb8';
  $pane->panel = 'one_main';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Collection:',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'node-title',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6e0b3084-cab4-41f4-9142-e53d7cd72cb8';
  $display->content['new-6e0b3084-cab4-41f4-9142-e53d7cd72cb8'] = $pane;
  $display->panels['one_main'][0] = 'new-6e0b3084-cab4-41f4-9142-e53d7cd72cb8';
  $pane = new stdClass();
  $pane->pid = 'new-42e19fe5-a469-4896-8b9b-f2f4f06e6222';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'gallery_collection_images';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => 'Images in this Collection',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '42e19fe5-a469-4896-8b9b-f2f4f06e6222';
  $display->content['new-42e19fe5-a469-4896-8b9b-f2f4f06e6222'] = $pane;
  $display->panels['one_main'][1] = 'new-42e19fe5-a469-4896-8b9b-f2f4f06e6222';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
