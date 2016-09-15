<?php
/**
 * @file
 * branch_imports.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function branch_imports_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'branch_events';
  $feeds_importer->config = array(
    'name' => 'BRANCH events',
    'description' => 'Importer for Branch events RSS feed',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'xml',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsExXml',
      'config' => array(
        'context' => array(
          'value' => 'rss/channel/item',
        ),
        'sources' => array(
          'blank_source_1' => array(
            'name' => 'from day',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_started\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '1',
          ),
          'blank_source_2' => array(
            'name' => 'from month',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_started\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '2',
          ),
          'blank_source_3' => array(
            'name' => 'from year',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_started\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '3',
          ),
          'blank_source_4' => array(
            'name' => 'to day',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_ended\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '4',
          ),
          'blank_source_5' => array(
            'name' => 'to month',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_ended\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '5',
          ),
          'blank_source_6' => array(
            'name' => 'to year',
            'value' => 'wp:postmeta/wp:meta_key[text() = \'event_date_ended\']/following-sibling::wp:meta_value',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '6',
          ),
          'blank_source_7' => array(
            'name' => 'title',
            'value' => 'title',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '7',
          ),
          'blank_source_8' => array(
            'name' => 'guid',
            'value' => 'wp:post_id',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '8',
          ),
          'blank_source_9' => array(
            'name' => 'description',
            'value' => 'content:encoded',
            'raw' => 0,
            'inner' => 0,
            'debug' => 1,
            'weight' => '9',
          ),
          'blank_source_10' => array(
            'name' => 'source',
            'value' => '',
            'raw' => 0,
            'inner' => 0,
            'debug' => 0,
            'weight' => '10',
          ),
        ),
        'display_errors' => 1,
        'debug_mode' => 1,
        'source_encoding' => array(
          0 => 'UTF-8',
        ),
        'use_tidy' => 0,
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
            'source' => 'blank_source_1',
            'target' => 'field_event_date:from:day',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'blank_source_2',
            'target' => 'field_event_date:from:month',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'blank_source_3',
            'target' => 'field_event_date:from:year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'blank_source_4',
            'target' => 'field_event_date:to:day',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'blank_source_5',
            'target' => 'field_event_date:to:month',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'blank_source_6',
            'target' => 'field_event_date:to:year',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'blank_source_7',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'blank_source_8',
            'target' => 'guid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'blank_source_9',
            'target' => 'field_event2',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'blank_source_10',
            'target' => 'field_event_source',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'delete',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'chronology_entry',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['branch_events'] = $feeds_importer;

  return $export;
}
