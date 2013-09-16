<?php
/**
 * @file
 * signage_signs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function signage_signs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create signage_sign content'.
  $permissions['create signage_sign content'] = array(
    'name' => 'create signage_sign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any signage_sign content'.
  $permissions['delete any signage_sign content'] = array(
    'name' => 'delete any signage_sign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own signage_sign content'.
  $permissions['delete own signage_sign content'] = array(
    'name' => 'delete own signage_sign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any signage_sign content'.
  $permissions['edit any signage_sign content'] = array(
    'name' => 'edit any signage_sign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own signage_sign content'.
  $permissions['edit own signage_sign content'] = array(
    'name' => 'edit own signage_sign content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
