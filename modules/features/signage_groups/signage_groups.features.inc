<?php
/**
 * @file
 * signage_groups.features.inc
 */

/**
 * Implements hook_node_info().
 */
function signage_groups_node_info() {
  $items = array(
    'signage_group' => array(
      'name' => t('Group'),
      'base' => 'node_content',
      'description' => t('A group is used to manage a set of signs.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
