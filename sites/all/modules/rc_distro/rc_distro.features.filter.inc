<?php
/**
 * @file
 * rc_distro.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function rc_distro_filter_default_formats() {
$formats = array();
 
  // Exported format: Filtered HTML.
  $formats[1] = array(
    'format' => 1,
    'name' => 'Filtered HTML OLD',
    'cache' => 1,
    'status' => 1,
    'weight' => -1,
    'filters' => array(
      'filter_url' => array(
        'weight' => -10,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_html' => array(
        'weight' => -9,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <a> <em> <strong> <cite> <code> <ul> <ol> <li> <dl> <dt> <dd>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => -8,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => -7,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );
  
   // Exported format: Full HTML.
  $formats[2] = array(
    'format' => 2,
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Unfiltered HTML.
  $formats[3] = array(
    'format' => 3,
    'name' => 'Unfiltered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  // Exported format: Wordpress format.
  $formats[4] = array(
    'format' => 4,
    'name' => 'Wordpress format',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_url' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats[9] = array(
    'format' => 9,
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );
  return $formats;
}
