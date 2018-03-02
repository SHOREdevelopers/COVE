<?php
/**
 * @file
 * rc_gallery.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function rc_gallery_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gallery_images_from_rc-description-html_entity_decode';
  $feeds_tamper->importer = 'gallery_images_from_rc';
  $feeds_tamper->source = 'description';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['gallery_images_from_rc-description-html_entity_decode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gallery_images_from_rc-galleryimage-find_replace';
  $feeds_tamper->importer = 'gallery_images_from_rc';
  $feeds_tamper->source = 'galleryimage';
  $feeds_tamper->plugin_id = 'find_replace';
  $feeds_tamper->settings = array(
    'find' => 'public://',
    'replace' => 'http://www.rc.umd.edu/sites/default/files/',
    'case_sensitive' => 0,
    'word_boundaries' => 0,
    'whole' => 0,
    'regex' => FALSE,
    'func' => 'str_ireplace',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Find replace';
  $export['gallery_images_from_rc-galleryimage-find_replace'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'gallery_images_from_rc-title-html_entity_decode';
  $feeds_tamper->importer = 'gallery_images_from_rc';
  $feeds_tamper->source = 'title';
  $feeds_tamper->plugin_id = 'html_entity_decode';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'HTML entity decode';
  $export['gallery_images_from_rc-title-html_entity_decode'] = $feeds_tamper;

  return $export;
}
