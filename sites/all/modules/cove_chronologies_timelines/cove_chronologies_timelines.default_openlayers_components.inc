<?php
/**
 * @file
 * cove_chronologies_timelines.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function cove_chronologies_timelines_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'clone_of_place_map_pop_up';
  $ol_component->name = 'Map Per Event pop-up';
  $ol_component->description = 'A pop-up for the Places Map';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'frontend_layers' => array(
      'clone_of_custom_map_data_overlay' => 'clone_of_custom_map_data_overlay',
    ),
    'closer' => 1,
    'positioning' => 'top-center',
    'autoPan' => 1,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
  );
  $export['clone_of_place_map_pop_up'] = $ol_component;

  return $export;
}
