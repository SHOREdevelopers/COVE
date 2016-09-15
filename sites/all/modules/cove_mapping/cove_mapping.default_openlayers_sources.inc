<?php
/**
 * @file
 * cove_mapping.default_openlayers_sources.inc
 */

/**
 * Implements hook_default_openlayers_sources().
 */
function cove_mapping_default_openlayers_sources() {
  $export = array();

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'arrowsmith_aaron_map_of_england_and_wales_1820';
  $ol_source->name = 'Arrowsmith, Aaron: Map of England and Wales, 1820';
  $ol_source->description = 'An historical map from 1820';
  $ol_source->factory_service = 'openlayers.Source:XYZ';
  $ol_source->options = array(
    'url' => 'http://www.rc.umd.edu/sites/default/files/3509/{z}/{x}/{-y}.png',
    'params' => array(),
  );
  $export['arrowsmith_aaron_map_of_england_and_wales_1820'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'cary_john_map_of_england_1807';
  $ol_source->name = 'Cary, John: Map of England, 1807';
  $ol_source->description = 'An historical map from 1807';
  $ol_source->factory_service = 'openlayers.Source:XYZ';
  $ol_source->options = array(
    'url' => 'http://www.rc.umd.edu/sites/default/files/3511/{z}/{x}/{-y}.png',
  );
  $export['cary_john_map_of_england_1807'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'great_britain_os_one_inch_1885_1900';
  $ol_source->name = 'Great Britain - OS One Inch, 1885-1900';
  $ol_source->description = 'Served from National Library of Scotland site';
  $ol_source->factory_service = 'openlayers.Source:XYZ';
  $ol_source->options = array(
    'url' => 'http://geo.nls.uk/maps/os/1inch_2nd_ed/{z}/{x}/{-y}.png',
  );
  $export['great_britain_os_one_inch_1885_1900'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'views_geojson_openlayers_examples_geojson_feed_1';
  $ol_source->name = 'Views GeoJSON source: openlayers_examples_geojson_feed_1';
  $ol_source->description = 'This source is automatically generated. See View openlayers_examples_geojson at display feed_1';
  $ol_source->factory_service = 'openlayers.Source:GeoJSON';
  $ol_source->options = array(
    'url' => 'openlayers-examples/feed.geojson',
  );
  $export['views_geojson_openlayers_examples_geojson_feed_1'] = $ol_source;

  $ol_source = new stdClass();
  $ol_source->disabled = FALSE; /* Edit this to true to make a default ol_source disabled initially */
  $ol_source->api_version = 1;
  $ol_source->machine_name = 'views_geojson_openlayers_examples_geojson_feed_2';
  $ol_source->name = 'Views GeoJSON source: openlayers_examples_geojson_feed_2';
  $ol_source->description = 'This source is automatically generated. See View openlayers_examples_geojson at display feed_2';
  $ol_source->factory_service = 'openlayers.Source:GeoJSON';
  $ol_source->options = array(
    'url' => 'openlayers-examples/popup.geojson',
  );
  $export['views_geojson_openlayers_examples_geojson_feed_2'] = $ol_source;

  return $export;
}
