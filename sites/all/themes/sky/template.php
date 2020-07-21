<?php
// Sky by Adaptivethemes.com

/**
 * Override or insert variables into the html template.
 */

function sky_preprocess_html(&$vars) {
  global $theme_key;
  $theme_name = $theme_key;

  // Add a class for the active color scheme
  if (module_exists('color') && function_exists('get_color_scheme_name')) {
    $class = check_plain(get_color_scheme_name($theme_name));
    $vars['classes_array'][] = 'color-scheme-' . drupal_html_class($class);
  }

  // Add class for the active theme
  $vars['classes_array'][] = drupal_html_class($theme_name);

  // Browser sniff and add a class, unreliable but quite useful
  // $vars['classes_array'][] = css_browser_selector();

  // Add theme settings classes
  $settings_array = array(
    'box_shadows',
    'body_background',
    'menu_bullets',
    'menu_bar_position',
    'content_corner_radius',
    'tabs_corner_radius',
  );
  foreach ($settings_array as $setting) {
    $vars['classes_array'][] = at_get_setting($setting);
  }
  drupal_add_css('https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css', array('type' => 'external'));
  drupal_add_css('https://maxcdn.bootstrapcdn.com/font-awesome/4.6.3/css/font-awesome.min.css', array('type' => 'external'));
  drupal_add_css('https://cdnjs.cloudflare.com/ajax/libs/select2/4.0.3/css/select2.min.css', array('type' => 'external'));
  //drupal_add_css('/sites/all/themes/sky/modal.css');
}

/**
 * Override or insert variables into the html template.
 */
function sky_process_html(&$vars) {
  // Hook into the color module.
  if (module_exists('color')) {
    _color_html_alter($vars);
  }
}

/**
 * Override or insert variables into the page template.
 */
function sky_preprocess_page(&$vars) {
  if ($vars['page']['footer'] || $vars['page']['four_first']|| $vars['page']['four_second'] || $vars['page']['four_third'] || $vars['page']['four_fourth']) {
    $vars['classes_array'][] = 'with-footer';
  }
}

/**
 * Override or insert variables into the page template.
 */
function sky_process_page(&$vars) {
  // Hook into the color module.
  if (module_exists('color')) {
    _color_page_alter($vars);
  }
}

/**
 * Override or insert variables into the block template.
 */
function sky_preprocess_block(&$vars) {
  if ($vars['block']->module == 'superfish' || $vars['block']->module == 'nice_menu') {
    $vars['content_attributes_array']['class'][] = 'clearfix';
  }
  if (!$vars['block']->subject) {
    $vars['content_attributes_array']['class'][] = 'no-title';
  }
  if ($vars['block']->region == 'menu_bar' || $vars['block']->region == 'top_menu') {
    $vars['title_attributes_array']['class'][] = 'element-invisible';
  }
}

/**
 * Override or insert variables into the node template.
 */
function sky_preprocess_node(&$vars) {
  // Add class if user picture exists
  if(!empty($vars['submitted']) && $vars['display_submitted']) {
    if ($vars['user_picture']) {
      $vars['header_attributes_array']['class'][] = 'with-picture';
    }
  }
}

/**
 * Override or insert variables into the comment template.
 */
function sky_preprocess_comment(&$vars) {
  // Add class if user picture exists
  if ($vars['picture']) {
    $vars['header_attributes_array']['class'][] = 'with-user-picture';
  }
}


/**
 * Process variables for region.tpl.php
 */
function sky_process_region(&$vars) {
  // Add the click handle inside region menu bar
  if ($vars['region'] === 'menu_bar') {
    $vars['inner_prefix'] = '<h2 class="menu-toggle"><a href="#">' . t('Menu') . '</a></h2>';
  }
}
function sky_preprocess_page(&$variables) {
  drupal_add_library('system', 'ui');
  drupal_add_library('system', 'ui.accordion');
  drupal_add_library('system', 'effects.highlight');
  drupal_add_js('jQuery(document).ready(function(){jQuery("#accordion").accordion({ collapsible: true, heightStyle: content });});', 'inline');
  }

  $vars['scripts'] = drupal_get_js();
}
// Most js loaded in page source but leaving here commented out possibly for later
//drupal_add_js('/sites/all/themes/sky/tooltip.js', array('type' => 'file'));
//drupal_add_js('/sites/all/themes/sky/openannosidebar.js', array('type' => 'file', 'scope' => 'footer'));
//drupal_add_js('/sites/all/themes/sky/lib/jquery-1.9.1.js', array('type' => 'file', 'scope' => 'footer'));
    //drupal_add_js('/sites/all/themes/sky/lib/annotator-full.1.2.9/annotator-full.min.js', array('type' => 'file', 'scope' => 'footer'));
    // Locale for language
    //drupal_add_js('/sites/all/themes/sky/lib/jquery-i18n-master/jquery.i18n.min.js', array('type' => 'file', 'scope' => 'footer'));
    // For show the annotation creation date
    //drupal_add_js('/sites/all/themes/sky/lib/jquery.dateFormat.js', array('type' => 'file', 'scope' => 'footer'));
    // File with the translations
    //drupal_add_js('/sites/all/themes/sky/locale/en/annotator.js', array('type' => 'file', 'scope' => 'footer'));
    // Scroll panel
    //drupal_add_js('/sites/all/themes/sky/lib/jquery.slimscroll.js', array('type' => 'file', 'scope' => 'footer'));
    // annotator
    // anotator plug in
    //drupal_add_js('/sites/all/themes/sky/view_annotator.js', array('type' => 'file', 'scope' => 'footer'));
    //drupal_add_js('/sites/all/themes/sky/src/categories.js', array('type' => 'file', 'scope' => 'footer'));
    //drupal_add_js('/sites/all/themes/sky/lib/tinymce/tinymce.min.js', array('type' => 'file', 'scope' => 'footer'));
    //drupal_add_js('/sites/all/themes/sky/src/richEditor.js', array('type' => 'file', 'scope' => 'footer'));

//drupal_add_js('/sites/all/themes/sky/openannosidebar-new.js', array('type' => 'file', 'scope' => 'footer'));
//drupal_add_js('/sites/all/themes/sky/filter.js', array('type' => 'file', 'scope' => 'footer'));
//drupal_add_js('/sites/all/themes/sky/link-to-highlight.js', array('type' => 'file', 'scope' => 'footer'));
//drupal_add_js('/sites/all/themes/sky/more-colorbox.js');
//drupal_add_js('https://code.jquery.com/jquery-3.1.0.slim.min.js', array('type' => 'external', 'scope' => 'footer'));
//drupal_add_js('https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js', array('type' => 'external', 'scope' => 'header'));
drupal_add_js('/sites/all/libraries/bootstrap/bootstrap.min.js', array('type' => 'external', 'scope' => 'header'));
//drupal_add_js('/sites/all/themes/sky/jquery-noconflict.js', array('type' => 'file', 'scope' => 'header'));
//drupal_add_js('https://cdn.jsdelivr.net/lodash/4.15.0/lodash.core.min.js', array('type' => 'external', 'scope' => 'footer'));
//drupal_add_js('https://cdnjs.cloudflare.com/ajax/libs/mustache.js/2.2.1/mustache.min.js', array('type' => 'external', 'scope' => 'footer'));
//drupal_add_js('https://cdnjs.cloudflare.com/ajax/libs/jQuery-slimScroll/1.3.8/jquery.slimscroll.js', array('type' => 'external', 'scope' => 'header'));
