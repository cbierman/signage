<?php
/**
 * @file
 * signage_signs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function signage_signs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function signage_signs_node_info() {
  $items = array(
    'signage_sign' => array(
      'name' => t('Sign'),
      'base' => 'node_content',
      'description' => t('A sign is a digital signage display. It can have multiple templates that can be scheduled to display at specific times.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
