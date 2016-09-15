<?php
/**
 * @file
 * cove_mapping.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cove_mapping_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "default_openlayers_components") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_controls") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_layers") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_sources") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cove_mapping_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cove_mapping_node_info() {
  $items = array(
    'map' => array(
      'name' => t('Map'),
      'base' => 'node_content',
      'description' => t('Provide basic information about your map. Give it a title and a description so that folks can understand the scope and purpose of the map. You\'ll add places to your map in a second step. '),
      'has_title' => '1',
      'title_label' => t('Map name'),
      'help' => '',
    ),
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Holds descriptions and geographical data (latitude and longitude). Used primarily plotting on maps.'),
      'has_title' => '1',
      'title_label' => t('Place name'),
      'help' => t('Now that you\'ve created a map, create a series of geo-located places to populate your map. To create many  items at once, use the "Save and add another" button below. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
