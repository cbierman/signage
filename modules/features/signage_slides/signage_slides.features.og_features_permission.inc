<?php
/**
 * @file
 * signage_slides.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function signage_slides_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:signage_group:create signage_slide content'
  $permissions['node:signage_group:create signage_slide content'] = array(
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

  // Exported og permission: 'node:signage_group:delete own signage_slide content'
  $permissions['node:signage_group:delete own signage_slide content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:signage_group:update any signage_slide content'
  $permissions['node:signage_group:update any signage_slide content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:signage_group:update own signage_slide content'
  $permissions['node:signage_group:update own signage_slide content'] = array(
    'roles' => array(),
  );

  return $permissions;
}
