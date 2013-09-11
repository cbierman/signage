<?php
/**
 * @file
 * signage_slides.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function signage_slides_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "flexslider" && $api == "flexslider_default_preset") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function signage_slides_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function signage_slides_node_info() {
  $items = array(
    'signage_slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('A Slide is an individual image used in a sign. It has an image and an optional scheduling component.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
