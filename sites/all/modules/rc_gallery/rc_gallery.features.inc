<?php
/**
 * @file
 * rc_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rc_gallery_ctools_plugin_api($module = NULL, $api = NULL) {
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
    'name' => 'gallery_for_exhibits',
    'label' => 'gallery_for_exhibits',
    'effects' => array(
      35 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
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
    'name' => 'gallery_node',
    'label' => 'gallery_node',
    'effects' => array(
      37 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 620,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: gallery_slideshow.
  $styles['gallery_slideshow'] = array(
    'name' => 'gallery_slideshow',
    'label' => 'gallery_slideshow',
    'effects' => array(
      33 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 230,
          'height' => 330,
        ),
        'weight' => -10,
      ),
      27 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'gallery_small',
    'label' => 'gallery_small',
    'effects' => array(
      34 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 175,
          'height' => 250,
        ),
        'weight' => -10,
      ),
      28 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
    'name' => 'gallery_zoom',
    'label' => 'Gallery Zoom',
    'effects' => array(
      38 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
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
  return $items;
}
