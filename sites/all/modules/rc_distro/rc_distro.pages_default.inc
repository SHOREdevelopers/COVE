<?php
/**
 * @file
 * rc_distro.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function rc_distro_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Contributor Panel',
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
              'contributor' => 'contributor',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e07b5e1-714d-494e-95a3-8d3fc5be0711';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-18aa9ade-d528-47bd-8742-ee661ca11ddd';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'print-print-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'print-link',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '18aa9ade-d528-47bd-8742-ee661ca11ddd';
    $display->content['new-18aa9ade-d528-47bd-8742-ee661ca11ddd'] = $pane;
    $display->panels['middle'][0] = 'new-18aa9ade-d528-47bd-8742-ee661ca11ddd';
    $pane = new stdClass();
    $pane->pid = 'new-cacdfca0-e059-4a36-acdf-96bd950d79a9';
    $pane->panel = 'middle';
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
    $pane->uuid = 'cacdfca0-e059-4a36-acdf-96bd950d79a9';
    $display->content['new-cacdfca0-e059-4a36-acdf-96bd950d79a9'] = $pane;
    $display->panels['middle'][1] = 'new-cacdfca0-e059-4a36-acdf-96bd950d79a9';
    $pane = new stdClass();
    $pane->pid = 'new-68695e56-05de-4920-a47d-16e882840b1d';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'profile_picture_caption';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '68695e56-05de-4920-a47d-16e882840b1d';
    $display->content['new-68695e56-05de-4920-a47d-16e882840b1d'] = $pane;
    $display->panels['middle'][2] = 'new-68695e56-05de-4920-a47d-16e882840b1d';
    $pane = new stdClass();
    $pane->pid = 'new-246bb37b-aac7-4325-bc68-b0403aaa01ec';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_profile_picture';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'colorbox',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'colorbox_node_style' => 'medium',
        'colorbox_image_style' => '',
        'colorbox_gallery' => 'none',
        'colorbox_gallery_custom' => '',
        'colorbox_caption' => 'auto',
        'colorbox_caption_custom' => '',
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
      'css_class' => 'leftFloat',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '246bb37b-aac7-4325-bc68-b0403aaa01ec';
    $display->content['new-246bb37b-aac7-4325-bc68-b0403aaa01ec'] = $pane;
    $display->panels['middle'][3] = 'new-246bb37b-aac7-4325-bc68-b0403aaa01ec';
    $pane = new stdClass();
    $pane->pid = 'new-6247ec85-562a-42ac-b200-6314aff61781';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bio';
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '6247ec85-562a-42ac-b200-6314aff61781';
    $display->content['new-6247ec85-562a-42ac-b200-6314aff61781'] = $pane;
    $display->panels['middle'][4] = 'new-6247ec85-562a-42ac-b200-6314aff61781';
    $pane = new stdClass();
    $pane->pid = 'new-ebdbdc19-22e4-4f68-95fe-2e31dfc62310';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_special_roles_rc';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 0,
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
    $pane->uuid = 'ebdbdc19-22e4-4f68-95fe-2e31dfc62310';
    $display->content['new-ebdbdc19-22e4-4f68-95fe-2e31dfc62310'] = $pane;
    $display->panels['middle'][5] = 'new-ebdbdc19-22e4-4f68-95fe-2e31dfc62310';
    $pane = new stdClass();
    $pane->pid = 'new-bcba73f1-dbf4-40c4-aba0-6d098c1df204';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_at_rc2';
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
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '%node:title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'bcba73f1-dbf4-40c4-aba0-6d098c1df204';
    $display->content['new-bcba73f1-dbf4-40c4-aba0-6d098c1df204'] = $pane;
    $display->panels['middle'][6] = 'new-bcba73f1-dbf4-40c4-aba0-6d098c1df204';
    $pane = new stdClass();
    $pane->pid = 'new-c1589a65-952d-4a62-882d-5644516f3a65';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'contributors';
    $pane->shown = TRUE;
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
      'override_title' => 1,
      'override_title_text' => 'Pages Authored at RC',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'c1589a65-952d-4a62-882d-5644516f3a65';
    $display->content['new-c1589a65-952d-4a62-882d-5644516f3a65'] = $pane;
    $display->panels['middle'][7] = 'new-c1589a65-952d-4a62-882d-5644516f3a65';
    $pane = new stdClass();
    $pane->pid = 'new-66af32e5-05ea-4e23-bf43-d628245fda2b';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'poems_in_poets_on_poets';
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
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Poems in Poets on Poets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '66af32e5-05ea-4e23-bf43-d628245fda2b';
    $display->content['new-66af32e5-05ea-4e23-bf43-d628245fda2b'] = $pane;
    $display->panels['middle'][8] = 'new-66af32e5-05ea-4e23-bf43-d628245fda2b';
    $pane = new stdClass();
    $pane->pid = 'new-50e8d615-57b3-4fdf-bbf4-943e6b753222';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_edited_at_rc';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'forthcoming_resource' => 'forthcoming_resource',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '50e8d615-57b3-4fdf-bbf4-943e6b753222';
    $display->content['new-50e8d615-57b3-4fdf-bbf4-943e6b753222'] = $pane;
    $display->panels['middle'][9] = 'new-50e8d615-57b3-4fdf-bbf4-943e6b753222';
    $pane = new stdClass();
    $pane->pid = 'new-2d5ab141-305a-4de6-973e-4a20cb0cad88';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'edited_at_rc';
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
      'display' => 'default',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => 'Edited at RC',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '2d5ab141-305a-4de6-973e-4a20cb0cad88';
    $display->content['new-2d5ab141-305a-4de6-973e-4a20cb0cad88'] = $pane;
    $display->panels['middle'][10] = 'new-2d5ab141-305a-4de6-973e-4a20cb0cad88';
    $pane = new stdClass();
    $pane->pid = 'new-dd4a6107-988b-4e1e-bbe0-1f3bf75b96a9';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'essays_etc_authored_at_rc';
    $pane->shown = TRUE;
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
      'override_title' => 1,
      'override_title_text' => 'Essays, etc. Authored at RC',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = 'dd4a6107-988b-4e1e-bbe0-1f3bf75b96a9';
    $display->content['new-dd4a6107-988b-4e1e-bbe0-1f3bf75b96a9'] = $pane;
    $display->panels['middle'][11] = 'new-dd4a6107-988b-4e1e-bbe0-1f3bf75b96a9';
    $pane = new stdClass();
    $pane->pid = 'new-29144f90-2b81-4ac1-8fb4-551d754ae285';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_audio_content_by';
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '29144f90-2b81-4ac1-8fb4-551d754ae285';
    $display->content['new-29144f90-2b81-4ac1-8fb4-551d754ae285'] = $pane;
    $display->panels['middle'][12] = 'new-29144f90-2b81-4ac1-8fb4-551d754ae285';
    $pane = new stdClass();
    $pane->pid = 'new-f10e508b-4c7a-48fe-a093-8a31ca377873';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_technical_edited';
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
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = 'f10e508b-4c7a-48fe-a093-8a31ca377873';
    $display->content['new-f10e508b-4c7a-48fe-a093-8a31ca377873'] = $pane;
    $display->panels['middle'][13] = 'new-f10e508b-4c7a-48fe-a093-8a31ca377873';
    $pane = new stdClass();
    $pane->pid = 'new-3134182c-5021-4058-971d-535a800f1337';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_9';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = '3134182c-5021-4058-971d-535a800f1337';
    $display->content['new-3134182c-5021-4058-971d-535a800f1337'] = $pane;
    $display->panels['middle'][14] = 'new-3134182c-5021-4058-971d-535a800f1337';
    $pane = new stdClass();
    $pane->pid = 'new-7ed9f6b7-cda4-468a-af76-a3508fef371b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Painted',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '7ed9f6b7-cda4-468a-af76-a3508fef371b';
    $display->content['new-7ed9f6b7-cda4-468a-af76-a3508fef371b'] = $pane;
    $display->panels['middle'][15] = 'new-7ed9f6b7-cda4-468a-af76-a3508fef371b';
    $pane = new stdClass();
    $pane->pid = 'new-1b7ed615-83fb-4b1b-8452-3ae3f2c6932a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Illustrated',
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '1b7ed615-83fb-4b1b-8452-3ae3f2c6932a';
    $display->content['new-1b7ed615-83fb-4b1b-8452-3ae3f2c6932a'] = $pane;
    $display->panels['middle'][16] = 'new-1b7ed615-83fb-4b1b-8452-3ae3f2c6932a';
    $pane = new stdClass();
    $pane->pid = 'new-3429f490-c53d-4669-af52-8f753f5eff30';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Engraved',
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = '3429f490-c53d-4669-af52-8f753f5eff30';
    $display->content['new-3429f490-c53d-4669-af52-8f753f5eff30'] = $pane;
    $display->panels['middle'][17] = 'new-3429f490-c53d-4669-af52-8f753f5eff30';
    $pane = new stdClass();
    $pane->pid = 'new-c5a95240-aecc-4577-81ae-e330ba26441b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Delineated',
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
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = 'c5a95240-aecc-4577-81ae-e330ba26441b';
    $display->content['new-c5a95240-aecc-4577-81ae-e330ba26441b'] = $pane;
    $display->panels['middle'][18] = 'new-c5a95240-aecc-4577-81ae-e330ba26441b';
    $pane = new stdClass();
    $pane->pid = 'new-55fb89fa-c4b6-441b-8579-45fa03c6e07d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Photographed',
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
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = '55fb89fa-c4b6-441b-8579-45fa03c6e07d';
    $display->content['new-55fb89fa-c4b6-441b-8579-45fa03c6e07d'] = $pane;
    $display->panels['middle'][19] = 'new-55fb89fa-c4b6-441b-8579-45fa03c6e07d';
    $pane = new stdClass();
    $pane->pid = 'new-be9ba31c-2752-451e-b687-7c9b8dce0556';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Work Editor',
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
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = 'be9ba31c-2752-451e-b687-7c9b8dce0556';
    $display->content['new-be9ba31c-2752-451e-b687-7c9b8dce0556'] = $pane;
    $display->panels['middle'][20] = 'new-be9ba31c-2752-451e-b687-7c9b8dce0556';
    $pane = new stdClass();
    $pane->pid = 'new-231b19bf-60c9-48da-89f1-cf085a2e0f5f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_8';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Work Collaborated On',
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
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '231b19bf-60c9-48da-89f1-cf085a2e0f5f';
    $display->content['new-231b19bf-60c9-48da-89f1-cf085a2e0f5f'] = $pane;
    $display->panels['middle'][21] = 'new-231b19bf-60c9-48da-89f1-cf085a2e0f5f';
    $pane = new stdClass();
    $pane->pid = 'new-d3380e0d-34b7-4ece-a43f-c2e01afe146a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'gallery_contributor_section-panel_pane_7';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Work Illustrated In',
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
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = 'd3380e0d-34b7-4ece-a43f-c2e01afe146a';
    $display->content['new-d3380e0d-34b7-4ece-a43f-c2e01afe146a'] = $pane;
    $display->panels['middle'][22] = 'new-d3380e0d-34b7-4ece-a43f-c2e01afe146a';
    $pane = new stdClass();
    $pane->pid = 'new-ff748b46-dec0-4c55-a9df-67a502191d3c';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_curated_exhibits';
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
    $pane->position = 23;
    $pane->locks = array();
    $pane->uuid = 'ff748b46-dec0-4c55-a9df-67a502191d3c';
    $display->content['new-ff748b46-dec0-4c55-a9df-67a502191d3c'] = $pane;
    $display->panels['middle'][23] = 'new-ff748b46-dec0-4c55-a9df-67a502191d3c';
    $pane = new stdClass();
    $pane->pid = 'new-a2e5b7df-6fb3-48e1-86ab-b5f3a825d498';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_job_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 24;
    $pane->locks = array();
    $pane->uuid = 'a2e5b7df-6fb3-48e1-86ab-b5f3a825d498';
    $display->content['new-a2e5b7df-6fb3-48e1-86ab-b5f3a825d498'] = $pane;
    $display->panels['middle'][24] = 'new-a2e5b7df-6fb3-48e1-86ab-b5f3a825d498';
    $pane = new stdClass();
    $pane->pid = 'new-896946fa-4dbb-40a3-8116-38351ddb8644';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_affiliation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = '896946fa-4dbb-40a3-8116-38351ddb8644';
    $display->content['new-896946fa-4dbb-40a3-8116-38351ddb8644'] = $pane;
    $display->panels['middle'][25] = 'new-896946fa-4dbb-40a3-8116-38351ddb8644';
    $pane = new stdClass();
    $pane->pid = 'new-2dd97d0f-729f-420c-b9f7-69551d665311';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_academic_interests';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 26;
    $pane->locks = array();
    $pane->uuid = '2dd97d0f-729f-420c-b9f7-69551d665311';
    $display->content['new-2dd97d0f-729f-420c-b9f7-69551d665311'] = $pane;
    $display->panels['middle'][26] = 'new-2dd97d0f-729f-420c-b9f7-69551d665311';
    $pane = new stdClass();
    $pane->pid = 'new-47d36b97-0e55-462b-8e48-7301a97e2e99';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_home_page';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'link_default',
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
    $pane->position = 27;
    $pane->locks = array();
    $pane->uuid = '47d36b97-0e55-462b-8e48-7301a97e2e99';
    $display->content['new-47d36b97-0e55-462b-8e48-7301a97e2e99'] = $pane;
    $display->panels['middle'][27] = 'new-47d36b97-0e55-462b-8e48-7301a97e2e99';
    $pane = new stdClass();
    $pane->pid = 'new-e4fa6136-e852-4d1f-8079-98c925b27cde';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_associated_tags';
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
    $pane->position = 28;
    $pane->locks = array();
    $pane->uuid = 'e4fa6136-e852-4d1f-8079-98c925b27cde';
    $display->content['new-e4fa6136-e852-4d1f-8079-98c925b27cde'] = $pane;
    $display->panels['middle'][28] = 'new-e4fa6136-e852-4d1f-8079-98c925b27cde';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_10';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -21;
  $handler->conf = array(
    'title' => 'Person Override',
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
              'person' => 'person',
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
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_50_25_25_top' => NULL,
      'three_50_25_25_first' => NULL,
      'three_50_25_25_second' => NULL,
      'three_50_25_25_third' => NULL,
      'three_50_25_25_bottom' => NULL,
      'three_33_second' => array(
        'corner_location' => 'panel',
      ),
      'three_33_third' => array(
        'corner_location' => 'panel',
      ),
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_bottom' => NULL,
    ),
    'three_33_second' => array(
      'style' => 'rounded_corners',
    ),
    'three_33_third' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '28708944-695c-4d09-a0d7-a0896a5a9ed6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f35053cd-6356-43da-a0ca-3f425495fdaf';
    $pane->panel = 'three_33_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_bio';
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
    $pane->uuid = 'f35053cd-6356-43da-a0ca-3f425495fdaf';
    $display->content['new-f35053cd-6356-43da-a0ca-3f425495fdaf'] = $pane;
    $display->panels['three_33_first'][0] = 'new-f35053cd-6356-43da-a0ca-3f425495fdaf';
    $pane = new stdClass();
    $pane->pid = 'new-a49fff9e-c994-45c7-b576-b7c43ae5e5b1';
    $pane->panel = 'three_33_second';
    $pane->type = 'views';
    $pane->subtype = 'place_mentioned_in';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a49fff9e-c994-45c7-b576-b7c43ae5e5b1';
    $display->content['new-a49fff9e-c994-45c7-b576-b7c43ae5e5b1'] = $pane;
    $display->panels['three_33_second'][0] = 'new-a49fff9e-c994-45c7-b576-b7c43ae5e5b1';
    $pane = new stdClass();
    $pane->pid = 'new-b82bc2ce-f941-4643-a213-2395b1e7e25d';
    $pane->panel = 'three_33_third';
    $pane->type = 'views';
    $pane->subtype = 'place_mentioned_in';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b82bc2ce-f941-4643-a213-2395b1e7e25d';
    $display->content['new-b82bc2ce-f941-4643-a213-2395b1e7e25d'] = $pane;
    $display->panels['three_33_third'][0] = 'new-b82bc2ce-f941-4643-a213-2395b1e7e25d';
    $pane = new stdClass();
    $pane->pid = 'new-75d2c982-29e5-40fe-9f88-8fd38d90776b';
    $pane->panel = 'three_33_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '75d2c982-29e5-40fe-9f88-8fd38d90776b';
    $display->content['new-75d2c982-29e5-40fe-9f88-8fd38d90776b'] = $pane;
    $display->panels['three_33_top'][0] = 'new-75d2c982-29e5-40fe-9f88-8fd38d90776b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-75d2c982-29e5-40fe-9f88-8fd38d90776b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_10'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'Page Content Override',
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
              'editions_page' => 'editions_page',
              'forthcoming_page' => 'forthcoming_page',
              'pedagogies_page' => 'pedagogies_page',
              'praxis_page' => 'praxis_page',
              'reference_page' => 'reference_page',
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
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'middle' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1100ddf4-501f-496f-8181-8c2dee32c320';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f3b10d0-411f-4a55-b2f3-c9bec5597708';
    $pane->panel = 'middle';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = FALSE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f3b10d0-411f-4a55-b2f3-c9bec5597708';
    $display->content['new-3f3b10d0-411f-4a55-b2f3-c9bec5597708'] = $pane;
    $display->panels['middle'][0] = 'new-3f3b10d0-411f-4a55-b2f3-c9bec5597708';
    $pane = new stdClass();
    $pane->pid = 'new-3c99c643-6df4-4a97-b59a-e30dc76eda1f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'praxis_sidebar_icon';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '3c99c643-6df4-4a97-b59a-e30dc76eda1f';
    $display->content['new-3c99c643-6df4-4a97-b59a-e30dc76eda1f'] = $pane;
    $display->panels['middle'][1] = 'new-3c99c643-6df4-4a97-b59a-e30dc76eda1f';
    $pane = new stdClass();
    $pane->pid = 'new-95fb9a89-2e5c-4753-b60b-eb425d1e138a';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Printer friendly links',
      'title' => '',
      'body' => '<?php

print print_insert_link();  print print_mail_insert_link();

?>',
      'format' => '8',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'alignright',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '95fb9a89-2e5c-4753-b60b-eb425d1e138a';
    $display->content['new-95fb9a89-2e5c-4753-b60b-eb425d1e138a'] = $pane;
    $display->panels['middle'][2] = 'new-95fb9a89-2e5c-4753-b60b-eb425d1e138a';
    $pane = new stdClass();
    $pane->pid = 'new-b6b36c16-2c0d-427a-8d5b-4b762118c3e5';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'print-print-links';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = 'b6b36c16-2c0d-427a-8d5b-4b762118c3e5';
    $display->content['new-b6b36c16-2c0d-427a-8d5b-4b762118c3e5'] = $pane;
    $display->panels['middle'][3] = 'new-b6b36c16-2c0d-427a-8d5b-4b762118c3e5';
    $pane = new stdClass();
    $pane->pid = 'new-9722cf7c-3412-446a-bcd3-b5c3c90fc658';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'interior_banner';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
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
    $pane->uuid = '9722cf7c-3412-446a-bcd3-b5c3c90fc658';
    $display->content['new-9722cf7c-3412-446a-bcd3-b5c3c90fc658'] = $pane;
    $display->panels['middle'][4] = 'new-9722cf7c-3412-446a-bcd3-b5c3c90fc658';
    $pane = new stdClass();
    $pane->pid = 'new-d2b57b7f-984e-40a5-b35f-03d8a6360096';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'abstracts';
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
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'd2b57b7f-984e-40a5-b35f-03d8a6360096';
    $display->content['new-d2b57b7f-984e-40a5-b35f-03d8a6360096'] = $pane;
    $display->panels['middle'][5] = 'new-d2b57b7f-984e-40a5-b35f-03d8a6360096';
    $pane = new stdClass();
    $pane->pid = 'new-a5449c9b-919b-4594-b802-f19d396de20c';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'about_the_author_s_';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
      'display' => 'block',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'a5449c9b-919b-4594-b802-f19d396de20c';
    $display->content['new-a5449c9b-919b-4594-b802-f19d396de20c'] = $pane;
    $display->panels['middle'][6] = 'new-a5449c9b-919b-4594-b802-f19d396de20c';
    $pane = new stdClass();
    $pane->pid = 'new-09676316-2dc2-45bc-9bb6-89565804042a';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'node_metadata';
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
      'display' => 'block_1',
      'context' => array(
        0 => '',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = '09676316-2dc2-45bc-9bb6-89565804042a';
    $display->content['new-09676316-2dc2-45bc-9bb6-89565804042a'] = $pane;
    $display->panels['middle'][7] = 'new-09676316-2dc2-45bc-9bb6-89565804042a';
    $pane = new stdClass();
    $pane->pid = 'new-5c0f29c4-6f58-4aae-a1cc-a5b45e6f624f';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'admin_title' => 'Horizontal line',
      'title' => '',
      'body' => '<div style="width: 100%; height: 1px; background: #D3D7EB; overflow: hidden; margin-bottom:17px;">',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '5c0f29c4-6f58-4aae-a1cc-a5b45e6f624f';
    $display->content['new-5c0f29c4-6f58-4aae-a1cc-a5b45e6f624f'] = $pane;
    $display->panels['middle'][8] = 'new-5c0f29c4-6f58-4aae-a1cc-a5b45e6f624f';
    $pane = new stdClass();
    $pane->pid = 'new-eb81f4ed-cb88-4324-b412-89d342deca61';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_xml_tei';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'link_default',
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
    $pane->uuid = 'eb81f4ed-cb88-4324-b412-89d342deca61';
    $display->content['new-eb81f4ed-cb88-4324-b412-89d342deca61'] = $pane;
    $display->panels['middle'][9] = 'new-eb81f4ed-cb88-4324-b412-89d342deca61';
    $pane = new stdClass();
    $pane->pid = 'new-4bcf682e-be16-4679-9826-b9908c2d58ac';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_index';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'praxis_page' => 'praxis_page',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
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
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'boldblueBig center',
    );
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '4bcf682e-be16-4679-9826-b9908c2d58ac';
    $display->content['new-4bcf682e-be16-4679-9826-b9908c2d58ac'] = $pane;
    $display->panels['middle'][10] = 'new-4bcf682e-be16-4679-9826-b9908c2d58ac';
    $pane = new stdClass();
    $pane->pid = 'new-1eea8c58-b920-47c3-abd8-86218b6c70bd';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_embed_code';
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '1eea8c58-b920-47c3-abd8-86218b6c70bd';
    $display->content['new-1eea8c58-b920-47c3-abd8-86218b6c70bd'] = $pane;
    $display->panels['middle'][11] = 'new-1eea8c58-b920-47c3-abd8-86218b6c70bd';
    $pane = new stdClass();
    $pane->pid = 'new-26661139-a981-43d8-bbb7-ccccfd2a0957';
    $pane->panel = 'middle';
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
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'bodyFloat',
    );
    $pane->extras = array();
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '26661139-a981-43d8-bbb7-ccccfd2a0957';
    $display->content['new-26661139-a981-43d8-bbb7-ccccfd2a0957'] = $pane;
    $display->panels['middle'][12] = 'new-26661139-a981-43d8-bbb7-ccccfd2a0957';
    $pane = new stdClass();
    $pane->pid = 'new-c0071c49-9c09-4a5f-be88-4c1514942e4c';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'treewalk-treewalk_menu_prev_next';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'reference/island/*',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
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
    $pane->uuid = 'c0071c49-9c09-4a5f-be88-4c1514942e4c';
    $display->content['new-c0071c49-9c09-4a5f-be88-4c1514942e4c'] = $pane;
    $display->panels['middle'][13] = 'new-c0071c49-9c09-4a5f-be88-4c1514942e4c';
    $pane = new stdClass();
    $pane->pid = 'new-a1b0ba3e-301d-4bb3-9550-ff452713744c';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:praxis_page:field_authored_by_secondary_',
          'settings' => array(
            'type' => array(),
          ),
          'context' => '',
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About this Page',
      'body' => '<!-- -->',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'teaserItemSimple',
    );
    $pane->extras = array();
    $pane->position = 14;
    $pane->locks = array();
    $pane->uuid = 'a1b0ba3e-301d-4bb3-9550-ff452713744c';
    $display->content['new-a1b0ba3e-301d-4bb3-9550-ff452713744c'] = $pane;
    $display->panels['middle'][14] = 'new-a1b0ba3e-301d-4bb3-9550-ff452713744c';
    $pane = new stdClass();
    $pane->pid = 'new-fbad1f2f-917f-4092-ae3e-fb3cea298045';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by_primary_';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = 'fbad1f2f-917f-4092-ae3e-fb3cea298045';
    $display->content['new-fbad1f2f-917f-4092-ae3e-fb3cea298045'] = $pane;
    $display->panels['middle'][15] = 'new-fbad1f2f-917f-4092-ae3e-fb3cea298045';
    $pane = new stdClass();
    $pane->pid = 'new-5700ac5e-2d0d-4e50-b50a-b2402c09fd88';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by_secondary_';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '5700ac5e-2d0d-4e50-b50a-b2402c09fd88';
    $display->content['new-5700ac5e-2d0d-4e50-b50a-b2402c09fd88'] = $pane;
    $display->panels['middle'][16] = 'new-5700ac5e-2d0d-4e50-b50a-b2402c09fd88';
    $pane = new stdClass();
    $pane->pid = 'new-c89ba5a5-08aa-4e44-978e-bfb240a65a93';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_original_publication_date';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'rc_published_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->position = 17;
    $pane->locks = array();
    $pane->uuid = 'c89ba5a5-08aa-4e44-978e-bfb240a65a93';
    $display->content['new-c89ba5a5-08aa-4e44-978e-bfb240a65a93'] = $pane;
    $display->panels['middle'][17] = 'new-c89ba5a5-08aa-4e44-978e-bfb240a65a93';
    $pane = new stdClass();
    $pane->pid = 'new-289d00ac-33c2-4bb8-9d16-3530d0e84876';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_published';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'rc_published_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Published @ RC',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 18;
    $pane->locks = array();
    $pane->uuid = '289d00ac-33c2-4bb8-9d16-3530d0e84876';
    $display->content['new-289d00ac-33c2-4bb8-9d16-3530d0e84876'] = $pane;
    $display->panels['middle'][18] = 'new-289d00ac-33c2-4bb8-9d16-3530d0e84876';
    $pane = new stdClass();
    $pane->pid = 'new-23e1fde1-4070-4046-bc16-bcf33472e32f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'related_resources_algorithmic';
    $pane->shown = FALSE;
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
      'display' => 'block_1',
      'context' => array(
        0 => '',
        1 => '',
        2 => '',
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
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = '23e1fde1-4070-4046-bc16-bcf33472e32f';
    $display->content['new-23e1fde1-4070-4046-bc16-bcf33472e32f'] = $pane;
    $display->panels['middle'][19] = 'new-23e1fde1-4070-4046-bc16-bcf33472e32f';
    $pane = new stdClass();
    $pane->pid = 'new-52da75f4-ca72-4b42-8b70-5ded03b75811';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'pages_also_of_interest';
    $pane->shown = FALSE;
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
      'display' => 'block_1',
      'context' => array(
        0 => '',
        1 => '',
        2 => '',
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
    $pane->position = 20;
    $pane->locks = array();
    $pane->uuid = '52da75f4-ca72-4b42-8b70-5ded03b75811';
    $display->content['new-52da75f4-ca72-4b42-8b70-5ded03b75811'] = $pane;
    $display->panels['middle'][20] = 'new-52da75f4-ca72-4b42-8b70-5ded03b75811';
    $pane = new stdClass();
    $pane->pid = 'new-5b9abaa6-ce1b-4377-81f7-2b5e032ab209';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:taxonomy_vocabulary_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '5b9abaa6-ce1b-4377-81f7-2b5e032ab209';
    $display->content['new-5b9abaa6-ce1b-4377-81f7-2b5e032ab209'] = $pane;
    $display->panels['middle'][21] = 'new-5b9abaa6-ce1b-4377-81f7-2b5e032ab209';
    $pane = new stdClass();
    $pane->pid = 'new-78ba1f9b-97b3-49f0-ab20-b2e57111f2fa';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_person_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = '78ba1f9b-97b3-49f0-ab20-b2e57111f2fa';
    $display->content['new-78ba1f9b-97b3-49f0-ab20-b2e57111f2fa'] = $pane;
    $display->panels['middle'][22] = 'new-78ba1f9b-97b3-49f0-ab20-b2e57111f2fa';
    $pane = new stdClass();
    $pane->pid = 'new-9b6a72a9-6ddc-4020-a089-771eff01e0d5';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_city_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = '9b6a72a9-6ddc-4020-a089-771eff01e0d5';
    $display->content['new-9b6a72a9-6ddc-4020-a089-771eff01e0d5'] = $pane;
    $display->panels['middle'][23] = 'new-9b6a72a9-6ddc-4020-a089-771eff01e0d5';
    $pane = new stdClass();
    $pane->pid = 'new-085b318d-c85d-4f4e-a987-57aad45dc60e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_provinceorstate_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 24;
    $pane->locks = array();
    $pane->uuid = '085b318d-c85d-4f4e-a987-57aad45dc60e';
    $display->content['new-085b318d-c85d-4f4e-a987-57aad45dc60e'] = $pane;
    $display->panels['middle'][24] = 'new-085b318d-c85d-4f4e-a987-57aad45dc60e';
    $pane = new stdClass();
    $pane->pid = 'new-6ccf56fc-a9b5-4545-a21e-927289ada2a7';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_country_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 25;
    $pane->locks = array();
    $pane->uuid = '6ccf56fc-a9b5-4545-a21e-927289ada2a7';
    $display->content['new-6ccf56fc-a9b5-4545-a21e-927289ada2a7'] = $pane;
    $display->panels['middle'][25] = 'new-6ccf56fc-a9b5-4545-a21e-927289ada2a7';
    $pane = new stdClass();
    $pane->pid = 'new-4eff4430-3450-4b35-bf96-4f02482a3a3e';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_region_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 26;
    $pane->locks = array();
    $pane->uuid = '4eff4430-3450-4b35-bf96-4f02482a3a3e';
    $display->content['new-4eff4430-3450-4b35-bf96-4f02482a3a3e'] = $pane;
    $display->panels['middle'][26] = 'new-4eff4430-3450-4b35-bf96-4f02482a3a3e';
    $pane = new stdClass();
    $pane->pid = 'new-512e3124-8e8f-4415-9fec-ff326b5ccfee';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_continent_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 27;
    $pane->locks = array();
    $pane->uuid = '512e3124-8e8f-4415-9fec-ff326b5ccfee';
    $display->content['new-512e3124-8e8f-4415-9fec-ff326b5ccfee'] = $pane;
    $display->panels['middle'][27] = 'new-512e3124-8e8f-4415-9fec-ff326b5ccfee';
    $pane = new stdClass();
    $pane->pid = 'new-414eca9e-ceb5-47fe-bbf5-f727fc0367f6';
    $pane->panel = 'middle';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_naturalfeature_tags';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '28581',
                ),
              ),
            ),
            'field_resource_index_target_id' => '28581',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'entity_field_value:node:editions_page:field_resource_index',
          'settings' => array(
            'field_resource_index' => array(
              'und' => array(
                0 => array(
                  'target_id' => '48556',
                ),
              ),
            ),
            'field_resource_index_target_id' => '48556',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 28;
    $pane->locks = array();
    $pane->uuid = '414eca9e-ceb5-47fe-bbf5-f727fc0367f6';
    $display->content['new-414eca9e-ceb5-47fe-bbf5-f727fc0367f6'] = $pane;
    $display->panels['middle'][28] = 'new-414eca9e-ceb5-47fe-bbf5-f727fc0367f6';
    $pane = new stdClass();
    $pane->pid = 'new-3389e1b0-fbdc-468c-9c81-c739d8a164ee';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'map_per_node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
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
      'override_title' => 1,
      'override_title_text' => 'Map',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 29;
    $pane->locks = array();
    $pane->uuid = '3389e1b0-fbdc-468c-9c81-c739d8a164ee';
    $display->content['new-3389e1b0-fbdc-468c-9c81-c739d8a164ee'] = $pane;
    $display->panels['middle'][29] = 'new-3389e1b0-fbdc-468c-9c81-c739d8a164ee';
    $pane = new stdClass();
    $pane->pid = 'new-9b2fc8ee-cf0e-4f3f-a3cf-217317b86d1c';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'places_mentioned';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->position = 30;
    $pane->locks = array();
    $pane->uuid = '9b2fc8ee-cf0e-4f3f-a3cf-217317b86d1c';
    $display->content['new-9b2fc8ee-cf0e-4f3f-a3cf-217317b86d1c'] = $pane;
    $display->panels['middle'][30] = 'new-9b2fc8ee-cf0e-4f3f-a3cf-217317b86d1c';
    $pane = new stdClass();
    $pane->pid = 'new-c46c2088-620f-4d01-94b1-d6763308191e';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'places_mentioned';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 9,
              2 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 31;
    $pane->locks = array();
    $pane->uuid = 'c46c2088-620f-4d01-94b1-d6763308191e';
    $display->content['new-c46c2088-620f-4d01-94b1-d6763308191e'] = $pane;
    $display->panels['middle'][31] = 'new-c46c2088-620f-4d01-94b1-d6763308191e';
    $pane = new stdClass();
    $pane->pid = 'new-35f8b12a-0589-448e-a2a4-e05b3db270df';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'places_mentioned';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 9,
              2 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 32;
    $pane->locks = array();
    $pane->uuid = '35f8b12a-0589-448e-a2a4-e05b3db270df';
    $display->content['new-35f8b12a-0589-448e-a2a4-e05b3db270df'] = $pane;
    $display->panels['middle'][32] = 'new-35f8b12a-0589-448e-a2a4-e05b3db270df';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_7';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'Resource Content Override',
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
              'editions_index_page' => 'editions_index_page',
              'forthcoming_resource' => 'forthcoming_resource',
              'pedagogies_index_page' => 'pedagogies_index_page',
              'praxis_index_page' => 'praxis_index_page',
              'reference_index_page' => 'reference_index_page',
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
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'two_66_33_bottom' => NULL,
      'one_main' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'fbb61608-6eec-498f-965a-f21d3cf90bc6';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d04d0886-52cb-4edd-9335-d8bb5e4b5656';
    $pane->panel = 'one_main';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = FALSE;
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
    $pane->uuid = 'd04d0886-52cb-4edd-9335-d8bb5e4b5656';
    $display->content['new-d04d0886-52cb-4edd-9335-d8bb5e4b5656'] = $pane;
    $display->panels['one_main'][0] = 'new-d04d0886-52cb-4edd-9335-d8bb5e4b5656';
    $pane = new stdClass();
    $pane->pid = 'new-970e2d32-6006-4335-8800-a945a6eb6d0f';
    $pane->panel = 'one_main';
    $pane->type = 'block';
    $pane->subtype = 'print-print-links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
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
    $pane->uuid = '970e2d32-6006-4335-8800-a945a6eb6d0f';
    $display->content['new-970e2d32-6006-4335-8800-a945a6eb6d0f'] = $pane;
    $display->panels['one_main'][1] = 'new-970e2d32-6006-4335-8800-a945a6eb6d0f';
    $pane = new stdClass();
    $pane->pid = 'new-9b21ff5c-a0b6-4aac-9916-07ba289abd4b';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_index_banner';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'index_banner',
        'image_link' => 'content',
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9b21ff5c-a0b6-4aac-9916-07ba289abd4b';
    $display->content['new-9b21ff5c-a0b6-4aac-9916-07ba289abd4b'] = $pane;
    $display->panels['one_main'][2] = 'new-9b21ff5c-a0b6-4aac-9916-07ba289abd4b';
    $pane = new stdClass();
    $pane->pid = 'new-51c9fb0b-e8c8-4c68-bc49-24306886ca18';
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
      'override_title' => 1,
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
    $pane->uuid = '51c9fb0b-e8c8-4c68-bc49-24306886ca18';
    $display->content['new-51c9fb0b-e8c8-4c68-bc49-24306886ca18'] = $pane;
    $display->panels['one_main'][3] = 'new-51c9fb0b-e8c8-4c68-bc49-24306886ca18';
    $pane = new stdClass();
    $pane->pid = 'new-4f1c4084-07fa-4687-a36a-f1f3ed5559f2';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'related_resources_algorithmic';
    $pane->shown = FALSE;
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
      'display' => 'block_1',
      'context' => array(
        0 => '',
        1 => '',
        2 => '',
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '4f1c4084-07fa-4687-a36a-f1f3ed5559f2';
    $display->content['new-4f1c4084-07fa-4687-a36a-f1f3ed5559f2'] = $pane;
    $display->panels['one_main'][4] = 'new-4f1c4084-07fa-4687-a36a-f1f3ed5559f2';
    $pane = new stdClass();
    $pane->pid = 'new-df16af5a-cdd5-4937-a9aa-00bb86a813cb';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'pages_also_of_interest';
    $pane->shown = FALSE;
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
      'display' => 'block_1',
      'context' => array(
        0 => '',
        1 => '',
        2 => '',
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
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'df16af5a-cdd5-4937-a9aa-00bb86a813cb';
    $display->content['new-df16af5a-cdd5-4937-a9aa-00bb86a813cb'] = $pane;
    $display->panels['one_main'][5] = 'new-df16af5a-cdd5-4937-a9aa-00bb86a813cb';
    $pane = new stdClass();
    $pane->pid = 'new-74b41a01-37a7-4430-ba2e-ab1ffaed52d8';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'About this Resource',
      'body' => '<!-- -->',
      'format' => '3',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'teaserItemSimple',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '74b41a01-37a7-4430-ba2e-ab1ffaed52d8';
    $display->content['new-74b41a01-37a7-4430-ba2e-ab1ffaed52d8'] = $pane;
    $display->panels['one_main'][6] = 'new-74b41a01-37a7-4430-ba2e-ab1ffaed52d8';
    $pane = new stdClass();
    $pane->pid = 'new-b7dbbe15-24dc-444c-ba0a-15972db0d409';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_main_author';
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
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'b7dbbe15-24dc-444c-ba0a-15972db0d409';
    $display->content['new-b7dbbe15-24dc-444c-ba0a-15972db0d409'] = $pane;
    $display->panels['one_main'][7] = 'new-b7dbbe15-24dc-444c-ba0a-15972db0d409';
    $pane = new stdClass();
    $pane->pid = 'new-05ae587a-b8fb-45dd-8639-557525e2b847';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by_primary_';
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
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '05ae587a-b8fb-45dd-8639-557525e2b847';
    $display->content['new-05ae587a-b8fb-45dd-8639-557525e2b847'] = $pane;
    $display->panels['one_main'][8] = 'new-05ae587a-b8fb-45dd-8639-557525e2b847';
    $pane = new stdClass();
    $pane->pid = 'new-8091229c-488f-44cc-a039-08974ac0b456';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by_secondary_';
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
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Author',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '8091229c-488f-44cc-a039-08974ac0b456';
    $display->content['new-8091229c-488f-44cc-a039-08974ac0b456'] = $pane;
    $display->panels['one_main'][9] = 'new-8091229c-488f-44cc-a039-08974ac0b456';
    $pane = new stdClass();
    $pane->pid = 'new-11682180-fdfb-4a42-81e6-288f58f5dbf2';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_edited_by';
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
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Editor',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 10;
    $pane->locks = array();
    $pane->uuid = '11682180-fdfb-4a42-81e6-288f58f5dbf2';
    $display->content['new-11682180-fdfb-4a42-81e6-288f58f5dbf2'] = $pane;
    $display->panels['one_main'][10] = 'new-11682180-fdfb-4a42-81e6-288f58f5dbf2';
    $pane = new stdClass();
    $pane->pid = 'new-90624d19-8096-4164-998b-5ca7b5c33b2b';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_original_publication_date';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:forthcoming_resource:taxonomy_vocabulary_52',
          'settings' => array(
            'taxonomy_vocabulary_52' => array(
              'und' => array(
                0 => array(
                  'tid' => '27206',
                ),
              ),
            ),
            'taxonomy_vocabulary_52_tid' => '27206',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format_type' => 'rc_published_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
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
    $pane->position = 11;
    $pane->locks = array();
    $pane->uuid = '90624d19-8096-4164-998b-5ca7b5c33b2b';
    $display->content['new-90624d19-8096-4164-998b-5ca7b5c33b2b'] = $pane;
    $display->panels['one_main'][11] = 'new-90624d19-8096-4164-998b-5ca7b5c33b2b';
    $pane = new stdClass();
    $pane->pid = 'new-180551d0-4cb8-4e72-9d9d-1cb65724a07c';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_partial_publication_date';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:forthcoming_resource:taxonomy_vocabulary_52',
          'settings' => array(
            'taxonomy_vocabulary_52' => array(
              'und' => array(
                0 => array(
                  'tid' => '27206',
                ),
              ),
            ),
            'taxonomy_vocabulary_52_tid' => '27206',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'partial_date_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'format' => 'long',
        'use_override' => 'long',
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
    $pane->position = 12;
    $pane->locks = array();
    $pane->uuid = '180551d0-4cb8-4e72-9d9d-1cb65724a07c';
    $display->content['new-180551d0-4cb8-4e72-9d9d-1cb65724a07c'] = $pane;
    $display->panels['one_main'][12] = 'new-180551d0-4cb8-4e72-9d9d-1cb65724a07c';
    $pane = new stdClass();
    $pane->pid = 'new-74557542-4553-42d5-9ff4-72097eeb3f01';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_published';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'rc_published_date',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Published @ RC',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 13;
    $pane->locks = array();
    $pane->uuid = '74557542-4553-42d5-9ff4-72097eeb3f01';
    $display->content['new-74557542-4553-42d5-9ff4-72097eeb3f01'] = $pane;
    $display->panels['one_main'][13] = 'new-74557542-4553-42d5-9ff4-72097eeb3f01';
    $pane = new stdClass();
    $pane->pid = 'new-008f2765-0309-4362-9253-ac9539c1e80d';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_resource_technical_editor';
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
    $pane->uuid = '008f2765-0309-4362-9253-ac9539c1e80d';
    $display->content['new-008f2765-0309-4362-9253-ac9539c1e80d'] = $pane;
    $display->panels['one_main'][14] = 'new-008f2765-0309-4362-9253-ac9539c1e80d';
    $pane = new stdClass();
    $pane->pid = 'new-191f2732-72ad-4680-825e-cca2ad159714';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:taxonomy_vocabulary_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 15;
    $pane->locks = array();
    $pane->uuid = '191f2732-72ad-4680-825e-cca2ad159714';
    $display->content['new-191f2732-72ad-4680-825e-cca2ad159714'] = $pane;
    $display->panels['one_main'][15] = 'new-191f2732-72ad-4680-825e-cca2ad159714';
    $pane = new stdClass();
    $pane->pid = 'new-55453172-ec6e-40c8-9939-ada06c149c5e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_person_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 16;
    $pane->locks = array();
    $pane->uuid = '55453172-ec6e-40c8-9939-ada06c149c5e';
    $display->content['new-55453172-ec6e-40c8-9939-ada06c149c5e'] = $pane;
    $display->panels['one_main'][16] = 'new-55453172-ec6e-40c8-9939-ada06c149c5e';
    $pane = new stdClass();
    $pane->pid = 'new-4fa28087-1cf4-4794-9302-5f9630b05b19';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_city_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = '4fa28087-1cf4-4794-9302-5f9630b05b19';
    $display->content['new-4fa28087-1cf4-4794-9302-5f9630b05b19'] = $pane;
    $display->panels['one_main'][17] = 'new-4fa28087-1cf4-4794-9302-5f9630b05b19';
    $pane = new stdClass();
    $pane->pid = 'new-0efff848-40c0-44b3-887e-018da502eafd';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_provinceorstate_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = '0efff848-40c0-44b3-887e-018da502eafd';
    $display->content['new-0efff848-40c0-44b3-887e-018da502eafd'] = $pane;
    $display->panels['one_main'][18] = 'new-0efff848-40c0-44b3-887e-018da502eafd';
    $pane = new stdClass();
    $pane->pid = 'new-700507cc-750b-4ca3-90be-a6d1d416c480';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_country_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 19;
    $pane->locks = array();
    $pane->uuid = '700507cc-750b-4ca3-90be-a6d1d416c480';
    $display->content['new-700507cc-750b-4ca3-90be-a6d1d416c480'] = $pane;
    $display->panels['one_main'][19] = 'new-700507cc-750b-4ca3-90be-a6d1d416c480';
    $pane = new stdClass();
    $pane->pid = 'new-dae150b3-592f-452f-9a1b-d33572d8969e';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_region_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->uuid = 'dae150b3-592f-452f-9a1b-d33572d8969e';
    $display->content['new-dae150b3-592f-452f-9a1b-d33572d8969e'] = $pane;
    $display->panels['one_main'][20] = 'new-dae150b3-592f-452f-9a1b-d33572d8969e';
    $pane = new stdClass();
    $pane->pid = 'new-8654c827-e6c1-4666-bf18-9d424a7e69f8';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_continent_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 21;
    $pane->locks = array();
    $pane->uuid = '8654c827-e6c1-4666-bf18-9d424a7e69f8';
    $display->content['new-8654c827-e6c1-4666-bf18-9d424a7e69f8'] = $pane;
    $display->panels['one_main'][21] = 'new-8654c827-e6c1-4666-bf18-9d424a7e69f8';
    $pane = new stdClass();
    $pane->pid = 'new-1913b145-7581-43de-9b4f-c65fb1c32995';
    $pane->panel = 'one_main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:opencalais_naturalfeature_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
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
    $pane->position = 22;
    $pane->locks = array();
    $pane->uuid = '1913b145-7581-43de-9b4f-c65fb1c32995';
    $display->content['new-1913b145-7581-43de-9b4f-c65fb1c32995'] = $pane;
    $display->panels['one_main'][22] = 'new-1913b145-7581-43de-9b4f-c65fb1c32995';
    $pane = new stdClass();
    $pane->pid = 'new-c32ec274-74d7-4ef0-81d9-a17b6d6e5a99';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'map_per_node';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
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
      'override_title' => 1,
      'override_title_text' => 'Map',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 23;
    $pane->locks = array();
    $pane->uuid = 'c32ec274-74d7-4ef0-81d9-a17b6d6e5a99';
    $display->content['new-c32ec274-74d7-4ef0-81d9-a17b6d6e5a99'] = $pane;
    $display->panels['one_main'][23] = 'new-c32ec274-74d7-4ef0-81d9-a17b6d6e5a99';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_7'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_9';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -22;
  $handler->conf = array(
    'title' => 'Place Override',
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
          'name' => 'entity_bundle:node',
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
  $display->layout = 'two_50';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_50_25_25_top' => NULL,
      'three_50_25_25_first' => NULL,
      'three_50_25_25_third' => NULL,
      'three_50_25_25_bottom' => NULL,
      'three_50_25_25_second' => NULL,
      'two_50_top' => NULL,
      'two_50_first' => NULL,
      'two_50_second' => array(
        'corner_location' => 'panel',
      ),
      'two_50_bottom' => NULL,
    ),
    'three_50_25_25_second' => array(
      'style' => '-1',
    ),
    'two_50_first' => array(
      'style' => '-1',
    ),
    'two_50_second' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cf2ddab7-1008-46f4-94d0-b7d816b8b034';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-05e82a0b-35ff-439c-80ab-77723eae343e';
    $pane->panel = 'two_50_first';
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '05e82a0b-35ff-439c-80ab-77723eae343e';
    $display->content['new-05e82a0b-35ff-439c-80ab-77723eae343e'] = $pane;
    $display->panels['two_50_first'][0] = 'new-05e82a0b-35ff-439c-80ab-77723eae343e';
    $pane = new stdClass();
    $pane->pid = 'new-4196d8c4-9b55-4728-94c7-ef6032020cd7';
    $pane->panel = 'two_50_first';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_latitude_longitude';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'geofield_openlayers',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'data' => 'full',
        'map_preset' => 'geofield_formatter_map',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '4196d8c4-9b55-4728-94c7-ef6032020cd7';
    $display->content['new-4196d8c4-9b55-4728-94c7-ef6032020cd7'] = $pane;
    $display->panels['two_50_first'][1] = 'new-4196d8c4-9b55-4728-94c7-ef6032020cd7';
    $pane = new stdClass();
    $pane->pid = 'new-12c4461e-3303-46cf-981c-656120c093ea';
    $pane->panel = 'two_50_second';
    $pane->type = 'views';
    $pane->subtype = 'place_mentioned_in';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '20',
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12c4461e-3303-46cf-981c-656120c093ea';
    $display->content['new-12c4461e-3303-46cf-981c-656120c093ea'] = $pane;
    $display->panels['two_50_second'][0] = 'new-12c4461e-3303-46cf-981c-656120c093ea';
    $pane = new stdClass();
    $pane->pid = 'new-5cedc8ae-1af5-4242-82a2-5a78e02714d9';
    $pane->panel = 'two_50_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
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
    $pane->uuid = '5cedc8ae-1af5-4242-82a2-5a78e02714d9';
    $display->content['new-5cedc8ae-1af5-4242-82a2-5a78e02714d9'] = $pane;
    $display->panels['two_50_top'][0] = 'new-5cedc8ae-1af5-4242-82a2-5a78e02714d9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-05e82a0b-35ff-439c-80ab-77723eae343e';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_9'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function rc_distro_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'index_of_contributors';
  $page->task = 'page';
  $page->admin_title = 'Index of Contributors';
  $page->admin_description = 'Overrides the Index of Contributors page';
  $page->path = 'node/22324';
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
  $handler->name = 'page_index_of_contributors_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'index_of_contributors';
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
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Index of Contributors';
  $display->uuid = 'cef19eb3-1f93-4266-ada0-24c3f9fc218f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f866cef6-9669-445f-8a6e-12a23b43a6cb';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Contriutor link list',
      'title' => '',
      'body' => '<div class="boldblue"><a href="/rc-primary-authors">Primary Authors</a></div>

<div class="boldblue"><a href="/rc-secondary-authors">Secondary Authors</a></div>

<div class="boldblue"><a href="/rc-editors">Resource Editors</a></div>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f866cef6-9669-445f-8a6e-12a23b43a6cb';
    $display->content['new-f866cef6-9669-445f-8a6e-12a23b43a6cb'] = $pane;
    $display->panels['middle'][0] = 'new-f866cef6-9669-445f-8a6e-12a23b43a6cb';
    $pane = new stdClass();
    $pane->pid = 'new-8997e5ed-76ad-4657-b1c0-0ebfbfcd5d42';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<div class="desc">The columns below display abbreviated and randomized lists of authors and editors at Romantic Circles. Click the "more" links at the bottom to see the lists in their entirety.</div>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8997e5ed-76ad-4657-b1c0-0ebfbfcd5d42';
    $display->content['new-8997e5ed-76ad-4657-b1c0-0ebfbfcd5d42'] = $pane;
    $display->panels['middle'][1] = 'new-8997e5ed-76ad-4657-b1c0-0ebfbfcd5d42';
    $pane = new stdClass();
    $pane->pid = 'new-a9b848ca-3cd1-48d9-a491-1dc71f879ed8';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'romantic_circles_people';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a9b848ca-3cd1-48d9-a491-1dc71f879ed8';
    $display->content['new-a9b848ca-3cd1-48d9-a491-1dc71f879ed8'] = $pane;
    $display->panels['middle'][2] = 'new-a9b848ca-3cd1-48d9-a491-1dc71f879ed8';
    $pane = new stdClass();
    $pane->pid = 'new-d2966307-e3aa-4cca-baab-2a22450b76c2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'romantic_circles_people';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_2',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'grayBox',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd2966307-e3aa-4cca-baab-2a22450b76c2';
    $display->content['new-d2966307-e3aa-4cca-baab-2a22450b76c2'] = $pane;
    $display->panels['middle'][3] = 'new-d2966307-e3aa-4cca-baab-2a22450b76c2';
    $pane = new stdClass();
    $pane->pid = 'new-0ab15f88-eda2-4699-8d06-158dfa72c597';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'romantic_circles_people';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->uuid = '0ab15f88-eda2-4699-8d06-158dfa72c597';
    $display->content['new-0ab15f88-eda2-4699-8d06-158dfa72c597'] = $pane;
    $display->panels['middle'][4] = 'new-0ab15f88-eda2-4699-8d06-158dfa72c597';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a9b848ca-3cd1-48d9-a491-1dc71f879ed8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['index_of_contributors'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'online_syllabi';
  $page->task = 'page';
  $page->admin_title = 'Online Syllabi';
  $page->admin_description = 'The landing page for Online Syllabi. Overrides the old version';
  $page->path = 'node/22276';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'menu-pedagogies',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_online_syllabi_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'online_syllabi';
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
  $display->uuid = '772ef58f-6a24-4a9f-b48e-b41941f89c58';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2db68808-9b88-4a64-b765-f85c56798893';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'online_syllabi';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '30',
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
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2db68808-9b88-4a64-b765-f85c56798893';
    $display->content['new-2db68808-9b88-4a64-b765-f85c56798893'] = $pane;
    $display->panels['one_main'][0] = 'new-2db68808-9b88-4a64-b765-f85c56798893';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2db68808-9b88-4a64-b765-f85c56798893';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['online_syllabi'] = $page;

  return $pages;

}
