<?php
/**
 * @file
 * branch_imports.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function branch_imports_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_1-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_1';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$day  = $field[2];
return $day;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_1-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_1-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_1-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_1-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_1';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_1-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_10-default_value';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_10';
  $feeds_tamper->plugin_id = 'default_value';
  $feeds_tamper->settings = array(
    'default_value' => 'BRANCH',
    'only_if_empty' => 0,
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Set value or default value';
  $export['branch_events-blank_source_10-default_value'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_2-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_2';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$month  = $field[1];
return $month;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_2-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_2-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_2';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_2-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_2-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_2';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_2-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_3-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$year  = $field[0];
return $year;',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_3-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_3-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_3-trim_left';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_3-trim_left'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_4-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_4';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$day  = $field[2];
return $day;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_4-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_4-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_4';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_4-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_4-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_4';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_4-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_5-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_5';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$month  = $field[1];
return $month;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_5-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_5-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_5';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_5-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_5-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_5';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_5-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_6-php';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_6';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$year  = $field[0];
return $year;',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events-blank_source_6-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_6-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_6';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_6-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_6-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_6';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_6-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_9-trim';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_9';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_9-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events-blank_source_9-trim_right';
  $feeds_tamper->importer = 'branch_events';
  $feeds_tamper->source = 'blank_source_9';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events-blank_source_9-trim_right'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events_experiment-blank_source_3-php';
  $feeds_tamper->importer = 'branch_events_experiment';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'php';
  $feeds_tamper->settings = array(
    'php' => '$field = explode(\'-\', $field);
$year  = $field[0];
return $year;',
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Execute php code';
  $export['branch_events_experiment-blank_source_3-php'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events_experiment-blank_source_3-trim';
  $feeds_tamper->importer = 'branch_events_experiment';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '9',
    'side' => 'ltrim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['branch_events_experiment-blank_source_3-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'branch_events_experiment-blank_source_3-trim_left';
  $feeds_tamper->importer = 'branch_events_experiment';
  $feeds_tamper->source = 'blank_source_3';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '3',
    'side' => 'rtrim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['branch_events_experiment-blank_source_3-trim_left'] = $feeds_tamper;

  return $export;
}
