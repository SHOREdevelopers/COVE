<?php
/**
 * @file
 * rc_gallery.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rc_gallery_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course:create galler_exhibit content'
  $permissions['node:course:create galler_exhibit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:delete any galler_exhibit content'
  $permissions['node:course:delete any galler_exhibit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:delete own galler_exhibit content'
  $permissions['node:course:delete own galler_exhibit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update any galler_exhibit content'
  $permissions['node:course:update any galler_exhibit content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update own galler_exhibit content'
  $permissions['node:course:update own galler_exhibit content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
