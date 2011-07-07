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
  
  $form['cmui'] = array(
    '#title' => t('Campaign Monitor User Interface Settings'),
    '#type' => 'fieldset',
  );
  
  $form['cmui']['cm_showmsg'] = array(
    '#title' => t('Show successful subscription message'),
    '#type' => 'checkbox',
    '#default_value' => variable_get('cm_showmsg', 0),
    '#description' => t('Show users a "You have been successfully subscribed" message when they subscribe. Disable if you have a custom landing page. Unsubscriptions and subscription edits will still result in a message.')
  );
  
  return system_settings_form($form);
}
