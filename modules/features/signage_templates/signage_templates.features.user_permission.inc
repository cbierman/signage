<?php
/**
 * @file
 * signage_templates.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function signage_templates_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer panelizer node signage_template content'.
  $permissions['administer panelizer node signage_template content'] = array(
    'name' => 'administer panelizer node signage_template content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node signage_template context'.
  $permissions['administer panelizer node signage_template context'] = array(
    'name' => 'administer panelizer node signage_template context',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node signage_template defaults'.
  $permissions['administer panelizer node signage_template defaults'] = array(
    'name' => 'administer panelizer node signage_template defaults',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node signage_template layout'.
  $permissions['administer panelizer node signage_template layout'] = array(
    'name' => 'administer panelizer node signage_template layout',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'webmaster' => 'webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node signage_template overview'.
  $permissions['administer panelizer node signage_template overview'] = array(
    'name' => 'administer panelizer node signage_template overview',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'administer panelizer node signage_template settings'.
  $permissions['administer panelizer node signage_template settings'] = array(
    'name' => 'administer panelizer node signage_template settings',
    'roles' => array(
      'administrator' => 'administrator',
      'webmaster' => 'webmaster',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: 'create signage_template content'.
  $permissions['create signage_template content'] = array(
    'name' => 'create signage_template content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any signage_template content'.
  $permissions['delete any signage_template content'] = array(
    'name' => 'delete any signage_template content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own signage_template content'.
  $permissions['delete own signage_template content'] = array(
    'name' => 'delete own signage_template content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any signage_template content'.
  $permissions['edit any signage_template content'] = array(
    'name' => 'edit any signage_template content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own signage_template content'.
  $permissions['edit own signage_template content'] = array(
    'name' => 'edit own signage_template content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
