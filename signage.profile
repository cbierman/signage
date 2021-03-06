<?php
/**
 * @file
 * Signage install profile configuration.
 */

if (!function_exists("system_form_install_configure_form_alter")) {
  /**
   * Implements hook_form_FORM_ID_alter().
   *
   * Allows the profile to alter the site configuration form.
   */
  function system_form_install_configure_form_alter(&$form, $form_state) {
    $form['site_information']['site_name']['#default_value'] = 'Signage';
  }
}

if (!function_exists("system_form_install_select_profile_form_alter")) {
  /**
   * Implements hook_form_alter().
   *
   * Select the current install profile by default.
   */
  function system_form_install_select_profile_form_alter(&$form, $form_state) {
    foreach ($form['profile'] as $key => $element) {
      $form['profile'][$key]['#value'] = 'signage';
    }
  }
}
