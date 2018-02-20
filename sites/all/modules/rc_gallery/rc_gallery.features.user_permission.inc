<?php
/**
 * @file
 * rc_gallery.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function rc_gallery_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create collection content'.
  $permissions['create collection content'] = array(
    'name' => 'create collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_gallery_items_in_this_exhi'.
  $permissions['create field_gallery_items_in_this_exhi'] = array(
    'name' => 'create field_gallery_items_in_this_exhi',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create galler_exhibit content'.
  $permissions['create galler_exhibit content'] = array(
    'name' => 'create galler_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gallery_exhibit_item content'.
  $permissions['create gallery_exhibit_item content'] = array(
    'name' => 'create gallery_exhibit_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create gallery_image content'.
  $permissions['create gallery_image content'] = array(
    'name' => 'create gallery_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any collection content'.
  $permissions['delete any collection content'] = array(
    'name' => 'delete any collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any galler_exhibit content'.
  $permissions['delete any galler_exhibit content'] = array(
    'name' => 'delete any galler_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery_exhibit_item content'.
  $permissions['delete any gallery_exhibit_item content'] = array(
    'name' => 'delete any gallery_exhibit_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any gallery_image content'.
  $permissions['delete any gallery_image content'] = array(
    'name' => 'delete any gallery_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own collection content'.
  $permissions['delete own collection content'] = array(
    'name' => 'delete own collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own galler_exhibit content'.
  $permissions['delete own galler_exhibit content'] = array(
    'name' => 'delete own galler_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery_exhibit_item content'.
  $permissions['delete own gallery_exhibit_item content'] = array(
    'name' => 'delete own gallery_exhibit_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own gallery_image content'.
  $permissions['delete own gallery_image content'] = array(
    'name' => 'delete own gallery_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any collection content'.
  $permissions['edit any collection content'] = array(
    'name' => 'edit any collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any galler_exhibit content'.
  $permissions['edit any galler_exhibit content'] = array(
    'name' => 'edit any galler_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery_exhibit_item content'.
  $permissions['edit any gallery_exhibit_item content'] = array(
    'name' => 'edit any gallery_exhibit_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any gallery_image content'.
  $permissions['edit any gallery_image content'] = array(
    'name' => 'edit any gallery_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_gallery_items_in_this_exhi'.
  $permissions['edit field_gallery_items_in_this_exhi'] = array(
    'name' => 'edit field_gallery_items_in_this_exhi',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own collection content'.
  $permissions['edit own collection content'] = array(
    'name' => 'edit own collection content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_gallery_items_in_this_exhi'.
  $permissions['edit own field_gallery_items_in_this_exhi'] = array(
    'name' => 'edit own field_gallery_items_in_this_exhi',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own galler_exhibit content'.
  $permissions['edit own galler_exhibit content'] = array(
    'name' => 'edit own galler_exhibit content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery_exhibit_item content'.
  $permissions['edit own gallery_exhibit_item content'] = array(
    'name' => 'edit own gallery_exhibit_item content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own gallery_image content'.
  $permissions['edit own gallery_image content'] = array(
    'name' => 'edit own gallery_image content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'editor' => 'editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_gallery_items_in_this_exhi'.
  $permissions['view field_gallery_items_in_this_exhi'] = array(
    'name' => 'view field_gallery_items_in_this_exhi',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_gallery_items_in_this_exhi'.
  $permissions['view own field_gallery_items_in_this_exhi'] = array(
    'name' => 'view own field_gallery_items_in_this_exhi',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
