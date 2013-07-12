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
  $form['cackle_description'] = array(
    '#type' => 'item',
    '#description' => t("Please, <a href='http://cackle.me/plans'>click here</a> to register your site on Cackle. <br/> To obtain your Site ID, Account API Key, Site API Key go to the Cackle's admin panel => Tab 'Widget', scroll down and click on 'Drupal' icon."),
  );
  $form['cackle_mc_site'] = array(
    '#type' => 'textfield',
    '#title' => t('mcSite'),
    '#default_value' => variable_get('cackle_mc_site', 3),
    '#size' => 6,
    '#maxlength' => 6,
    '#description' => t('Enter mcSite.'),
    '#required' => TRUE);
  $form['cackle_site_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('siteApiKey'),
    '#default_value' => variable_get('cackle_site_api_key', NULL),
    '#size' => 64, '#maxlength' => 64,
    '#description' => t('Enter Site Api Key.'),
    '#required' => TRUE);
  $form['cackle_account_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('accountApiKey'),
    '#default_value' => variable_get('cackle_account_api_key', NULL),
    '#size' => 64, '#maxlength' => 64,
    '#description' => t('Enter Account Api Key.'),
    '#required' => TRUE);
  $types = node_type_get_types();
  $options = array();
  foreach ($types as $type) {
    $options[$type->type] = $type->name;
  }
  $form['visibility']['cackle_nodetypes'] = array(
    '#type' => 'checkboxes',
    '#title' => t('Node Types'),
    '#description' => t('Apply comments to only the following node types.'),
    '#default_value' => variable_get('cackle_nodetypes', array()),
    '#options' => $options,
  );
  return system_settings_form($form);
}
