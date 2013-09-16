<?php
/**
 * @file
 * signage_slides.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function signage_slides_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create signage_slide content'.
  $permissions['create signage_slide content'] = array(
    'name' => 'create signage_slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any signage_slide content'.
  $permissions['delete any signage_slide content'] = array(
    'name' => 'delete any signage_slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own signage_slide content'.
  $permissions['delete own signage_slide content'] = array(
    'name' => 'delete own signage_slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any signage_slide content'.
  $permissions['edit any signage_slide content'] = array(
    'name' => 'edit any signage_slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own signage_slide content'.
  $permissions['edit own signage_slide content'] = array(
    'name' => 'edit own signage_slide content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
