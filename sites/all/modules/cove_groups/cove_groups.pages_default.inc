<?php
/**
 * @file
 * cove_groups.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_groups_default_page_manager_handlers() {
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
          0 => 8,
          1 => 'main-row',
          2 => 1,
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
        'width' => '79.95508245509873',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '20.044917544901267',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 2,
          1 => 3,
          2 => 4,
        ),
        'parent' => 'main',
        'class' => 'course-footer',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'column',
        'width' => '33.025273481705014',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 5,
        ),
        'class' => 'footer-left',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'column',
        'width' => '33.99873088025514',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 6,
        ),
        'class' => 'footer-mid',
        'hide_empty' => 1,
      ),
      4 => array(
        'type' => 'column',
        'width' => '32.97599563803985',
        'width_type' => '%',
        'parent' => '1',
        'children' => array(
          0 => 7,
        ),
        'class' => 'footer-right',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content',
        ),
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content_',
        ),
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'content__',
        ),
        'parent' => '4',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content_' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 0,
      ),
      'content__' => array(
        'type' => 'region',
        'title' => 'content',
        'width' => 100,
        'width_type' => '%',
        'parent' => '7',
        'class' => '',
        'hide_empty' => 0,
      ),
      8 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top_full_width',
        ),
        'parent' => 'main',
        'class' => 'top-full',
        'hide_empty' => 0,
      ),
      'top_full_width' => array(
        'type' => 'region',
        'title' => 'Top Full width',
        'width' => 100,
        'width_type' => '%',
        'parent' => '8',
        'class' => 'top-full-region',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'left' => NULL,
      'content' => NULL,
      'content_' => NULL,
      'content__' => NULL,
      'top_full_width' => NULL,
    ),
    'top_full_width' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title Dashboard';
  $display->uuid = 'cfe8b240-3b21-4e6d-b877-f414bf510b74';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_62a7ab27-21c0-45b0-8bf0-414839225262';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f5c4d187-6fdd-43de-9d20-ecfc41f90290';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_course_description';
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'desc',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f5c4d187-6fdd-43de-9d20-ecfc41f90290';
  $display->content['new-f5c4d187-6fdd-43de-9d20-ecfc41f90290'] = $pane;
  $display->panels['center'][0] = 'new-f5c4d187-6fdd-43de-9d20-ecfc41f90290';
  $pane = new stdClass();
  $pane->pid = 'new-f807861c-3b30-4f59-840e-90602e408322';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_nodes-panel_pane_1';
  $pane->shown = FALSE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f807861c-3b30-4f59-840e-90602e408322';
  $display->content['new-f807861c-3b30-4f59-840e-90602e408322'] = $pane;
  $display->panels['center'][1] = 'new-f807861c-3b30-4f59-840e-90602e408322';
  $pane = new stdClass();
  $pane->pid = 'new-f99073d6-9c4e-4b99-81d2-11c755ca1428';
  $pane->panel = 'center';
  $pane->type = 'views_panes';
  $pane->subtype = 'cove_og_content-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Activity',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f99073d6-9c4e-4b99-81d2-11c755ca1428';
  $display->content['new-f99073d6-9c4e-4b99-81d2-11c755ca1428'] = $pane;
  $display->panels['center'][2] = 'new-f99073d6-9c4e-4b99-81d2-11c755ca1428';
  $pane = new stdClass();
  $pane->pid = 'new-abd81f75-9240-443b-9206-7234a141867d';
  $pane->panel = 'content';
  $pane->type = 'views';
  $pane->subtype = 'course_posts_by_date';
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
    'context' => array(
      0 => '',
    ),
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'abd81f75-9240-443b-9206-7234a141867d';
  $display->content['new-abd81f75-9240-443b-9206-7234a141867d'] = $pane;
  $display->panels['content'][0] = 'new-abd81f75-9240-443b-9206-7234a141867d';
  $pane = new stdClass();
  $pane->pid = 'new-46f602a2-a38b-4f68-8fd5-791d90ae13bd';
  $pane->panel = 'content_';
  $pane->type = 'views_panes';
  $pane->subtype = 'course_posts_graph-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '46f602a2-a38b-4f68-8fd5-791d90ae13bd';
  $display->content['new-46f602a2-a38b-4f68-8fd5-791d90ae13bd'] = $pane;
  $display->panels['content_'][0] = 'new-46f602a2-a38b-4f68-8fd5-791d90ae13bd';
  $pane = new stdClass();
  $pane->pid = 'new-d437a264-855d-41b9-a973-eaec8812769c';
  $pane->panel = 'content__';
  $pane->type = 'views';
  $pane->subtype = 'course_posts_by_user';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'd437a264-855d-41b9-a973-eaec8812769c';
  $display->content['new-d437a264-855d-41b9-a973-eaec8812769c'] = $pane;
  $display->panels['content__'][0] = 'new-d437a264-855d-41b9-a973-eaec8812769c';
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
    'override_title_heading' => 'h4',
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
    'override_title' => 1,
    'override_title_text' => 'Students',
    'override_title_heading' => 'h4',
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
  $pane->pid = 'new-72334cab-adb7-4f88-ad6f-d957c1c477fa';
  $pane->panel = 'top_full_width';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Group to do',
    'title' => '',
    'body' => '<h2 class="block-title" style="display: inline;">What can I do at The COVE?</h2>
<ul style="display: inline;">
<li style="display: inline;"><img style="width: 30px; margin-right: 7px;" src="/sites/default/files/form-icon-small.png" /><a style="font-size: 120%; margin-right: 15px;" href="/node/add/blog_entry">Write posts</a></li>
<li style="display: inline;"><img style="width: 30px; margin-right: 7px;" src="/sites/default/files/timeline-icon-small.png" width="30/" /><a style="font-size: 120%; margin-right: 15px;" href="/node/add/chronology?og_group_ref=%node:nid">Create timelines</a></li>
<li style="display: inline;"><img style="width: 30px; margin-right: 7px;" src="/sites/default/files/map-marker-icon-small.png" width="30/" /><a style="font-size: 120%; margin-right: 15px;" href="/node/add/map?og_group_ref=%node:nid">Create Maps</a></li>
<!--<li style="display:inline">Create Personographies (coming soon)</li>--></ul>',
    'format' => 'full_html',
    'substitute' => 1,
    'title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '72334cab-adb7-4f88-ad6f-d957c1c477fa';
  $display->content['new-72334cab-adb7-4f88-ad6f-d957c1c477fa'] = $pane;
  $display->panels['top_full_width'][0] = 'new-72334cab-adb7-4f88-ad6f-d957c1c477fa';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_62a7ab27-21c0-45b0-8bf0-414839225262'] = $handler;

  return $export;
}
