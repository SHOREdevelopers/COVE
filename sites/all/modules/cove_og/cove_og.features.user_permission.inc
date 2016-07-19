<?php
/**
 * @file
 * cove_og.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cove_og_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer group'.
  $permissions['administer group'] = array(
    'name' => 'administer group',
    'roles' => array(),
    'module' => 'og',
  );

  return $permissions;
}
