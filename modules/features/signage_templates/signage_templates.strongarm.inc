<?php
/**
 * @file
 * signage_templates.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function signage_templates_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__signage_template';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__signage_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_signage_template';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 0,
        'default' => 0,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_signage_template'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_node:signage_template_allowed_layouts';
  $strongarm->value = 'O:22:"panels_allowed_layouts":4:{s:9:"allow_new";b:1;s:11:"module_name";s:31:"panelizer_node:signage_template";s:23:"allowed_layout_settings";a:47:{s:8:"flexible";b:0;s:14:"twocol_stacked";b:0;s:13:"twocol_bricks";b:0;s:6:"twocol";b:0;s:25:"threecol_33_34_33_stacked";b:0;s:17:"threecol_33_34_33";b:0;s:25:"threecol_25_50_25_stacked";b:0;s:17:"threecol_25_50_25";b:0;s:6:"onecol";b:0;s:6:"whelan";b:0;s:12:"webb_flipped";b:0;s:4:"webb";b:0;s:25:"twocol_stacked_responsive";b:0;s:14:"taylor_flipped";b:0;s:6:"taylor";b:0;s:12:"sutro_double";b:0;s:5:"sutro";b:0;s:13:"selby_flipped";b:0;s:5:"selby";b:0;s:17:"sanderson_flipped";b:0;s:9:"sanderson";b:0;s:5:"rolph";b:0;s:4:"pond";b:0;s:6:"phelan";b:0;s:6:"oxygen";b:1;s:8:"nitrogen";b:1;s:15:"moscone_flipped";b:0;s:7:"moscone";b:0;s:8:"mccoppin";b:0;s:16:"hydrogen_flipped";b:1;s:8:"hydrogen";b:1;s:15:"hewston_flipped";b:0;s:7:"hewston";b:0;s:14:"helium_flipped";b:1;s:6:"helium";b:1;s:6:"harris";b:0;s:5:"geary";b:0;s:12:"burr_flipped";b:0;s:4:"burr";b:0;s:22:"bryant_flipped_flipped";b:0;s:6:"bryant";b:0;s:5:"brown";b:0;s:15:"brenham_flipped";b:0;s:7:"brenham";b:0;s:6:"boxton";b:0;s:16:"bartlett_flipped";b:0;s:8:"bartlett";b:0;}s:10:"form_state";N;}';
  $export['panelizer_node:signage_template_allowed_layouts'] = $strongarm;

  return $export;
}
