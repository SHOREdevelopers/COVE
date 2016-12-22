<?php
/**
 * @file
 * cove_groups.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function cove_groups_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course:add user'
  $permissions['node:course:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:administer group'
  $permissions['node:course:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:approve and deny subscription'
  $permissions['node:course:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:create blog content'
  $permissions['node:course:create blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:create chronology content'
  $permissions['node:course:create chronology content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:create chronology_entry content'
  $permissions['node:course:create chronology_entry content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:create course content'
  $permissions['node:course:create course content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:create map content'
  $permissions['node:course:create map content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:create place content'
  $permissions['node:course:create place content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:create small_group content'
  $permissions['node:course:create small_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any blog content'
  $permissions['node:course:delete any blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any chronology content'
  $permissions['node:course:delete any chronology content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any chronology_entry content'
  $permissions['node:course:delete any chronology_entry content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any course content'
  $permissions['node:course:delete any course content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any map content'
  $permissions['node:course:delete any map content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any place content'
  $permissions['node:course:delete any place content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete any small_group content'
  $permissions['node:course:delete any small_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete own blog content'
  $permissions['node:course:delete own blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:delete own chronology content'
  $permissions['node:course:delete own chronology content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:delete own chronology_entry content'
  $permissions['node:course:delete own chronology_entry content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:delete own course content'
  $permissions['node:course:delete own course content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:delete own map content'
  $permissions['node:course:delete own map content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:delete own place content'
  $permissions['node:course:delete own place content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:delete own small_group content'
  $permissions['node:course:delete own small_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:manage members'
  $permissions['node:course:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:manage permissions'
  $permissions['node:course:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:manage roles'
  $permissions['node:course:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:subscribe'
  $permissions['node:course:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:course:subscribe without approval'
  $permissions['node:course:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:unsubscribe'
  $permissions['node:course:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update any blog content'
  $permissions['node:course:update any blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any chronology content'
  $permissions['node:course:update any chronology content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any chronology_entry content'
  $permissions['node:course:update any chronology_entry content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any course content'
  $permissions['node:course:update any course content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any map content'
  $permissions['node:course:update any map content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any place content'
  $permissions['node:course:update any place content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update any small_group content'
  $permissions['node:course:update any small_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update group'
  $permissions['node:course:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update own blog content'
  $permissions['node:course:update own blog content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update own chronology content'
  $permissions['node:course:update own chronology content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update own chronology_entry content'
  $permissions['node:course:update own chronology_entry content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update own course content'
  $permissions['node:course:update own course content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update own map content'
  $permissions['node:course:update own map content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update own place content'
  $permissions['node:course:update own place content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
      'student' => 'student',
    ),
  );

  // Exported og permission: 'node:course:update own small_group content'
  $permissions['node:course:update own small_group content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
