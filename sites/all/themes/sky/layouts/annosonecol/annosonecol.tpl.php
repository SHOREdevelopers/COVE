<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<div class="panel-display panel-1col clearfix" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel panel-col">
    <div>
    <input type="checkbox" id="togglebox"/>
    <label for="togglebox" id="navtoggler">Annotations</label>
    <div class="panel-2row-row clearfix anno-container">
    	<label for="togglebox" id="closex">Close</label>
    	<?php print $content['annos']; ?>
    </div>
	<div class="panel-2row-row clearfix primary-content"><?php print $content['main']; ?></div>
	<div class="panel-2row-row clearfix right-float"><?php print $content['rightfloat']; ?></div>
    </div>
  </div>
</div>
