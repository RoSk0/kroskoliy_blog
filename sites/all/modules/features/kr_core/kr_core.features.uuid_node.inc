<?php
/**
 * @file
 * kr_core.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function kr_core_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'About me',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 1,
  'vuuid' => 'c78d9636-4dea-4f4f-ae95-55381d28940a',
  'type' => 'page',
  'language' => 'und',
  'created' => 1381952226,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '677a74c0-15cb-43d7-8907-cbff900e007e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Hi.<br />
My name is Kirill Roskoliy.<br />
I\'m a Drupal developer.<br />
I started to work with Drupal in 2008.<br />
Currently I\'m working on <a href="http://www.trellon.com/" title="Trellon, LLC">Trellon, LLC</a> and maintaining <a href="https://drupal.org/project/crm_core" title="CRM Core">CRM Core</a> — Drupal-based framework to build CRM solutions.</p>
',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Hi.<br />
My name is Kirill Roskoliy.<br />
I\'m a Drupal developer.<br />
I started to work with Drupal in 2008.<br />
Currently I\'m working on <a href="http://www.trellon.com/" title="Trellon, LLC">Trellon, LLC</a> and maintaining <a href="https://drupal.org/project/crm_core" title="CRM Core">CRM Core</a> — Drupal-based framework to build CRM solutions.</p>
',
        'safe_summary' => NULL,
      ),
    ),
  ),
  'microdata' => array(
    '#attributes' => array(
      'itemscope' => '',
      'itemid' => 'http://kroskoliy.com/about-me',
    ),
    'title' => array(
      '#attributes' => array(),
    ),
    'body' => array(
      '#attributes' => array(),
      'value' => array(
        '#attributes' => array(),
      ),
      'summary' => array(
        '#attributes' => array(),
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'name' => 'kroskoliy',
  'picture' => 0,
  'data' => 'a:6:{s:7:"contact";i:0;s:16:"ckeditor_default";s:1:"t";s:20:"ckeditor_show_toggle";s:1:"t";s:14:"ckeditor_width";s:4:"100%";s:13:"ckeditor_lang";s:2:"en";s:18:"ckeditor_auto_lang";s:1:"t";}',
  'print_html_display' => 0,
  'print_html_display_comment' => 0,
  'print_html_display_urllist' => 0,
  'print_mail_display' => 0,
  'print_mail_display_comment' => 0,
  'print_mail_display_urllist' => 0,
  'print_pdf_display' => 0,
  'print_pdf_display_comment' => 0,
  'print_pdf_display_urllist' => 0,
  'print_pdf_size' => '',
  'print_pdf_orientation' => '',
  'date' => '2013-10-16 22:37:06 +0300',
);
  return $nodes;
}
