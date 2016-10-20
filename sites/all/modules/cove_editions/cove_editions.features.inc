<?php
/**
 * @file
 * cove_editions.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cove_editions_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cove_editions_node_info() {
  $items = array(
    'editions_index_page' => array(
      'name' => t('Editions Resource'),
      'base' => 'node_content',
      'description' => t('Master Resource Page for Editions. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'editions_page' => array(
      'name' => t('Editions Page'),
      'base' => 'node_content',
      'description' => t('For Editions. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
