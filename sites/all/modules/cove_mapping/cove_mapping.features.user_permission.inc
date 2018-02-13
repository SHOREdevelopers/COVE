<?php
/**
 * @file
 * cove_mapping.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cove_mapping_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access geocoder autocomplete'.
  $permissions['access geocoder autocomplete'] = array(
    'name' => 'access geocoder autocomplete',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder_autocomplete',
  );

  // Exported permission: 'create field_associated_place_anchor_ta'.
  $permissions['create field_associated_place_anchor_ta'] = array(
    'name' => 'create field_associated_place_anchor_ta',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_geocoder'.
  $permissions['create field_geocoder'] = array(
    'name' => 'create field_geocoder',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_latitude_longitude'.
  $permissions['create field_latitude_longitude'] = array(
    'name' => 'create field_latitude_longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_place_search'.
  $permissions['create field_place_search'] = array(
    'name' => 'create field_place_search',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_places_in_this_map'.
  $permissions['create field_places_in_this_map'] = array(
    'name' => 'create field_places_in_this_map',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_vetted_'.
  $permissions['create field_vetted_'] = array(
    'name' => 'create field_vetted_',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create map content'.
  $permissions['create map content'] = array(
    'name' => 'create map content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create place content'.
  $permissions['create place content'] = array(
    'name' => 'create place content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any map content'.
  $permissions['delete any map content'] = array(
    'name' => 'delete any map content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any place content'.
  $permissions['delete any place content'] = array(
    'name' => 'delete any place content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own map content'.
  $permissions['delete own map content'] = array(
    'name' => 'delete own map content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own place content'.
  $permissions['delete own place content'] = array(
    'name' => 'delete own place content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any map content'.
  $permissions['edit any map content'] = array(
    'name' => 'edit any map content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any place content'.
  $permissions['edit any place content'] = array(
    'name' => 'edit any place content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_associated_place_anchor_ta'.
  $permissions['edit field_associated_place_anchor_ta'] = array(
    'name' => 'edit field_associated_place_anchor_ta',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_geocoder'.
  $permissions['edit field_geocoder'] = array(
    'name' => 'edit field_geocoder',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_latitude_longitude'.
  $permissions['edit field_latitude_longitude'] = array(
    'name' => 'edit field_latitude_longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_place_search'.
  $permissions['edit field_place_search'] = array(
    'name' => 'edit field_place_search',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_places_in_this_map'.
  $permissions['edit field_places_in_this_map'] = array(
    'name' => 'edit field_places_in_this_map',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_vetted_'.
  $permissions['edit field_vetted_'] = array(
    'name' => 'edit field_vetted_',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_associated_place_anchor_ta'.
  $permissions['edit own field_associated_place_anchor_ta'] = array(
    'name' => 'edit own field_associated_place_anchor_ta',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_geocoder'.
  $permissions['edit own field_geocoder'] = array(
    'name' => 'edit own field_geocoder',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_latitude_longitude'.
  $permissions['edit own field_latitude_longitude'] = array(
    'name' => 'edit own field_latitude_longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_place_search'.
  $permissions['edit own field_place_search'] = array(
    'name' => 'edit own field_place_search',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_places_in_this_map'.
  $permissions['edit own field_places_in_this_map'] = array(
    'name' => 'edit own field_places_in_this_map',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_vetted_'.
  $permissions['edit own field_vetted_'] = array(
    'name' => 'edit own field_vetted_',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own map content'.
  $permissions['edit own map content'] = array(
    'name' => 'edit own map content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own place content'.
  $permissions['edit own place content'] = array(
    'name' => 'edit own place content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'geocoder_service_all_handlers'.
  $permissions['geocoder_service_all_handlers'] = array(
    'name' => 'geocoder_service_all_handlers',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_bing'.
  $permissions['geocoder_service_handler_bing'] = array(
    'name' => 'geocoder_service_handler_bing',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_exif'.
  $permissions['geocoder_service_handler_exif'] = array(
    'name' => 'geocoder_service_handler_exif',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_google'.
  $permissions['geocoder_service_handler_google'] = array(
    'name' => 'geocoder_service_handler_google',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_gpx'.
  $permissions['geocoder_service_handler_gpx'] = array(
    'name' => 'geocoder_service_handler_gpx',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_json'.
  $permissions['geocoder_service_handler_json'] = array(
    'name' => 'geocoder_service_handler_json',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_kml'.
  $permissions['geocoder_service_handler_kml'] = array(
    'name' => 'geocoder_service_handler_kml',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_latlon'.
  $permissions['geocoder_service_handler_latlon'] = array(
    'name' => 'geocoder_service_handler_latlon',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_mapquest_nominatim'.
  $permissions['geocoder_service_handler_mapquest_nominatim'] = array(
    'name' => 'geocoder_service_handler_mapquest_nominatim',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_openstreetmap_nominatim'.
  $permissions['geocoder_service_handler_openstreetmap_nominatim'] = array(
    'name' => 'geocoder_service_handler_openstreetmap_nominatim',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_wkt'.
  $permissions['geocoder_service_handler_wkt'] = array(
    'name' => 'geocoder_service_handler_wkt',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yahoo'.
  $permissions['geocoder_service_handler_yahoo'] = array(
    'name' => 'geocoder_service_handler_yahoo',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'geocoder_service_handler_yandex'.
  $permissions['geocoder_service_handler_yandex'] = array(
    'name' => 'geocoder_service_handler_yandex',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'geocoder',
  );

  // Exported permission: 'view field_associated_place_anchor_ta'.
  $permissions['view field_associated_place_anchor_ta'] = array(
    'name' => 'view field_associated_place_anchor_ta',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_geocoder'.
  $permissions['view field_geocoder'] = array(
    'name' => 'view field_geocoder',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_latitude_longitude'.
  $permissions['view field_latitude_longitude'] = array(
    'name' => 'view field_latitude_longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_place_search'.
  $permissions['view field_place_search'] = array(
    'name' => 'view field_place_search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_places_in_this_map'.
  $permissions['view field_places_in_this_map'] = array(
    'name' => 'view field_places_in_this_map',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_vetted_'.
  $permissions['view field_vetted_'] = array(
    'name' => 'view field_vetted_',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_associated_place_anchor_ta'.
  $permissions['view own field_associated_place_anchor_ta'] = array(
    'name' => 'view own field_associated_place_anchor_ta',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_geocoder'.
  $permissions['view own field_geocoder'] = array(
    'name' => 'view own field_geocoder',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_latitude_longitude'.
  $permissions['view own field_latitude_longitude'] = array(
    'name' => 'view own field_latitude_longitude',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_place_search'.
  $permissions['view own field_place_search'] = array(
    'name' => 'view own field_place_search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_places_in_this_map'.
  $permissions['view own field_places_in_this_map'] = array(
    'name' => 'view own field_places_in_this_map',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_vetted_'.
  $permissions['view own field_vetted_'] = array(
    'name' => 'view own field_vetted_',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
