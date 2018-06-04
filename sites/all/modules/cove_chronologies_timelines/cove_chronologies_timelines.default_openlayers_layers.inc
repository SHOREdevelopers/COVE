<?php
/**
 * @file
 * cove_chronologies_timelines.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function cove_chronologies_timelines_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'clone_of_custom_map_data_overlay';
  $ol_layer->name = 'Map Per Event Data Overlay';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_cove_master_map_openlayers_1',
    'visible' => 1,
    'style' => 'openlayers_examples_style_icon_marker',
  );
  $export['clone_of_custom_map_data_overlay'] = $ol_layer;

  return $export;
}
