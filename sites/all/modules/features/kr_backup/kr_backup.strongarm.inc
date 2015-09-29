<?php
/**
 * @file
 * kr_backup.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function kr_backup_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_cipher';
  $strongarm->value = 'rijndael-256';
  $export['aes_cipher'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_encryption_iv';
  $strongarm->value = 'T7RfcURet7wnwU/QCdfNCqBw6SeEdJ+kMP2Ktq2dKiQ=';
  $export['aes_encryption_iv'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_implementation';
  $strongarm->value = 'mcrypt';
  $export['aes_implementation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_key';
  $strongarm->value = '56ktkLpt8LA2M8fLr4xE7tqfFzdA7Dt1';
  $export['aes_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_key_path';
  $strongarm->value = 'sites/default/files/key-file.txt';
  $export['aes_key_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_key_storage_method';
  $strongarm->value = 'File';
  $export['aes_key_storage_method'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'aes_viewing_method';
  $strongarm->value = 'neither';
  $export['aes_viewing_method'] = $strongarm;

  return $export;
}
