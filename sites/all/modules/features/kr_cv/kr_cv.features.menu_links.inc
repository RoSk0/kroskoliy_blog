<?php
/**
 * @file
 * kr_cv.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function kr_cv_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_cv:node/2
  $menu_links['main-menu_cv:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'CV',
    'options' => array(
      'identifier' => 'main-menu_cv:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('CV');


  return $menu_links;
}
