<?php
/**
 * @file
 * Provides admin settings page to adjust API key and client ID.
 */

function cm_webform_admin_settings() {
  $form = array();
  
  $form['cmapi'] = array(
    '#title' => t('Campaign Monitor API Settings'),
    '#type' => 'fieldset',
  );

  $form['cmapi']['cm_apikey'] = array(
    '#title' => t('Campaign Monitor API Key'),
    '#type' => 'textfield',
    '#default_value' => variable_get('cm_apikey', ''),
    '#description' => t('This can be found in Campaign Monitor under "Account Settings".'),
  );
  
  $form['cmapi']['cm_clientid'] = array(
    '#title' => t('Campaign Monitor Client ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('cm_clientid', ''),
    '#description' => t('This can be found in Campaign Monitor under "Client Settings" as "API Client ID".'),
  );
  
  return system_settings_form($form);
}
