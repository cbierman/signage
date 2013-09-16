<?php
/**
 * @file
 * signage_groups.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function signage_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create signage_group content'.
  $permissions['create signage_group content'] = array(
    'name' => 'create signage_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any signage_group content'.
  $permissions['delete any signage_group content'] = array(
    'name' => 'delete any signage_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own signage_group content'.
  $permissions['delete own signage_group content'] = array(
    'name' => 'delete own signage_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any signage_group content'.
  $permissions['edit any signage_group content'] = array(
    'name' => 'edit any signage_group content',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own signage_group content'.
  $permissions['edit own signage_group content'] = array(
    'name' => 'edit own signage_group content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
