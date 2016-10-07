<?php
/**
 * @file
 * cove_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cove_groups_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cove_groups_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cove_groups_node_info() {
  $items = array(
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Content type for course-based groups'),
      'has_title' => '1',
      'title_label' => t('Course name'),
      'help' => t('As an administrator, your fist step is to create a course. You can then add content and users.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
