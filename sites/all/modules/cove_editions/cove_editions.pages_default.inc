<?php
/**
 * @file
 * cove_editions.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function cove_editions_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_06da7c91-4c94-4aec-a80c-8df689bf428e';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
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
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'annosonecol';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 1,
        ),
        'parent' => NULL,
      ),
      1 => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 3,
          1 => 2,
        ),
        'class' => 'main-right',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main',
          1 => 'node_metadata',
        ),
        'parent' => '1',
        'class' => 'top-right',
        'hide_empty' => 0,
      ),
      'node_metadata' => array(
        'type' => 'region',
        'title' => 'Node Metadata and tools',
        'width' => '40.0464499004645',
        'width_type' => '%',
        'parent' => '2',
        'class' => 'node-metadata',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'main' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '59.953550099535505',
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
      'two_66_33_top' => NULL,
      'two_66_33_first' => NULL,
      'two_66_33_bottom' => NULL,
      'two_66_33_second' => array(
        'corner_location' => 'panel',
      ),
      'middle' => NULL,
      'center' => NULL,
      'secondary_right' => NULL,
      'tools' => NULL,
      'annos' => NULL,
      'main' => NULL,
      'rightfloat' => NULL,
      'node_metadata' => NULL,
      'top' => NULL,
    ),
    'two_66_33_second' => array(
      'style' => 'rounded_corners',
    ),
    'center' => array(
      'style' => 'naked',
    ),
    'tools' => array(
      'style' => 'naked',
    ),
    'node_metadata' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '7f8f1156-ab5e-40ca-973a-1dc931cecce2';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_06da7c91-4c94-4aec-a80c-8df689bf428e';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-2e8d68d0-0fcf-49d5-b38f-c2020750314d';
  $pane->panel = 'annos';
  $pane->type = 'panels_mini';
  $pane->subtype = 'node_metadata';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e8d68d0-0fcf-49d5-b38f-c2020750314d';
  $display->content['new-2e8d68d0-0fcf-49d5-b38f-c2020750314d'] = $pane;
  $display->panels['annos'][0] = 'new-2e8d68d0-0fcf-49d5-b38f-c2020750314d';
  $pane = new stdClass();
  $pane->pid = 'new-ed84758d-3e42-4960-8b8e-5f2db753a71f';
  $pane->panel = 'main';
  $pane->type = 'block';
  $pane->subtype = 'menu_block-1';
  $pane->shown = FALSE;
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
  $pane->uuid = 'ed84758d-3e42-4960-8b8e-5f2db753a71f';
  $display->content['new-ed84758d-3e42-4960-8b8e-5f2db753a71f'] = $pane;
  $display->panels['main'][0] = 'new-ed84758d-3e42-4960-8b8e-5f2db753a71f';
  $pane = new stdClass();
  $pane->pid = 'new-112e08da-a7f0-42e4-b49f-e6195eccb896';
  $pane->panel = 'main';
  $pane->type = 'page_breadcrumb';
  $pane->subtype = 'page_breadcrumb';
  $pane->shown = TRUE;
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '112e08da-a7f0-42e4-b49f-e6195eccb896';
  $display->content['new-112e08da-a7f0-42e4-b49f-e6195eccb896'] = $pane;
  $display->panels['main'][1] = 'new-112e08da-a7f0-42e4-b49f-e6195eccb896';
  $pane = new stdClass();
  $pane->pid = 'new-f7c931a6-3560-4b5b-ab44-845c8b686e0c';
  $pane->panel = 'main';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'f7c931a6-3560-4b5b-ab44-845c8b686e0c';
  $display->content['new-f7c931a6-3560-4b5b-ab44-845c8b686e0c'] = $pane;
  $display->panels['main'][2] = 'new-f7c931a6-3560-4b5b-ab44-845c8b686e0c';
  $pane = new stdClass();
  $pane->pid = 'new-f85a8499-a309-4cae-a08a-02b9cb1d0c0b';
  $pane->panel = 'main';
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'f85a8499-a309-4cae-a08a-02b9cb1d0c0b';
  $display->content['new-f85a8499-a309-4cae-a08a-02b9cb1d0c0b'] = $pane;
  $display->panels['main'][3] = 'new-f85a8499-a309-4cae-a08a-02b9cb1d0c0b';
  $pane = new stdClass();
  $pane->pid = 'new-076efbe7-912c-4e9d-95c9-8d219d70d676';
  $pane->panel = 'main';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '076efbe7-912c-4e9d-95c9-8d219d70d676';
  $display->content['new-076efbe7-912c-4e9d-95c9-8d219d70d676'] = $pane;
  $display->panels['main'][4] = 'new-076efbe7-912c-4e9d-95c9-8d219d70d676';
  $pane = new stdClass();
  $pane->pid = 'new-8ffafd96-f1fa-4fc1-8acc-42517259aede';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'anno startup',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'unfiltered_html',
    'substitute' => 0,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '8ffafd96-f1fa-4fc1-8acc-42517259aede';
  $display->content['new-8ffafd96-f1fa-4fc1-8acc-42517259aede'] = $pane;
  $display->panels['main'][5] = 'new-8ffafd96-f1fa-4fc1-8acc-42517259aede';
  $pane = new stdClass();
  $pane->pid = 'new-5b2b60e9-a1e1-488d-9f0e-d32685bb3836';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'anno Margin viewer startup',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '',
    'format' => 'unfiltered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '5b2b60e9-a1e1-488d-9f0e-d32685bb3836';
  $display->content['new-5b2b60e9-a1e1-488d-9f0e-d32685bb3836'] = $pane;
  $display->panels['main'][6] = 'new-5b2b60e9-a1e1-488d-9f0e-d32685bb3836';
  $pane = new stdClass();
  $pane->pid = 'new-0cc144bd-5628-4155-aaaa-4ad8b5230a22';
  $pane->panel = 'main';
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
    'override_title_heading' => 'h2',
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '0cc144bd-5628-4155-aaaa-4ad8b5230a22';
  $display->content['new-0cc144bd-5628-4155-aaaa-4ad8b5230a22'] = $pane;
  $display->panels['main'][7] = 'new-0cc144bd-5628-4155-aaaa-4ad8b5230a22';
  $pane = new stdClass();
  $pane->pid = 'new-e8b33da1-c2b8-4d2c-863b-372d11a63b09';
  $pane->panel = 'main';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = 'e8b33da1-c2b8-4d2c-863b-372d11a63b09';
  $display->content['new-e8b33da1-c2b8-4d2c-863b-372d11a63b09'] = $pane;
  $display->panels['main'][8] = 'new-e8b33da1-c2b8-4d2c-863b-372d11a63b09';
  $pane = new stdClass();
  $pane->pid = 'new-29c1bcc0-1035-4f58-8f33-4b4489d29338';
  $pane->panel = 'main';
  $pane->type = 'panels_mini';
  $pane->subtype = 'annotation_filters';
  $pane->shown = FALSE;
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '29c1bcc0-1035-4f58-8f33-4b4489d29338';
  $display->content['new-29c1bcc0-1035-4f58-8f33-4b4489d29338'] = $pane;
  $display->panels['main'][9] = 'new-29c1bcc0-1035-4f58-8f33-4b4489d29338';
  $pane = new stdClass();
  $pane->pid = 'new-2ad39954-70d8-4555-ba51-8bb4a46c17fa';
  $pane->panel = 'main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Marginalia markup',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<div class="in-page-controls"></div> <!--control container-->

    <article class="content"> <!--outer_element-->
      <section class="inner"> <!--inner_element-->
      </section>
    </article>',
    'format' => 'unfiltered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '2ad39954-70d8-4555-ba51-8bb4a46c17fa';
  $display->content['new-2ad39954-70d8-4555-ba51-8bb4a46c17fa'] = $pane;
  $display->panels['main'][10] = 'new-2ad39954-70d8-4555-ba51-8bb4a46c17fa';
  $pane = new stdClass();
  $pane->pid = 'new-46065dab-362e-45a6-92b3-3e753f72d819';
  $pane->panel = 'rightfloat';
  $pane->type = 'views';
  $pane->subtype = 'node_metadata';
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
  $pane->uuid = '46065dab-362e-45a6-92b3-3e753f72d819';
  $display->content['new-46065dab-362e-45a6-92b3-3e753f72d819'] = $pane;
  $display->panels['rightfloat'][0] = 'new-46065dab-362e-45a6-92b3-3e753f72d819';
  $pane = new stdClass();
  $pane->pid = 'new-c764ca06-d493-473b-b2f5-e8d9d482d01e';
  $pane->panel = 'rightfloat';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_cove_studio_uri';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 7,
            2 => 9,
            3 => 8,
            4 => 10,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
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
  $pane->uuid = 'c764ca06-d493-473b-b2f5-e8d9d482d01e';
  $display->content['new-c764ca06-d493-473b-b2f5-e8d9d482d01e'] = $pane;
  $display->panels['rightfloat'][1] = 'new-c764ca06-d493-473b-b2f5-e8d9d482d01e';
  $pane = new stdClass();
  $pane->pid = 'new-d8501d70-fa13-477e-ab5c-87c6623ff225';
  $pane->panel = 'rightfloat';
  $pane->type = 'views';
  $pane->subtype = 'documents_in_this_edition_menu_';
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'd8501d70-fa13-477e-ab5c-87c6623ff225';
  $display->content['new-d8501d70-fa13-477e-ab5c-87c6623ff225'] = $pane;
  $display->panels['rightfloat'][2] = 'new-d8501d70-fa13-477e-ab5c-87c6623ff225';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_06da7c91-4c94-4aec-a80c-8df689bf428e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_6ee9a229-4fd9-4b9a-9343-707a5494ae1f';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Resource',
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
          'name' => 'entity_bundle:node',
          'settings' => array(
            'type' => array(
              'editions_index_page' => 'editions_index_page',
              'journal_issue' => 'journal_issue',
              'pedagogies_journal_issue' => 'pedagogies_journal_issue',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
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
        'class' => 'resource-metadata',
        'hide_empty' => 0,
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Resource Metadata',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'resource-metadata',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'icon_left',
          1 => 'resource_top',
        ),
        'parent' => 'main',
        'class' => 'resource-top',
        'hide_empty' => 0,
      ),
      'resource_top' => array(
        'type' => 'region',
        'title' => 'Title Right',
        'width' => '64.99202551834131',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'titleRight',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
        ),
        'parent' => 'main',
        'class' => 'main',
        'hide_empty' => 0,
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'main',
        'hide_empty' => 0,
      ),
      'icon_left' => array(
        'type' => 'region',
        'title' => 'Icon Left',
        'width' => '35.0079744816587',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'icon-left',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
      'center' => NULL,
      'resource_top' => NULL,
      'main_' => NULL,
      'icon_left' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd474c3fe-677d-4826-b7a0-ee0d62257025';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_6ee9a229-4fd9-4b9a-9343-707a5494ae1f';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f53da10d-bda3-4785-80ba-827c2bb0168f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_main_author';
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
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f53da10d-bda3-4785-80ba-827c2bb0168f';
  $display->content['new-f53da10d-bda3-4785-80ba-827c2bb0168f'] = $pane;
  $display->panels['center'][0] = 'new-f53da10d-bda3-4785-80ba-827c2bb0168f';
  $pane = new stdClass();
  $pane->pid = 'new-c099759f-ced7-4ddf-b7e5-a73c82a76ce0';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_original_publication_date';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'date_default',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'format_type' => 'long',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
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
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'c099759f-ced7-4ddf-b7e5-a73c82a76ce0';
  $display->content['new-c099759f-ced7-4ddf-b7e5-a73c82a76ce0'] = $pane;
  $display->panels['center'][1] = 'new-c099759f-ced7-4ddf-b7e5-a73c82a76ce0';
  $pane = new stdClass();
  $pane->pid = 'new-c2ef8cc5-a8c6-48f3-94da-23c6c8671e2f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_edited_by';
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
    'css_class' => 'center',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c2ef8cc5-a8c6-48f3-94da-23c6c8671e2f';
  $display->content['new-c2ef8cc5-a8c6-48f3-94da-23c6c8671e2f'] = $pane;
  $display->panels['center'][2] = 'new-c2ef8cc5-a8c6-48f3-94da-23c6c8671e2f';
  $pane = new stdClass();
  $pane->pid = 'new-165d551d-279a-452e-9002-df5025ef977c';
  $pane->panel = 'icon_left';
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
      'image_link' => '',
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
  $pane->uuid = '165d551d-279a-452e-9002-df5025ef977c';
  $display->content['new-165d551d-279a-452e-9002-df5025ef977c'] = $pane;
  $display->panels['icon_left'][0] = 'new-165d551d-279a-452e-9002-df5025ef977c';
  $pane = new stdClass();
  $pane->pid = 'new-96aa8fc6-db12-4ad5-b559-7db86f2f09f6';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'documents_in_this_edition-panel_pane_2';
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
  $pane->uuid = '96aa8fc6-db12-4ad5-b559-7db86f2f09f6';
  $display->content['new-96aa8fc6-db12-4ad5-b559-7db86f2f09f6'] = $pane;
  $display->panels['main_'][0] = 'new-96aa8fc6-db12-4ad5-b559-7db86f2f09f6';
  $pane = new stdClass();
  $pane->pid = 'new-52e737b0-d2d4-468c-b527-de4d65752ce1';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'documents_in_this_edition-panel_pane_1';
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
  $pane->uuid = '52e737b0-d2d4-468c-b527-de4d65752ce1';
  $display->content['new-52e737b0-d2d4-468c-b527-de4d65752ce1'] = $pane;
  $display->panels['main_'][1] = 'new-52e737b0-d2d4-468c-b527-de4d65752ce1';
  $pane = new stdClass();
  $pane->pid = 'new-3f6de787-720c-4b90-a108-2ce79c6ec61d';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'documents_in_this_edition-panel_pane_3';
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
  $pane->uuid = '3f6de787-720c-4b90-a108-2ce79c6ec61d';
  $display->content['new-3f6de787-720c-4b90-a108-2ce79c6ec61d'] = $pane;
  $display->panels['main_'][2] = 'new-3f6de787-720c-4b90-a108-2ce79c6ec61d';
  $pane = new stdClass();
  $pane->pid = 'new-75337816-3eb6-41a1-9a5e-58cdd647f496';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'maps_timelines_in_this_edition-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '75337816-3eb6-41a1-9a5e-58cdd647f496';
  $display->content['new-75337816-3eb6-41a1-9a5e-58cdd647f496'] = $pane;
  $display->panels['main_'][3] = 'new-75337816-3eb6-41a1-9a5e-58cdd647f496';
  $pane = new stdClass();
  $pane->pid = 'new-fe7ca35f-29c3-4c9b-8db7-d7aaec3181cb';
  $pane->panel = 'main_';
  $pane->type = 'views_panes';
  $pane->subtype = 'maps_timelines_in_this_edition-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'fe7ca35f-29c3-4c9b-8db7-d7aaec3181cb';
  $display->content['new-fe7ca35f-29c3-4c9b-8db7-d7aaec3181cb'] = $pane;
  $display->panels['main_'][4] = 'new-fe7ca35f-29c3-4c9b-8db7-d7aaec3181cb';
  $pane = new stdClass();
  $pane->pid = 'new-feeddda2-4210-43fc-bc86-f0f6c9f660b2';
  $pane->panel = 'main_';
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
    'override_title_text' => 'Contents',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = 'feeddda2-4210-43fc-bc86-f0f6c9f660b2';
  $display->content['new-feeddda2-4210-43fc-bc86-f0f6c9f660b2'] = $pane;
  $display->panels['main_'][5] = 'new-feeddda2-4210-43fc-bc86-f0f6c9f660b2';
  $pane = new stdClass();
  $pane->pid = 'new-60e3130f-accb-427b-b125-ff3b83349ff4';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_annotator';
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
  $pane->uuid = '60e3130f-accb-427b-b125-ff3b83349ff4';
  $display->content['new-60e3130f-accb-427b-b125-ff3b83349ff4'] = $pane;
  $display->panels['main_'][6] = 'new-60e3130f-accb-427b-b125-ff3b83349ff4';
  $pane = new stdClass();
  $pane->pid = 'new-f23ed502-9eb7-47fb-bb92-e51772faf799';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_postgraduate_researcher';
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
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f23ed502-9eb7-47fb-bb92-e51772faf799';
  $display->content['new-f23ed502-9eb7-47fb-bb92-e51772faf799'] = $pane;
  $display->panels['main_'][7] = 'new-f23ed502-9eb7-47fb-bb92-e51772faf799';
  $pane = new stdClass();
  $pane->pid = 'new-408a64e3-404a-487e-b608-102027b72098';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_published';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'month_year',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '408a64e3-404a-487e-b608-102027b72098';
  $display->content['new-408a64e3-404a-487e-b608-102027b72098'] = $pane;
  $display->panels['main_'][8] = 'new-408a64e3-404a-487e-b608-102027b72098';
  $pane = new stdClass();
  $pane->pid = 'new-b22785fb-d015-4f9b-9093-e1b2a7bbb63f';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:taxonomy_vocabulary_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'b22785fb-d015-4f9b-9093-e1b2a7bbb63f';
  $display->content['new-b22785fb-d015-4f9b-9093-e1b2a7bbb63f'] = $pane;
  $display->panels['main_'][9] = 'new-b22785fb-d015-4f9b-9093-e1b2a7bbb63f';
  $pane = new stdClass();
  $pane->pid = 'new-4e1fb9d9-9f49-4b6d-ba74-f6c43b68677a';
  $pane->panel = 'main_';
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
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '4e1fb9d9-9f49-4b6d-ba74-f6c43b68677a';
  $display->content['new-4e1fb9d9-9f49-4b6d-ba74-f6c43b68677a'] = $pane;
  $display->panels['main_'][10] = 'new-4e1fb9d9-9f49-4b6d-ba74-f6c43b68677a';
  $pane = new stdClass();
  $pane->pid = 'new-a994ae70-1490-4183-8e5a-0f9916f9daa4';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_nines_genre_s_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'a994ae70-1490-4183-8e5a-0f9916f9daa4';
  $display->content['new-a994ae70-1490-4183-8e5a-0f9916f9daa4'] = $pane;
  $display->panels['main_'][11] = 'new-a994ae70-1490-4183-8e5a-0f9916f9daa4';
  $pane = new stdClass();
  $pane->pid = 'new-839e0802-85d9-49ce-9698-b39630d90f5f';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_nines_discipline_s_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = '839e0802-85d9-49ce-9698-b39630d90f5f';
  $display->content['new-839e0802-85d9-49ce-9698-b39630d90f5f'] = $pane;
  $display->panels['main_'][12] = 'new-839e0802-85d9-49ce-9698-b39630d90f5f';
  $pane = new stdClass();
  $pane->pid = 'new-a3e96d61-9d9d-48ba-a14f-1f0edb5d6995';
  $pane->panel = 'main_';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_nines_type_s_';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_link',
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
  $pane->position = 13;
  $pane->locks = array();
  $pane->uuid = 'a3e96d61-9d9d-48ba-a14f-1f0edb5d6995';
  $display->content['new-a3e96d61-9d9d-48ba-a14f-1f0edb5d6995'] = $pane;
  $display->panels['main_'][13] = 'new-a3e96d61-9d9d-48ba-a14f-1f0edb5d6995';
  $pane = new stdClass();
  $pane->pid = 'new-3276cb28-1f57-42ff-beea-33e10f5b1f83';
  $pane->panel = 'resource_top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Page title',
    'title' => '',
    'body' => '<h1 id="toc_title">%node:title</h1>',
    'format' => 'unfiltered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3276cb28-1f57-42ff-beea-33e10f5b1f83';
  $display->content['new-3276cb28-1f57-42ff-beea-33e10f5b1f83'] = $pane;
  $display->panels['resource_top'][0] = 'new-3276cb28-1f57-42ff-beea-33e10f5b1f83';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-feeddda2-4210-43fc-bc86-f0f6c9f660b2';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_6ee9a229-4fd9-4b9a-9343-707a5494ae1f'] = $handler;

  return $export;
}
