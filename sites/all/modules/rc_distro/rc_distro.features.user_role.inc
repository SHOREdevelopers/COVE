<?php
/**
 * @file
 * rc_distro.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function rc_distro_user_default_roles() {
  $roles = array();

  // Exported role: author.
  $roles['author'] = array(
    'name' => 'author',
    'weight' => 3,
  );

  // Exported role: blog author.
  $roles['blog author'] = array(
    'name' => 'blog author',
    'weight' => 2,
  );

  // Exported role: blog editor.
  $roles['blog editor'] = array(
    'name' => 'blog editor',
    'weight' => 4,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 6,
  );

  // Exported role: manager.
  $roles['manager'] = array(
    'name' => 'manager',
    'weight' => 8,
  );

  // Exported role: section editor.
  $roles['section editor'] = array(
    'name' => 'section editor',
    'weight' => 7,
  );

  return $roles;
}
