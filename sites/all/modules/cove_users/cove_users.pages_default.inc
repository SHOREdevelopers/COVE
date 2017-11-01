<?php
/**
 * @file
 * cove_users.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_users_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_67526700-f959-44e7-a2e3-c5792dbf8a3a';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'User page - default',
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
      'plugins' => array(),
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
          0 => 3,
          1 => 1,
          2 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '20.066573451913744',
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
        'title' => 'Right',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'column',
        'width' => '54.84627204618255',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => '',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 1,
      ),
      3 => array(
        'type' => 'column',
        'width' => '25.087154501904084',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 4,
        ),
        'class' => '',
        'hide_empty' => 0,
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'user_left',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'user_left' => array(
        'type' => 'region',
        'title' => 'User Left',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'user_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '9b27fdd2-4a7c-4eec-b494-934463f1b85c';
  $display->storage_type = 'unknown';
  $display->storage_id = '';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-438f0b6c-da5e-4f36-b497-4e4f74fdb587';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:og_user_node';
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
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = '438f0b6c-da5e-4f36-b497-4e4f74fdb587';
  $display->content['new-438f0b6c-da5e-4f36-b497-4e4f74fdb587'] = $pane;
  $display->panels['center'][0] = 'new-438f0b6c-da5e-4f36-b497-4e4f74fdb587';
  $pane = new stdClass();
  $pane->pid = 'new-5cad1dbb-3b24-4c27-b8d7-8ed79927d3d5';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_special_roles';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = '5cad1dbb-3b24-4c27-b8d7-8ed79927d3d5';
  $display->content['new-5cad1dbb-3b24-4c27-b8d7-8ed79927d3d5'] = $pane;
  $display->panels['center'][1] = 'new-5cad1dbb-3b24-4c27-b8d7-8ed79927d3d5';
  $pane = new stdClass();
  $pane->pid = 'new-33ec5e1d-8b96-4a9b-b714-442afc6269fe';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_edited_editions';
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
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = '33ec5e1d-8b96-4a9b-b714-442afc6269fe';
  $display->content['new-33ec5e1d-8b96-4a9b-b714-442afc6269fe'] = $pane;
  $display->panels['center'][2] = 'new-33ec5e1d-8b96-4a9b-b714-442afc6269fe';
  $pane = new stdClass();
  $pane->pid = 'new-2e46f58a-5fa4-4d8c-b365-7693fe8ef3c7';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_profile_picture';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'image_style' => 'thumbnail',
      'image_link' => 'file',
    ),
    'context' => 'argument_entity_id:user_1',
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
    'css_class' => 'alignleft',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e46f58a-5fa4-4d8c-b365-7693fe8ef3c7';
  $display->content['new-2e46f58a-5fa4-4d8c-b365-7693fe8ef3c7'] = $pane;
  $display->panels['left'][0] = 'new-2e46f58a-5fa4-4d8c-b365-7693fe8ef3c7';
  $pane = new stdClass();
  $pane->pid = 'new-ebd4d3e8-08b8-4122-8db7-0677ec552880';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_bio';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = 'ebd4d3e8-08b8-4122-8db7-0677ec552880';
  $display->content['new-ebd4d3e8-08b8-4122-8db7-0677ec552880'] = $pane;
  $display->panels['left'][1] = 'new-ebd4d3e8-08b8-4122-8db7-0677ec552880';
  $pane = new stdClass();
  $pane->pid = 'new-3325bc62-ef3b-49de-83fc-9af6a131a117';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_affiliation';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = '3325bc62-ef3b-49de-83fc-9af6a131a117';
  $display->content['new-3325bc62-ef3b-49de-83fc-9af6a131a117'] = $pane;
  $display->panels['left'][2] = 'new-3325bc62-ef3b-49de-83fc-9af6a131a117';
  $pane = new stdClass();
  $pane->pid = 'new-97a46129-48c3-4617-a084-38998e38ac4b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'user:field_home_page';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'link_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = '97a46129-48c3-4617-a084-38998e38ac4b';
  $display->content['new-97a46129-48c3-4617-a084-38998e38ac4b'] = $pane;
  $display->panels['left'][3] = 'new-97a46129-48c3-4617-a084-38998e38ac4b';
  $pane = new stdClass();
  $pane->pid = 'new-d401023d-1057-4ab0-82a4-d1c17236c1ba';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'user:summary';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'token',
    'context' => 'argument_entity_id:user_1',
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
  $pane->uuid = 'd401023d-1057-4ab0-82a4-d1c17236c1ba';
  $display->content['new-d401023d-1057-4ab0-82a4-d1c17236c1ba'] = $pane;
  $display->panels['left'][4] = 'new-d401023d-1057-4ab0-82a4-d1c17236c1ba';
  $pane = new stdClass();
  $pane->pid = 'new-a47a3879-0f5b-4cbd-b57c-b93d35be3ea7';
  $pane->panel = 'user_left';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'COVE To do',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<h2 class="block-title">What can I do at The COVE?</h2>
<ul style="list-style-type: none;">
<li><img style="width: 30px; margin-right: 7px;" src="/sites/default/files/book-icon.png" /><a style="font-size: 120%; margin-right: 15px;" href="/node/add/editions-index-page">Build Editions</a></li>
</ul>
<ul style="list-style-type: none;">
<li style="margin-bottom: 5px;"><img style="width: 30px; margin-right: 7px;" src="/sites/default/files/group-icon.png" width="30/" /><a style="font-size: 120%; margin-right: 15px;" href="/node/add/course">Create Groups</a></li>
</ul>
<p style="font-size: 80%; margin-top: 0;"><em>For more information, please consult our <a href="/content/building-editions-and-working-groups-overview">documentation</a>.</em></p>',
    'format' => 'unfiltered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'nav_to-do',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'a47a3879-0f5b-4cbd-b57c-b93d35be3ea7';
  $display->content['new-a47a3879-0f5b-4cbd-b57c-b93d35be3ea7'] = $pane;
  $display->panels['user_left'][0] = 'new-a47a3879-0f5b-4cbd-b57c-b93d35be3ea7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_67526700-f959-44e7-a2e3-c5792dbf8a3a'] = $handler;

  return $export;
}
