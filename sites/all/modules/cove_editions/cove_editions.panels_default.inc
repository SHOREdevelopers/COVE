<?php
/**
 * @file
 * cove_editions.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function cove_editions_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'annotation_filters';
  $mini->category = '';
  $mini->admin_title = 'Annotation filters';
  $mini->admin_description = 'The filters only';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
    'one_main' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8975ca19-0399-4dce-9b77-3d54047d3220';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'annotation_filters';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-e8baef06-00be-413b-a1ee-ef0c852fc34e';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'filters',
    'title' => 'Annotation Filters',
    'title_heading' => 'h2',
    'body' => '<!--<div class="col-md-6">-->
          <div id="annotation-well">
            <!--<span class="filter-title">Filter</span>-->
            <select id="tag-filter" multiple="multiple">
              <option></option>
            </select>
            <select id="cat-filter" multiple="multiple">
              <option></option>
            </select>
            <select id="user-filter" multiple="multiple">
              <option></option>
            </select>
          </div><!--/well -->
        <!--</div>-->
  
      <script src="https://code.jquery.com/jquery-3.1.0.slim.min.js" integrity="sha256-cRpWjoSOw5KcyIOaZNo4i6fZ9tKPhYYb6i5T9RSVJG8=" crossorigin="anonymous"></script>
      <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js" integrity="sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa" crossorigin="anonymous"></script><script src="https://cdnjs.cloudflare.com/ajax/libs/select2/4.0.3/js/select2.min.js"></script>
      <script type="text/javascript" src="https://cdn.jsdelivr.net/lodash/4.15.0/lodash.core.min.js"></script>
      <script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/mustache.js/2.2.1/mustache.min.js"></script>
      <script type="text/javascript">
  var annotations = $(".annotator-hl");
  var tf = $(\'#tag-filter\').select2({
    data: filterLists[\'tags\'],
    placeholder: "Select one or more tags",
    theme: "classic",
    width: "300px",
  });
  var cf = $(\'#cat-filter\').select2({
    data: filterLists[\'category\'],
    placeholder: "Select one or more categories",
    theme: "classic",
    width: "300px",
  });
  var uf = $(\'#user-filter\').select2({
    data: filterLists[\'user\'],
    placeholder: "Select one or more annotators",
    theme: "classic",
    width: "300px",
  });
  tf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: transparent");
    $("span[data-tags~=\'" + e.params.data.id + "\']").removeAttr("style");
    console.log(e.params.data.id);
  });
  tf.on(\'select2:unselect\', function(e){
    annotations.removeAttr("style");
  });
  cf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: transparent");
    $("span[data-annotation_categories~=\'" + e.params.data.id + "\']").removeAttr("style");
  });
  cf.on(\'select2:unselect\', function(e){
    annotations.removeAttr("style");
  });
  uf.on("select2:select", function (e) { 
    annotations.attr("style", "background-color: transparent");
    $("span[data-user~=\'" + e.params.data.id + "\']").removeAttr("style");
  });
  uf.on(\'select2:unselect\', function(e){
    annotations.removeAttr("style");
  });

  annotations.click(function(a){
    var idtarget = a.target;

    $(".glyphicon-comment").remove();
    $(idtarget).prepend(\'<i class="glyphicon glyphicon-comment"></i>\');

    var customTags = [ \'[%\', \'%]\' ];
    var anno = Object.assign({}, idtarget.dataset)

    anno.quote = $(idtarget).text()
    var template = $(\'#annotation-template\').html();
    Mustache.parse(template, customTags);
    var rendered = Mustache.render(template, anno);
    $("#annotation-viewer").html(rendered);
  
  });

  // TODO: Implement Next/Previous Annotation Buttons.
  // TODO: Implement Next/Previous Viewport\'s-worth Buttons. (page breaks?)

</script>',
    'format' => 'unfiltered_html',
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
  $pane->uuid = 'e8baef06-00be-413b-a1ee-ef0c852fc34e';
  $display->content['new-e8baef06-00be-413b-a1ee-ef0c852fc34e'] = $pane;
  $display->panels['one_main'][0] = 'new-e8baef06-00be-413b-a1ee-ef0c852fc34e';
  $pane = new stdClass();
  $pane->pid = 'new-97ecba35-1080-4384-ac1d-8b47cb8fdf18';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'AnnotationViewer',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<script src="/sites/all/themes/sky/lib/jquery-1.9.1.js"></script>
    <script src="/sites/all/themes/sky/lib/annotator-full.1.2.9/annotator-full.min.js"></script>
    <!-- Locale for language -->
    <script src="/sites/all/themes/sky/lib/jquery-i18n-master/jquery.i18n.min.js"></script>
    <!-- For show the annotation creation date -->
   <!-- <script src="/sites/all/themes/sky/lib/jquery.dateFormat.js"></script> -->
    <!-- File with the translations -->
    <script src="/sites/all/themes/sky/locale/en/annotator.js"></script>
    <!-- Scroll panel -->
    <script src="/sites/all/themes/sky/lib/jquery.slimscroll.js"></script>
   
    <!-- anotator plug in -->
    <script src="/sites/all/themes/sky/src/view_annotator.js"></script>
    <script src="/sites/all/themes/sky/src/categories.js"></script>
    <script src="/sites/all/themes/sky/lib/tinymce/tinymce.min.js"></script>
    <script src="/sites/all/themes/sky/src/richEditor.js"></script>
<script>
                       jQuery(function ($) {
 	$.i18n.load(i18n_dict);
 	var annotator = $(\'.field-name-body\').annotator().annotator().data(\'annotator\');
 	var propietary = \'anon\';
	 /*$(\'.field-name-body\').annotator().annotator({
        readOnly: true
    });*/
 	annotator.addPlugin(\'Permissions\', {
 		user: propietary,
 		permissions: {
 			"read": [propietary],
 			\'update\': [],
 			\'delete\': [],
 			\'admin\': []
 		},
 		showViewPermissionsCheckbox: false,
 		showEditPermissionsCheckbox: false
 	});
 	$(\'.field-name-body\').annotator().annotator(\'addPlugin\', \'Filter\', {
 		filters: [
{
 			label: \'Category\',
 			property: \'category\'
 		},
{
 			label: \'Tag\',
 			property: \'tags\',
 			isFiltered: function (input, tags) {
 				if (input && tags && tags.length) {
 					var keywords = input.split(/\\s+/g);
 					for (var i = 0; i < keywords.length; i += 1) {
 						for (var j = 0; j < tags.length; j += 1) {
 							if (tags[j].indexOf(keywords[i]) !== -1) {
 								return true;
 							}
 						}
 					}
 				}
 				return false;
 			}
 		}]
 	});
 	$(\'.field-name-body\').annotator().annotator(\'addPlugin\', \'RichEditor\');
 	$(\'.field-name-body\').annotator().annotator(\'addPlugin\', \'Categories\', {
 		Historical: \'annotator-hl-historical\',
 		Textual: \'annotator-hl-textual\',
Cultural: \'annotator-hl-cultural\',
 		Interpretative: \'annotator-hl-interpretative\',
Linguistic: \'annotator-hl-linguistic\'
 	});
 	$(\'.field-name-body\').annotator().annotator(\'addPlugin\', \'AnnotatorViewer\');
 	//Annotation scroll
 	$(\'#anotacions-uoc-panel\').slimscroll({
 		height: \'100%\'
 	});
 });
