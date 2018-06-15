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
      'gallery_filedset' => array(
        'gallery_mode' => 1,
        'thumb_style' => 'gallery_small',
      ),
      'zoom_position_fieldset' => array(
        'zoom_width' => 'auto',
        'zoom_height' => 'auto',
        'position' => 'right',
        'adjust_x' => '0',
        'adjust_y' => '0',
      ),
      'zoom_style_fieldset' => array(
        'tint' => 'false',
        'tint_opacity' => '0.5',
        'lens_opacity' => '0.5',
        'soft_focus' => 0,
        'smooth_move' => '3',
        'Show title' => 1,
        'title_opacity' => '0.5',
      ),
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
    'body' => '<a style="margin-right:25px;text-align:right;" href="%node:field_galleryimage" download>Download full-size image</a>',
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
    'css_class' => '',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3832cf9f-3258-4686-a275-5a4142a460e4';
  $display->content['new-3832cf9f-3258-4686-a275-5a4142a460e4'] = $pane;
  $display->panels['two_66_33_first'][5] = 'new-3832cf9f-3258-4686-a275-5a4142a460e4';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '457c1660-f42d-4776-aa27-5fb8ddebcf7b';
  $display->content['new-457c1660-f42d-4776-aa27-5fb8ddebcf7b'] = $pane;
  $display->panels['two_66_33_first'][6] = 'new-457c1660-f42d-4776-aa27-5fb8ddebcf7b';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'd55d8bca-bb0b-4c93-aff5-3ec8a9e221aa';
  $display->content['new-d55d8bca-bb0b-4c93-aff5-3ec8a9e221aa'] = $pane;
  $display->panels['two_66_33_first'][7] = 'new-d55d8bca-bb0b-4c93-aff5-3ec8a9e221aa';
  $pane = new stdClass();
  $pane->pid = 'new-9de9bc3f-2acb-4e67-9b6a-09e002c9ba89';
  $pane->panel = 'two_66_33_first';
  $pane->type = 'views_panes';
  $pane->subtype = 'map_per_event-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '9de9bc3f-2acb-4e67-9b6a-09e002c9ba89';
  $display->content['new-9de9bc3f-2acb-4e67-9b6a-09e002c9ba89'] = $pane;
  $display->panels['two_66_33_first'][8] = 'new-9de9bc3f-2acb-4e67-9b6a-09e002c9ba89';
  $pane = new stdClass();
  $pane->pid = 'new-8b39ec85-63c2-427c-90bf-c302d617a579';
  $pane->panel = 'two_66_33_first';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '8b39ec85-63c2-427c-90bf-c302d617a579';
  $display->content['new-8b39ec85-63c2-427c-90bf-c302d617a579'] = $pane;
  $display->panels['two_66_33_first'][9] = 'new-8b39ec85-63c2-427c-90bf-c302d617a579';
  $pane = new stdClass();
  $pane->pid = 'new-e3dcaa21-0924-46a4-a4c6-e71b87f1213f';
  $pane->panel = 'two_66_33_second';
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'group-nav noFloat',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'e3dcaa21-0924-46a4-a4c6-e71b87f1213f';
  $display->content['new-e3dcaa21-0924-46a4-a4c6-e71b87f1213f'] = $pane;
  $display->panels['two_66_33_second'][0] = 'new-e3dcaa21-0924-46a4-a4c6-e71b87f1213f';
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
  $pane->pid = 'new-b55c5e37-2202-487b-ac69-ebfd9ee309bd';
  $pane->panel = 'two_66_33_second';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_artist';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b55c5e37-2202-487b-ac69-ebfd9ee309bd';
  $display->content['new-b55c5e37-2202-487b-ac69-ebfd9ee309bd'] = $pane;
  $display->panels['two_66_33_second'][3] = 'new-b55c5e37-2202-487b-ac69-ebfd9ee309bd';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '17053c22-8d3c-4207-b8a7-0383f875c2df';
  $display->content['new-17053c22-8d3c-4207-b8a7-0383f875c2df'] = $pane;
  $display->panels['two_66_33_second'][5] = 'new-17053c22-8d3c-4207-b8a7-0383f875c2df';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '0f7c3372-04aa-41b3-ac43-5826b832d46e';
  $display->content['new-0f7c3372-04aa-41b3-ac43-5826b832d46e'] = $pane;
  $display->panels['two_66_33_second'][6] = 'new-0f7c3372-04aa-41b3-ac43-5826b832d46e';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '7b4bbcfa-f87e-4481-8a30-e41c827cc680';
  $display->content['new-7b4bbcfa-f87e-4481-8a30-e41c827cc680'] = $pane;
  $display->panels['two_66_33_second'][7] = 'new-7b4bbcfa-f87e-4481-8a30-e41c827cc680';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e42a7fde-a523-401d-af54-393a13fd8c57';
  $display->content['new-e42a7fde-a523-401d-af54-393a13fd8c57'] = $pane;
  $display->panels['two_66_33_second'][8] = 'new-e42a7fde-a523-401d-af54-393a13fd8c57';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '7f62865e-76b7-4653-9012-6f584047d8d4';
  $display->content['new-7f62865e-76b7-4653-9012-6f584047d8d4'] = $pane;
  $display->panels['two_66_33_second'][9] = 'new-7f62865e-76b7-4653-9012-6f584047d8d4';
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f1f8aaf5-fb87-4486-b694-3ebfb353a77d';
  $display->content['new-f1f8aaf5-fb87-4486-b694-3ebfb353a77d'] = $pane;
  $display->panels['two_66_33_top'][1] = 'new-f1f8aaf5-fb87-4486-b694-3ebfb353a77d';
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
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => '-1',
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
  $pane->pid = 'new-771abce3-0cf6-4eae-b046-4c027993b7f4';
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
  $pane->uuid = '771abce3-0cf6-4eae-b046-4c027993b7f4';
  $display->content['new-771abce3-0cf6-4eae-b046-4c027993b7f4'] = $pane;
  $display->panels['one_main'][0] = 'new-771abce3-0cf6-4eae-b046-4c027993b7f4';
  $pane = new stdClass();
  $pane->pid = 'new-845f57ad-293a-4b46-b04f-5ba6830956eb';
  $pane->panel = 'one_main';
  $pane->type = 'views_panes';
  $pane->subtype = 'add_images_to_this_exhibit-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '845f57ad-293a-4b46-b04f-5ba6830956eb';
  $display->content['new-845f57ad-293a-4b46-b04f-5ba6830956eb'] = $pane;
  $display->panels['one_main'][1] = 'new-845f57ad-293a-4b46-b04f-5ba6830956eb';
  $pane = new stdClass();
  $pane->pid = 'new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $pane->panel = 'one_main';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $display->content['new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b'] = $pane;
  $display->panels['one_main'][2] = 'new-cdd59f09-0e72-4b7d-8c9f-fb0b61994b8b';
  $pane = new stdClass();
  $pane->pid = 'new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $display->content['new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650'] = $pane;
  $display->panels['one_main'][3] = 'new-b42ae343-5a06-4d25-ac4a-6f0a77bb0650';
  $pane = new stdClass();
  $pane->pid = 'new-b67577fb-6a1e-46db-9154-93cf6ce15296';
  $pane->panel = 'one_main';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'b67577fb-6a1e-46db-9154-93cf6ce15296';
  $display->content['new-b67577fb-6a1e-46db-9154-93cf6ce15296'] = $pane;
  $display->panels['one_main'][4] = 'new-b67577fb-6a1e-46db-9154-93cf6ce15296';
  $pane = new stdClass();
  $pane->pid = 'new-7173a1c3-ce01-4e4d-b41c-02d03d4b9230';
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
    'override_title_heading' => 'h2',
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '7173a1c3-ce01-4e4d-b41c-02d03d4b9230';
  $display->content['new-7173a1c3-ce01-4e4d-b41c-02d03d4b9230'] = $pane;
  $display->panels['one_main'][5] = 'new-7173a1c3-ce01-4e4d-b41c-02d03d4b9230';
  $pane = new stdClass();
  $pane->pid = 'new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $pane->panel = 'one_main';
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $display->content['new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3'] = $pane;
  $display->panels['one_main'][6] = 'new-c3216db0-dbff-44f2-ad17-f4ae45e8cee3';
  $pane = new stdClass();
  $pane->pid = 'new-65c12e34-73fb-4581-a680-58a7817c92d8';
  $pane->panel = 'one_main';
  $pane->type = 'views';
  $pane->subtype = 'gallery_exhibit_images';
  $pane->shown = FALSE;
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '65c12e34-73fb-4581-a680-58a7817c92d8';
  $display->content['new-65c12e34-73fb-4581-a680-58a7817c92d8'] = $pane;
  $display->panels['one_main'][7] = 'new-65c12e34-73fb-4581-a680-58a7817c92d8';
  $pane = new stdClass();
  $pane->pid = 'new-89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $pane->panel = 'one_main';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $display->content['new-89cc1a54-a89b-471f-a45e-5c8bda7518df'] = $pane;
  $display->panels['one_main'][8] = 'new-89cc1a54-a89b-471f-a45e-5c8bda7518df';
  $pane = new stdClass();
  $pane->pid = 'new-3ed72c29-d46b-457f-9421-10d531ed4af5';
  $pane->panel = 'one_main';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_exhibit_tags';
  $pane->shown = FALSE;
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '3ed72c29-d46b-457f-9421-10d531ed4af5';
  $display->content['new-3ed72c29-d46b-457f-9421-10d531ed4af5'] = $pane;
  $display->panels['one_main'][9] = 'new-3ed72c29-d46b-457f-9421-10d531ed4af5';
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
