<?php
/**
 * @file
 * pirateparty_workgroup.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function pirateparty_workgroup_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:workgroup:add user'
  $permissions['node:workgroup:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:administer group'
  $permissions['node:workgroup:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:approve and deny subscription'
  $permissions['node:workgroup:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:create blog_post content'
  $permissions['node:workgroup:create blog_post content'] = array(
    'roles' => array(
      'member' => 'member',
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:create case content'
  $permissions['node:workgroup:create case content'] = array(
    'roles' => array(
      'member' => 'member',
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:create event content'
  $permissions['node:workgroup:create event content'] = array(
    'roles' => array(
      'member' => 'member',
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:delete any blog_post content'
  $permissions['node:workgroup:delete any blog_post content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'content editor' => 'content editor',
    ),
  );

  // Exported og permission: 'node:workgroup:delete any case content'
  $permissions['node:workgroup:delete any case content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:delete any event content'
  $permissions['node:workgroup:delete any event content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:delete own blog_post content'
  $permissions['node:workgroup:delete own blog_post content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'member' => 'member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:delete own case content'
  $permissions['node:workgroup:delete own case content'] = array(
    'roles' => array(
      'member' => 'member',
      'administrator member' => 'administrator member',
      'content editor' => 'content editor',
    ),
  );

  // Exported og permission: 'node:workgroup:delete own event content'
  $permissions['node:workgroup:delete own event content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'member' => 'member',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:manage members'
  $permissions['node:workgroup:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:manage permissions'
  $permissions['node:workgroup:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:manage roles'
  $permissions['node:workgroup:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:subscribe'
  $permissions['node:workgroup:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:workgroup:subscribe without approval'
  $permissions['node:workgroup:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:workgroup:unsubscribe'
  $permissions['node:workgroup:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workgroup:update any blog_post content'
  $permissions['node:workgroup:update any blog_post content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update any case content'
  $permissions['node:workgroup:update any case content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update any event content'
  $permissions['node:workgroup:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'content editor' => 'content editor',
    ),
  );

  // Exported og permission: 'node:workgroup:update body field'
  $permissions['node:workgroup:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update field_workgroup_type field'
  $permissions['node:workgroup:update field_workgroup_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update group'
  $permissions['node:workgroup:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update group_access field'
  $permissions['node:workgroup:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update group_content_access field'
  $permissions['node:workgroup:update group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update group_group field'
  $permissions['node:workgroup:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update og_group_ref field'
  $permissions['node:workgroup:update og_group_ref field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update og_user_node field'
  $permissions['node:workgroup:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update own blog_post content'
  $permissions['node:workgroup:update own blog_post content'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workgroup:update own case content'
  $permissions['node:workgroup:update own case content'] = array(
    'roles' => array(
      'member' => 'member',
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:update own event content'
  $permissions['node:workgroup:update own event content'] = array(
    'roles' => array(
      'member' => 'member',
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:view body field'
  $permissions['node:workgroup:view body field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workgroup:view field_workgroup_type field'
  $permissions['node:workgroup:view field_workgroup_type field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:workgroup:view group_access field'
  $permissions['node:workgroup:view group_access field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:view group_content_access field'
  $permissions['node:workgroup:view group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'content editor' => 'content editor',
    ),
  );

  // Exported og permission: 'node:workgroup:view group_group field'
  $permissions['node:workgroup:view group_group field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'member' => 'member',
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:workgroup:view og_group_ref field'
  $permissions['node:workgroup:view og_group_ref field'] = array(
    'roles' => array(
      'content editor' => 'content editor',
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:workgroup:view og_user_node field'
  $permissions['node:workgroup:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
