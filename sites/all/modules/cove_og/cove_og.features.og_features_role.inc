<?php
/**
 * @file
 * cove_og.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function cove_og_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:course:Student'.
  $roles['node:course:Student'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'Student',
  );

  // Exported OG Role: 'node:course:Teacher'.
  $roles['node:course:Teacher'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'Teacher',
  );

  return $roles;
}
