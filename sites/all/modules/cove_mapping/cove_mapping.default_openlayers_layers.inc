<?php
/**
 * @file
 * cove_mapping.default_openlayers_layers.inc
 */

/**
 * Implements hook_default_openlayers_layers().
 */
function cove_mapping_default_openlayers_layers() {
  $export = array();

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'arrowsmith_aaron_map_of_england_and_wales_1820_';
  $ol_layer->name = 'Arrowsmith, Aaron: Map of England and Wales, 1820 ';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'source' => 'arrowsmith_aaron_map_of_england_and_wales_1820',
    'visible' => 1,
    'opacity' => 1,
  );
  $export['arrowsmith_aaron_map_of_england_and_wales_1820_'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'cary_john_map_of_england_1807';
  $ol_layer->name = 'Cary, John: Map of England, 1807';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'source' => 'cary_john_map_of_england_1807',
    'visible' => 0,
    'opacity' => 1,
  );
  $export['cary_john_map_of_england_1807'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'custom_map';
  $ol_layer->name = 'Custom Map';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_custom_map_page',
    'visible' => 1,
    'style' => 'openlayers_style_invisible',
  );
  $export['custom_map'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'custom_map_data_overlay';
  $ol_layer->name = 'Custom Map Data Overlay';
  $ol_layer->description = '';
  $ol_layer->factory_service = 'openlayers.Layer:Vector';
  $ol_layer->options = array(
    'source' => 'openlayers_views_source_custom_map_openlayers_1',
    'visible' => 1,
    'style' => 'openlayers_examples_style_icon_marker',
  );
  $export['custom_map_data_overlay'] = $ol_layer;

  $ol_layer = new stdClass();
  $ol_layer->disabled = FALSE; /* Edit this to true to make a default ol_layer disabled initially */
  $ol_layer->api_version = 1;
  $ol_layer->machine_name = 'great_britain_os_one_inch_1885_1900';
  $ol_layer->name = 'Great Britain - OS One Inch, 1885-1900';
  $ol_layer->description = 'Served from National Library of Scotland site. ';
  $ol_layer->factory_service = 'openlayers.Layer:Tile';
  $ol_layer->options = array(
    'source' => 'great_britain_os_one_inch_1885_1900',
    'visible' => 1,
    'opacity' => 1,
  );
  $export['great_britain_os_one_inch_1885_1900'] = $ol_layer;

  return $export;
}
