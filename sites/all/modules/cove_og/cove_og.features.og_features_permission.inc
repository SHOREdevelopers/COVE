<?php
/**
 * @file
 * cove_og.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function cove_og_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:course:add user'
  $permissions['node:course:add user'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:administer group'
  $permissions['node:course:administer group'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:approve and deny subscription'
  $permissions['node:course:approve and deny subscription'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:create annotation content'
  $permissions['node:course:create annotation content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:create blog content'
  $permissions['node:course:create blog content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:delete any annotation content'
  $permissions['node:course:delete any annotation content'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:delete any blog content'
  $permissions['node:course:delete any blog content'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:delete own annotation content'
  $permissions['node:course:delete own annotation content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:delete own blog content'
  $permissions['node:course:delete own blog content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:manage members'
  $permissions['node:course:manage members'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
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
      'Student' => 'Student',
      'Teacher' => 'Teacher',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course:update annotation_reference field'
  $permissions['node:course:update annotation_reference field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update annotation_tags field'
  $permissions['node:course:update annotation_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update any annotation content'
  $permissions['node:course:update any annotation content'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:update any blog content'
  $permissions['node:course:update any blog content'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:update body field'
  $permissions['node:course:update body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update category field'
  $permissions['node:course:update category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_annotatable_editions field'
  $permissions['node:course:update field_annotatable_editions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_bio field'
  $permissions['node:course:update field_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_edited_editions field'
  $permissions['node:course:update field_edited_editions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_home_page field'
  $permissions['node:course:update field_home_page field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_profile_picture field'
  $permissions['node:course:update field_profile_picture field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update field_special_roles_rc field'
  $permissions['node:course:update field_special_roles_rc field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update group'
  $permissions['node:course:update group'] = array(
    'roles' => array(
      'Teacher' => 'Teacher',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update group_content_access field'
  $permissions['node:course:update group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update group_group field'
  $permissions['node:course:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update group_register field'
  $permissions['node:course:update group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update og_group_ref field'
  $permissions['node:course:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update og_user_node field'
  $permissions['node:course:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update own annotation content'
  $permissions['node:course:update own annotation content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:update own blog content'
  $permissions['node:course:update own blog content'] = array(
    'roles' => array(
      'Student' => 'Student',
      'Teacher' => 'Teacher',
    ),
  );

  // Exported og permission: 'node:course:update private field'
  $permissions['node:course:update private field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update quote field'
  $permissions['node:course:update quote field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update ranges field'
  $permissions['node:course:update ranges field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update text field'
  $permissions['node:course:update text field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:update uri field'
  $permissions['node:course:update uri field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view annotation_reference field'
  $permissions['node:course:view annotation_reference field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view annotation_tags field'
  $permissions['node:course:view annotation_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view body field'
  $permissions['node:course:view body field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view category field'
  $permissions['node:course:view category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_annotatable_editions field'
  $permissions['node:course:view field_annotatable_editions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_bio field'
  $permissions['node:course:view field_bio field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_edited_editions field'
  $permissions['node:course:view field_edited_editions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_home_page field'
  $permissions['node:course:view field_home_page field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_profile_picture field'
  $permissions['node:course:view field_profile_picture field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view field_special_roles_rc field'
  $permissions['node:course:view field_special_roles_rc field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view group_content_access field'
  $permissions['node:course:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view group_group field'
  $permissions['node:course:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:course:view group_register field'
  $permissions['node:course:view group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view og_group_ref field'
  $permissions['node:course:view og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view og_user_node field'
  $permissions['node:course:view og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view private field'
  $permissions['node:course:view private field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view quote field'
  $permissions['node:course:view quote field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view ranges field'
  $permissions['node:course:view ranges field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view text field'
  $permissions['node:course:view text field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:course:view uri field'
  $permissions['node:course:view uri field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
