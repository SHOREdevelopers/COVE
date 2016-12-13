<?php
/**
 * @file
 * cove_page_turner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cove_page_turner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer page_turner'.
  $permissions['administer page_turner'] = array(
    'name' => 'administer page_turner',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'page_turner',
  );

  // Exported permission: 'flag page_turner_bookmark'.
  $permissions['flag page_turner_bookmark'] = array(
    'name' => 'flag page_turner_bookmark',
    'roles' => array(),
    'module' => 'flag',
  );

  // Exported permission: 'unflag page_turner_bookmark'.
  $permissions['unflag page_turner_bookmark'] = array(
    'name' => 'unflag page_turner_bookmark',
    'roles' => array(),
    'module' => 'flag',
  );

  return $permissions;
}
