<?php
/**
 * @file
 * signage_templates.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function signage_templates_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:signage_group:create signage_template content'
  $permissions['node:signage_group:create signage_template content'] = array(
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

  // Exported og permission: 'node:signage_group:delete own signage_template content'
  $permissions['node:signage_group:delete own signage_template content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:update any signage_template content'
  $permissions['node:signage_group:update any signage_template content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:update own signage_template content'
  $permissions['node:signage_group:update own signage_template content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
