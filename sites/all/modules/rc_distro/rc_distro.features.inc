<?php
/**
 * @file
 * rc_distro.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function rc_distro_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function rc_distro_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function rc_distro_image_default_styles() {
  $styles = array();

  // Exported image style: 100px_prax_icon.
  $styles['100px_prax_icon'] = array(
    'name' => '100px_prax_icon',
    'label' => '100px_prax_icon',
    'effects' => array(
      1 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 40px_icon.
  $styles['40px_icon'] = array(
    'name' => '40px_icon',
    'label' => '40px_icon',
    'effects' => array(
      13 => array(
        'label' => 'Resize',
        'help' => 'Resizing will make images an exact set of dimensions. This may cause images to be stretched or shrunk disproportionately.',
        'effect callback' => 'image_resize_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_resize',
        'data' => array(
          'width' => 40,
          'height' => 40,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: front_banner.
  $styles['front_banner'] = array(
    'name' => 'front_banner',
    'label' => 'front_banner',
    'effects' => array(),
  );

  // Exported image style: front_thumbnail.
  $styles['front_thumbnail'] = array(
    'name' => 'front_thumbnail',
    'label' => 'front_thumbnail',
    'effects' => array(
      19 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 138,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: index_banner.
  $styles['index_banner'] = array(
    'name' => 'index_banner',
    'label' => 'index_banner',
    'effects' => array(
      15 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 640,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: interior_banner.
  $styles['interior_banner'] = array(
    'name' => 'interior_banner',
    'label' => 'interior_banner',
    'effects' => array(
      17 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => 1000,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_thumbnail.
  $styles['profile_thumbnail'] = array(
    'name' => 'profile_thumbnail',
    'label' => 'profile_thumbnail',
    'effects' => array(
      14 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 100,
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
function rc_distro_node_info() {
  $items = array(
    'contributor' => array(
      'name' => t('Contributor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('A (experimental) node-referencable container for taxonomic roles'),
    ),
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
    'gallery' => array(
      'name' => t('Image Gallery'),
      'base' => 'node_content',
      'description' => t('Generic content type for galleries and/or gallery images. Not to be confused with "Gallery image," which pertains specifically to the Romantic Circles Gallery'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'general_audio' => array(
      'name' => t('General Audio'),
      'base' => 'node_content',
      'description' => t('A content type for audio nodes that fit in the general "RC Audio" area (i.e. not Poets on Poets)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => t('A modular "exhibit item"-like content type for resource-specific people (as opposed to contributor)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => t('Title should be Lastname, Firstname [Middlename optional]'),
    ),
    'place' => array(
      'name' => t('Place'),
      'base' => 'node_content',
      'description' => t('Holds descriptions and geographical data (latitude and longitude). Used primarily plotting on maps.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'praxis_index_page' => array(
      'name' => t('Praxis Resource'),
      'base' => 'node_content',
      'description' => t('A page for Praxis. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'praxis_page' => array(
      'name' => t('Praxis Page'),
      'base' => 'node_content',
      'description' => t('A page for Praxis. A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'section' => array(
      'name' => t('Section'),
      'base' => 'node_content',
      'description' => t('Overall site hierarchies content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'thelwall_chronologh' => array(
      'name' => t('Chronology Entry'),
      'base' => 'node_content',
      'description' => t('Content type for Thelwall Chronology'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Content type for storing video'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
