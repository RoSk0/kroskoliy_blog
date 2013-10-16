<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function krt_form_system_theme_settings_alter(&$form, &$form_state) {
  $form['responsive_blog_settings']['socialicon']['linkedin_url'] = array(
    '#type' => 'textfield',
    '#title' => t('LinkedIn address'),
    '#default_value' => theme_get_setting('linkedin_url', 'krt'),
    '#description'   => t("Enter your LinkedIn URL. Leave blank to hide."),
  );
}
