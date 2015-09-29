<?php
/**
 * @file
 * kr_backup.backup_migrate_exportables.inc
 */

/**
 * Implements hook_exportables_backup_migrate_profiles().
 */
function kr_backup_exportables_backup_migrate_profiles() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'kr_backup_profile';
  $item->name = 'KR Backup profile';
  $item->filename = '[site:name]';
  $item->append_timestamp = TRUE;
  $item->timestamp_format = 'Y-m-d\\TH-i-s';
  $item->filters = array(
    'compression' => 'gzip',
    'encryption' => 'aes',
    'notify_success_enable' => 0,
    'notify_success_email' => 'roskoliy.kirill@gmaill.com',
    'notify_failure_enable' => 1,
    'notify_failure_email' => 'roskoliy.kirill@gmaill.com',
    'utils_site_offline' => 1,
    'utils_site_offline_message' => 'K. Roskoliy is currently under maintenance. We should be back shortly. Thank you for your patience.',
    'utils_description' => '',
    'use_cli' => 0,
    'ignore_errors' => 0,
    'sources' => array(
      'db' => array(
        'exclude_tables' => array(),
        'nodata_tables' => array(
          'cache' => 'cache',
          'cache_admin_menu' => 'cache_admin_menu',
          'cache_block' => 'cache_block',
          'cache_bootstrap' => 'cache_bootstrap',
          'cache_field' => 'cache_field',
          'cache_filter' => 'cache_filter',
          'cache_form' => 'cache_form',
          'cache_htmlpurifier' => 'cache_htmlpurifier',
          'cache_image' => 'cache_image',
          'cache_libraries' => 'cache_libraries',
          'cache_menu' => 'cache_menu',
          'cache_metatag' => 'cache_metatag',
          'cache_microdata_vocabulary' => 'cache_microdata_vocabulary',
          'cache_page' => 'cache_page',
          'cache_path' => 'cache_path',
          'cache_token' => 'cache_token',
          'cache_update' => 'cache_update',
          'sessions' => 'sessions',
          'watchdog' => 'watchdog',
        ),
        'utils_lock_tables' => 1,
      ),
      'files' => array(
        'exclude_filepaths' => 'backup_migrate
styles
css
js
ctools
less',
      ),
      'archive' => array(
        'exclude_filepaths' => 'public://backup_migrate
public://styles
public://css
public://js
public://ctools
public://less
private://backup_migrate
sites/default/settings.php
/tmp',
      ),
    ),
  );
  $export['kr_backup_profile'] = $item;

  return $export;
}

/**
 * Implements hook_exportables_backup_migrate_schedules().
 */
function kr_backup_exportables_backup_migrate_schedules() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'kr_backup_db';
  $item->name = 'KR Backup DB';
  $item->source_id = 'db';
  $item->destination_id = 'nodesquirrel';
  $item->copy_destination_id = '';
  $item->profile_id = 'kr_backup_profile';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['kr_backup_db'] = $item;

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->machine_name = 'kr_backup_files';
  $item->name = 'KR Backup files';
  $item->source_id = 'files';
  $item->destination_id = 'nodesquirrel';
  $item->copy_destination_id = '';
  $item->profile_id = 'kr_backup_profile';
  $item->keep = -2;
  $item->period = 86400;
  $item->enabled = TRUE;
  $item->cron = 'builtin';
  $item->cron_schedule = '0 4 * * *';
  $export['kr_backup_files'] = $item;

  return $export;
}
