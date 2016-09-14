<?php
/**
 * @file
 * cove_chronologies_timelines.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cove_chronologies_timelines_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cove_chronologies_timelines_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cove_chronologies_timelines_node_info() {
  $items = array(
    'chronology' => array(
      'name' => t('Chronology'),
      'base' => 'node_content',
      'description' => t('Parent to chronology entries. Allows grouping of chronological entries into discrete chronologies.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Provide basic information about your chronology. Give it a title and a description so that folks can understand the scope and purpose of the chronology. You\'ll add entries to your chronology in a second step. '),
    ),
    'chronology_entry' => array(
      'name' => t('Chronology Entry'),
      'base' => 'node_content',
      'description' => t('Stories individual entries (rows) in a chronology or timeline. '),
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => t('Now that you\'ve created a chronology, create a series of entries to populate your chronology. To create many  items at once, use the "Save and add another" button below. '),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
