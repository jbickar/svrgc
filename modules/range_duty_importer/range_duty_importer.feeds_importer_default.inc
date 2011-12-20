<?php

/**
 * Implementation of hook_feeds_importer_default().
 */
function range_duty_importer_feeds_importer_default() {
  $export = array();
  $feeds_importer = new stdClass;
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'range_duty_importer';
  $feeds_importer->config = array(
    'name' => 'Range Duty Importer',
    'description' => 'Import Range Duty nodes',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'range_duty',
        'input_format' => '0',
        'update_existing' => '1',
        'expire' => '-1',
        'mappings' => array(
          0 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'field_range_duty_member:username',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Range',
            'target' => 'taxonomy:features_range',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Range Duty Additional Info',
            'target' => 'taxonomy:features_range_duty_addl',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Range Duty Role',
            'target' => 'taxonomy:features_range_duty',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'From Timestamp',
            'target' => 'field_range_duty_datetime:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'To Timestamp',
            'target' => 'field_range_duty_datetime:end',
            'unique' => FALSE,
          ),
        ),
        'author' => '3',
        'authorize' => 1,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
  );

  $export['range_duty_importer'] = $feeds_importer;
  return $export;
}
