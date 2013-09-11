<?php
/**
 * @file
 * signage_templates.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function signage_templates_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function signage_templates_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function signage_templates_node_info() {
  $items = array(
    'signage_template' => array(
      'name' => t('Template'),
      'base' => 'node_content',
      'description' => t('A template is an instance of a sign\'s layout. Create a template for each layout change you with to have occur.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
