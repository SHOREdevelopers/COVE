<?php
/**
 * @file
 * cove_chronologies_timelines.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cove_chronologies_timelines_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer add another'.
  $permissions['administer add another'] = array(
    'name' => 'administer add another',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'addanother',
  );

  // Exported permission: 'create chronology content'.
  $permissions['create chronology content'] = array(
    'name' => 'create chronology content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'author' => 'author',
      'blog author' => 'blog author',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create chronology_entry content'.
  $permissions['create chronology_entry content'] = array(
    'name' => 'create chronology_entry content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_items_in_this_chronology'.
  $permissions['create field_items_in_this_chronology'] = array(
    'name' => 'create field_items_in_this_chronology',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'delete any chronology content'.
  $permissions['delete any chronology content'] = array(
    'name' => 'delete any chronology content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any chronology_entry content'.
  $permissions['delete any chronology_entry content'] = array(
    'name' => 'delete any chronology_entry content',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own chronology content'.
  $permissions['delete own chronology content'] = array(
    'name' => 'delete own chronology content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own chronology_entry content'.
  $permissions['delete own chronology_entry content'] = array(
    'name' => 'delete own chronology_entry content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any chronology content'.
  $permissions['edit any chronology content'] = array(
    'name' => 'edit any chronology content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any chronology_entry content'.
  $permissions['edit any chronology_entry content'] = array(
    'name' => 'edit any chronology_entry content',
    'roles' => array(
      'administrator' => 'administrator',
      'annotator' => 'annotator',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_items_in_this_chronology'.
  $permissions['edit field_items_in_this_chronology'] = array(
    'name' => 'edit field_items_in_this_chronology',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own chronology content'.
  $permissions['edit own chronology content'] = array(
    'name' => 'edit own chronology content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own chronology_entry content'.
  $permissions['edit own chronology_entry content'] = array(
    'name' => 'edit own chronology_entry content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_items_in_this_chronology'.
  $permissions['edit own field_items_in_this_chronology'] = array(
    'name' => 'edit own field_items_in_this_chronology',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'manager' => 'manager',
      'section editor' => 'section editor',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'use add another'.
  $permissions['use add another'] = array(
    'name' => 'use add another',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'addanother',
  );

  // Exported permission: 'view field_items_in_this_chronology'.
  $permissions['view field_items_in_this_chronology'] = array(
    'name' => 'view field_items_in_this_chronology',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_items_in_this_chronology'.
  $permissions['view own field_items_in_this_chronology'] = array(
    'name' => 'view own field_items_in_this_chronology',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'manager' => 'manager',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
