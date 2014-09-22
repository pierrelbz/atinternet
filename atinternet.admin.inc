<?php


/**
 * @file
 * Administrative page callbacks for the atinternet module.
 */


/**
 * Implements hook_admin_settings() for module settings configuration.
 */
function atinternet_settings_form($form, &$form_state) {
$form= array();

  $form['module_settings_filedset'] = array(
    '#type' => 'fieldset',
    '#title' => t('At internet settings'),
    '#weight' => 5,
    '#collapsible' => TRUE,
    '#collapsed' => FALSE,
  );
  $form['module_settings_filedset']['module_settings_option'] = array(
    '#type' => 'textfield',
    '#title' => t('module_settings_option '),
    '#default_value' => variable_get('module_settings_option', ''),
    '#description' => t('Obligatoire - module_settings_option.'),
    '#required' => TRUE,

  );
  return system_settings_form($form);
}
