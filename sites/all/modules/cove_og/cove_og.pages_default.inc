<?php
/**
 * @file
 * cove_og.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_og_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_62a7ab27-21c0-45b0-8bf0-414839225262';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'OG Course',
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
              'course' => 'course',
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
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '69.96957017877519',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '30.0304298212248',
        'width_type' => '%',
        'parent' => 'main-row',
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
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'cfe8b240-3b21-4e6d-b877-f414bf510b74';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f807861c-3b30-4f59-840e-90602e408322';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_nodes-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = 'f807861c-3b30-4f59-840e-90602e408322';
    $display->content['new-f807861c-3b30-4f59-840e-90602e408322'] = $pane;
    $display->panels['center'][0] = 'new-f807861c-3b30-4f59-840e-90602e408322';
    $pane = new stdClass();
    $pane->pid = 'new-c89f3bc7-62e6-47b2-831b-f50aba90d5f1';
    $pane->panel = 'left';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Instructor',
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
    $pane->uuid = 'c89f3bc7-62e6-47b2-831b-f50aba90d5f1';
    $display->content['new-c89f3bc7-62e6-47b2-831b-f50aba90d5f1'] = $pane;
    $display->panels['left'][0] = 'new-c89f3bc7-62e6-47b2-831b-f50aba90d5f1';
    $pane = new stdClass();
    $pane->pid = 'new-2a26f54d-a930-4ce4-ae5e-fdf8bb3471f4';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'og_course_students-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
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
    $pane->uuid = '2a26f54d-a930-4ce4-ae5e-fdf8bb3471f4';
    $display->content['new-2a26f54d-a930-4ce4-ae5e-fdf8bb3471f4'] = $pane;
    $display->panels['left'][1] = 'new-2a26f54d-a930-4ce4-ae5e-fdf8bb3471f4';
    $pane = new stdClass();
    $pane->pid = 'new-d2cf569f-b462-415c-8413-5bf7a26eb743';
    $pane->panel = 'left';
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd2cf569f-b462-415c-8413-5bf7a26eb743';
    $display->content['new-d2cf569f-b462-415c-8413-5bf7a26eb743'] = $pane;
    $display->panels['left'][2] = 'new-d2cf569f-b462-415c-8413-5bf7a26eb743';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_62a7ab27-21c0-45b0-8bf0-414839225262'] = $handler;

  return $export;
}
