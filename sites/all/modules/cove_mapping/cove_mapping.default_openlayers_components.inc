<?php
/**
 * @file
 * cove_mapping.default_openlayers_components.inc
 */

/**
 * Implements hook_default_openlayers_components().
 */
function cove_mapping_default_openlayers_components() {
  $export = array();

  $ol_component = new stdClass();
  $ol_component->disabled = FALSE; /* Edit this to true to make a default ol_component disabled initially */
  $ol_component->api_version = 1;
  $ol_component->machine_name = 'place_map_pop_up';
  $ol_component->name = 'Place Map pop-up';
  $ol_component->description = 'A pop-up for the Places Map';
  $ol_component->factory_service = 'openlayers.Component:Popup';
  $ol_component->options = array(
    'frontend_layers' => array(
      'custom_map_data_overlay' => 'custom_map_data_overlay',
    ),
    'closer' => 1,
    'positioning' => 'top-center',
    'autoPan' => 1,
    'autoPanAnimation' => '1000',
    'autoPanMargin' => '20',
  );
  $export['place_map_pop_up'] = $ol_component;

  return $export;
}
