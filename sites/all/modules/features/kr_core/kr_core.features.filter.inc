<?php
/**
 * @file
 * kr_core.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function kr_core_filter_default_formats() {
  $formats = array();

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'htmlpurifier_basic' => array(
        'weight' => -45,
        'status' => 1,
        'settings' => array(
          'htmlpurifier_help' => 1,
          'htmlpurifier_basic_config' => array(
            'Attr.EnableID' => 0,
            'AutoFormat.AutoParagraph' => 1,
            'AutoFormat.Linkify' => 1,
            'AutoFormat.RemoveEmpty' => 0,
            'Null_HTML.Allowed' => 1,
            'HTML.ForbiddenAttributes' => '',
            'HTML.ForbiddenElements' => '',
            'HTML.SafeObject' => 0,
            'Output.FlashCompat' => 0,
            'URI.DisableExternalResources' => 0,
            'URI.DisableResources' => 0,
            'Null_URI.Munge' => 1,
          ),
        ),
      ),
    ),
  );

  return $formats;
}
