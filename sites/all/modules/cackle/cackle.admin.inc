<?php
/**
 * @file
 * Administration forms for the Cackle module.
 */

/**
 * Menu callback; Displays the administration settings for Cackle.
 */
function cackle_admin_settings() {
  $form = array();
  $form['cackle_mc_site'] = array(
    '#type' => 'textfield',
    '#title' => t('mc_site'),
    '#default_value' => variable_get('cackle_mc_site', 3),
    '#size' => 6,
    '#maxlength' => 6,
    '#description' => t('The maximum number of links to display in the block.'),
    '#required' => TRUE);
  $form['cackle_site_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('site_api_key'),
    '#default_value' => variable_get('cackle_site_api_key', NULL),
    '#size' => 64, '#maxlength' => 64,
    '#description' => t('The maximum number of links to display in the block.'),
    '#required' => TRUE);
  $form['cackle_account_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('account_api_key'),
    '#default_value' => variable_get('cackle_account_api_key', NULL),
    '#size' => 64, '#maxlength' => 64,
    '#description' => t('The maximum number of links to display in the block.'),
    '#required' => TRUE);
  return system_settings_form($form);
}