</script>',
    'format' => 'unfiltered_html',
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
  $pane->uuid = '97ecba35-1080-4384-ac1d-8b47cb8fdf18';
  $display->content['new-97ecba35-1080-4384-ac1d-8b47cb8fdf18'] = $pane;
  $display->panels['one_main'][1] = 'new-97ecba35-1080-4384-ac1d-8b47cb8fdf18';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e8baef06-00be-413b-a1ee-ef0c852fc34e';
  $mini->display = $display;
  $export['annotation_filters'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'node_metadata';
  $mini->category = '';
  $mini->admin_title = 'Annotations';
  $mini->admin_description = 'The annotations only';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
    'one_main' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e2bbb89a-9dd7-4cc4-a70c-80c42098fcae';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'node_metadata';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b8dc881e-2aae-4050-b7a9-6dd0e8070e02';
  $pane->panel = 'one_main';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Annotations',
    'title' => '',
    'title_heading' => 'h2',
    'body' => '<!--<h4>View</h4>-->
              <div id="annotation-viewer">
              </div>

<script type="text/template" id="annotation-template">
    <div id="annotation-table">
        <h2>Annotations</h2>
            <span class="anno-label">Quote:</span>
            <span id="quote[%uuid%]" class="sbquote details">&quot;[%quote%]&quot;</span>
        
        
            <div class="anno-label">Comment:</div>
            <div><span id="text[%uuid%]" class="sbtext details">[%&text%]</span></div>
        
        
            <div><span class="anno-label">Author:</span>
            <span id="info[%uuid%]" class="sbinfo details">[%username%]</span></div>
        
            <div><span class="anno-label">Tags:</span>
            <span id="tags[%uuid%]" class="sbtags details">[%#tags%]<span class="label label-default">[%.%]</span>[%/tags%]</span></div>
        
            <div><span class="anno-label">Categories:</span>
            <span id="categories[%uuid%]" class="sbcats details">[%#annotation_categories%]<span class="label label-default">[%.%]</span> [%/annotation_categories%]</span></span></div>
        
    </div>
</script>',
    'format' => 'unfiltered_html',
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
  $pane->uuid = 'b8dc881e-2aae-4050-b7a9-6dd0e8070e02';
  $display->content['new-b8dc881e-2aae-4050-b7a9-6dd0e8070e02'] = $pane;
  $display->panels['one_main'][0] = 'new-b8dc881e-2aae-4050-b7a9-6dd0e8070e02';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['node_metadata'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'node_metadata2';
  $mini->category = '';
  $mini->admin_title = 'Node Metadata';
  $mini->admin_description = 'Just the metadata gathered from the node';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => array(
        'region_accordion_id' => 'node-metadata',
        'active' => '0',
        'collapsible' => 1,
        'animated' => 'none',
        'autoHeight' => '0',
        'heightStyle' => 'content',
        'header' => 'h2',
      ),
    ),
    'one_main' => array(
      'style' => 'accordion',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a0fafc7d-2e30-4161-a60a-eda6bb86d2e0';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'node_metadata2';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-f2305b81-0773-4404-a42d-9f27b8217a20';
  $pane->panel = 'one_main';
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
  $pane->uuid = 'f2305b81-0773-4404-a42d-9f27b8217a20';
  $display->content['new-f2305b81-0773-4404-a42d-9f27b8217a20'] = $pane;
  $display->panels['one_main'][0] = 'new-f2305b81-0773-4404-a42d-9f27b8217a20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['node_metadata2'] = $mini;

  return $export;
}
