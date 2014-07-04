<?php
/**
 * @file
 * kr_cv.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kr_cv_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
