<?php
/**
 * @file
 * rc_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rc_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
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
function rc_gallery_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rc_gallery_image_default_styles() {
  $styles = array();

  // Exported image style: gallery_for_exhibits.
  $styles['gallery_for_exhibits'] = array(
    'label' => 'gallery_for_exhibits',
    'effects' => array(
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_node.
  $styles['gallery_node'] = array(
    'label' => 'gallery_node',
    'effects' => array(
      7 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 700,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_slideshow.
  $styles['gallery_slideshow'] = array(
    'label' => 'gallery_slideshow',
    'effects' => array(
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 330,
        ),
        'weight' => -10,
      ),
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 230,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_small.
  $styles['gallery_small'] = array(
    'label' => 'gallery_small',
    'effects' => array(
      34 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 250,
        ),
        'weight' => -10,
      ),
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 175,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => -9,
      ),
    ),
  );

  // Exported image style: gallery_zoom.
  $styles['gallery_zoom'] = array(
    'label' => 'Gallery Zoom',
    'effects' => array(
      38 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 2000,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function rc_gallery_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Gallery Collection'),
      'base' => 'node_content',
      'description' => t('For the Romantic Circles Gallery. All Gallery Image nodes must belong to a Collection'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'galler_exhibit' => array(
      'name' => t('Gallery Exhibit'),
      'base' => 'node_content',
      'description' => t('For the Romantic Circles Gallery. These are the exhibits that may contain any image from any Collection in the Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery_exhibit_item' => array(
      'name' => t('Gallery Exhibit Item'),
      'base' => 'node_content',
      'description' => t('A publicly invisible step between Gallery Exhibit and Gallery Image, for holding exhibit specific curation info for the image'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'gallery_image' => array(
      'name' => t('Gallery Image'),
      'base' => 'node_content',
      'description' => t('A content type for image nodes from the Romantic Circles Gallery. Stores the Dublin Core metadata set. Not to be confused with the "Image Gallery" content type, which is just for generic image galleries across the site. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
