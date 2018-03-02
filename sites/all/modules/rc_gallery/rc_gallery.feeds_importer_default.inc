<?php
/**
 * @file
 * rc_gallery.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function rc_gallery_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'gallery_images_from_rc';
  $feeds_importer->config = array(
    'name' => 'Gallery Images from RC',
    'description' => 'Pulls in xml from RC\'s Gallery REST API',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http',
        'accept_invalid_cert' => 0,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => '//result/item',
        ),
        'sources' => array(
          'title' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '1',
          ),
          'description' => array(
            'name' => 'description',
            'value' => 'description',
            'raw' => 1,
            'inner' => 1,
            'debug' => 0,
            'weight' => '2',
          ),
          'guid' => array(
            'name' => 'guid',
            'value' => 'nid',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '3',
          ),
          'galleryimage' => array(
            'name' => 'galleryimage',
            'value' => 'field_galleryimage/item/uri',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '4',
          ),
          'orig_pub_date' => array(
            'name' => 'Orig Pub Date',
            'value' => 'field_original_publication_date/item',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '5',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'auto',
        ),
        'use_tidy' => FALSE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'description',
            'target' => 'field_description',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'galleryimage',
            'target' => 'field_galleryimage:uri',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'orig_pub_date',
            'target' => 'field_original_publication_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'unfiltered_html',
        'skip_hash_check' => 0,
        'bundle' => 'gallery_image',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['gallery_images_from_rc'] = $feeds_importer;

  return $export;
}
