<?php
/**
 * @file
 * cove_mapping.default_openlayers_controls.inc
 */

/**
 * Implements hook_default_openlayers_controls().
 */
function cove_mapping_default_openlayers_controls() {
  $export = array();

  $ol_control = new stdClass();
  $ol_control->disabled = FALSE; /* Edit this to true to make a default ol_control disabled initially */
  $ol_control->api_version = 1;
  $ol_control->machine_name = 'clone_of_openlayers_examples_control_simple_layer_switcher';
  $ol_control->name = 'Place Map Simple layer switcher';
  $ol_control->description = '';
  $ol_control->factory_service = 'openlayers.Control:LayerSwitcher';
  $ol_control->options = array(
    'label' => 'Layers',
    'layers' => array(
      'custom_map_data_overlay' => 'custom_map_data_overlay',
      'great_britain_os_one_inch_1885_1900' => 'great_britain_os_one_inch_1885_1900',
      'openlayers_layer_tile_osm' => 'openlayers_layer_tile_osm',
    ),
    'multiselect' => 1,
    'layer_labels' => array(
      'custom_map_data_overlay' => 'Custom Map Data Overlay',
      'great_britain_os_one_inch_1885_1900' => 'Great Britain - OS One Inch, 1885-1900',
      'openlayers_layer_tile_osm' => 'OpenStreetMap',
    ),
  );
  $export['clone_of_openlayers_examples_control_simple_layer_switcher'] = $ol_control;

  $ol_control = new stdClass();
  $ol_control->disabled = FALSE; /* Edit this to true to make a default ol_control disabled initially */
  $ol_control->api_version = 1;
  $ol_control->machine_name = 'place_map_layer_switcher';
  $ol_control->name = 'Place Map OL3LayerSwitcher';
  $ol_control->description = 'Layer Switcher for the standard COVE Places Map';
  $ol_control->factory_service = 'openlayers.Control:OL3LayerSwitcher';
  $ol_control->options = array(
    'collapsible' => 1,
    'label' => 'Toggle Layers',
    'layers' => array(
      'arrowsmith_aaron_map_of_england_and_wales_1820_' => 'arrowsmith_aaron_map_of_england_and_wales_1820_',
      'cary_john_map_of_england_1807' => 'cary_john_map_of_england_1807',
      'clone_of_openlayers_examples_layer_googlemaps' => 'clone_of_openlayers_examples_layer_googlemaps',
      'places_map' => 'places_map',
    ),
    'multiselect' => 1,
    'layer_labels' => array(
      'clone_of_openlayers_examples_layer_googlemaps' => 'Google Map Hybrid',
      'places_map' => 'Places Map Overlay',
    ),
  );
  $export['place_map_layer_switcher'] = $ol_control;

  $ol_control = new stdClass();
  $ol_control->disabled = FALSE; /* Edit this to true to make a default ol_control disabled initially */
  $ol_control->api_version = 1;
  $ol_control->machine_name = 'places_map_full_screen';
  $ol_control->name = 'Places Map Full Screen';
  $ol_control->description = '';
  $ol_control->factory_service = 'openlayers.Control:FullScreen';
  $ol_control->options = array();
  $export['places_map_full_screen'] = $ol_control;

  return $export;
}
