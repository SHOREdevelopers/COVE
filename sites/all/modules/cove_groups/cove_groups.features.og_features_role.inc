<?php
/**
 * @file
 * cove_groups.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function cove_groups_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:course:student'.
  $roles['node:course:student'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'course',
    'name' => 'student',
  );

  return $roles;
}
