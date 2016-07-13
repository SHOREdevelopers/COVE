<?php
/**
 * @file
 * cove_visualizations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cove_visualizations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access example charts'.
  $permissions['access example charts'] = array(
    'name' => 'access example charts',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer charts'.
  $permissions['administer charts'] = array(
    'name' => 'administer charts',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'charts',
  );

  // Exported permission: 'administer d3'.
  $permissions['administer d3'] = array(
    'name' => 'administer d3',
    'roles' => array(
      'manager' => 'manager',
    ),
    'module' => 'd3',
  );

  return $permissions;
}
