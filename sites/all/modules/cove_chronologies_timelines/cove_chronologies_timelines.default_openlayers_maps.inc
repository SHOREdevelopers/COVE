<?php
/**
 * @file
 * cove_chronologies_timelines.default_openlayers_maps.inc
 */

/**
 * Implements hook_default_openlayers_maps().
 */
function cove_chronologies_timelines_default_openlayers_maps() {
  $export = array();

  $ol_map = new stdClass();
  $ol_map->disabled = FALSE; /* Edit this to true to make a default ol_map disabled initially */
  $ol_map->api_version = 1;
  $ol_map->machine_name = 'clone_of_master_places_map';
  $ol_map->name = 'Map Per Event';
  $ol_map->description = 'Shows places associated with events on events timeline page';
  $ol_map->factory_service = 'openlayers.Map:OLMap';
  $ol_map->options = array(
    'width' => 'auto',
    'height' => '700px',
    'provideBlockLayerSwitcher' => 1,
    'contextualLinks' => 1,
    'view' => array(
      'center' => array(
        'lon' => 42.766513646231004,
        'lat' => 7.2091746050659999,
      ),
      'rotation' => 0,
      'zoom' => 2,
      'minZoom' => 0,
      'maxZoom' => 0,
    ),
    'renderer' => 'canvas',
    'layers' => array(
      0 => 'openlayers_layer_tile_osm',
      1 => 'great_britain_os_one_inch_1885_1900',
      2 => 'clone_of_custom_map_data_overlay',
    ),
    'controls' => array(
      0 => 'openlayers_control_fullscreen',
      1 => 'openlayers_control_rotate',
      2 => 'openlayers_control_zoom',
      3 => 'clone_of_openlayers_examples_control_simple_layer_switcher',
    ),
    'interactions' => array(
      0 => 'openlayers_interaction_dragpan',
      1 => 'openlayers_interaction_dragrotate',
      2 => 'openlayers_interaction_doubleclickzoom',
    ),
    'components' => array(
      0 => 'clone_of_place_map_pop_up',
    ),
  );
  $export['clone_of_master_places_map'] = $ol_map;

  return $export;
}
