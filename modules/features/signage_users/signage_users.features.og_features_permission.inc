<?php
/**
 * @file
 * signage_users.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function signage_users_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:signage_group:add user'
  $permissions['node:signage_group:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:administer group'
  $permissions['node:signage_group:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:approve and deny subscription'
  $permissions['node:signage_group:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:create signage_sign content'
  $permissions['node:signage_group:create signage_sign content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:create signage_slide content'
  $permissions['node:signage_group:create signage_slide content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:create signage_template content'
  $permissions['node:signage_group:create signage_template content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:delete any signage_sign content'
  $permissions['node:signage_group:delete any signage_sign content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:delete any signage_slide content'
  $permissions['node:signage_group:delete any signage_slide content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:delete any signage_template content'
  $permissions['node:signage_group:delete any signage_template content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:delete own signage_sign content'
  $permissions['node:signage_group:delete own signage_sign content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:delete own signage_slide content'
  $permissions['node:signage_group:delete own signage_slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:delete own signage_template content'
  $permissions['node:signage_group:delete own signage_template content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:manage members'
  $permissions['node:signage_group:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:manage permissions'
  $permissions['node:signage_group:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:manage roles'
  $permissions['node:signage_group:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:subscribe'
  $permissions['node:signage_group:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:subscribe without approval'
  $permissions['node:signage_group:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:unsubscribe'
  $permissions['node:signage_group:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:update any signage_sign content'
  $permissions['node:signage_group:update any signage_sign content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:update any signage_slide content'
  $permissions['node:signage_group:update any signage_slide content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:update any signage_template content'
  $permissions['node:signage_group:update any signage_template content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:update group'
  $permissions['node:signage_group:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:signage_group:update own signage_sign content'
  $permissions['node:signage_group:update own signage_sign content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:update own signage_slide content'
  $permissions['node:signage_group:update own signage_slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:update own signage_template content'
  $permissions['node:signage_group:update own signage_template content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
