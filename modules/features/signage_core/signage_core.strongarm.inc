<?php
/**
 * @file
 * signage_core.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function signage_core_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crumbs_node_parent_patterns';
  $strongarm->value = array(
    'signage_group' => '',
    'signage_sign' => '',
    'signage_slide' => '',
    'signage_template' => '[node:field-signage-template-sign-ref]',
  );
  $export['crumbs_node_parent_patterns'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crumbs_override_theme_breadcrumb';
  $strongarm->value = array(
    '(other)' => 0,
  );
  $export['crumbs_override_theme_breadcrumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'crumbs_weights';
  $strongarm->value = array(
    'crumbs.home_title' => 1,
    'entityreference.field_signage_template_sign_ref.node.signage_template' => 2,
    '*' => 3,
  );
  $export['crumbs_weights'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_node_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_node_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
