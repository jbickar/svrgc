<?php
/**
 * @file
 * svrgc_bullseye_league.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function svrgc_bullseye_league_field_default_field_bases() {
  $field_bases = array();

    // Exported field_base: 'field_league_match_22agg'
    $field_bases['field_league_match_22agg'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_22agg',
        'foreign keys' => array(),
        'indexes' => array(
            'value' => array(
                0 => 'value',
            ),
        ),
        'locked' => 0,
        'module' => 'computed_field',
        'settings' => array(
            'code' => '$entity_field[0][\'value\'] = $entity->field_league_match_22sf[LANGUAGE_NONE][0][\'value\'] + $entity->field_league_match_22tf[LANGUAGE_NONE][0][\'value\'] + $entity->field_league_match_22rf[LANGUAGE_NONE][0][\'value\'];',
            'database' => array(
                'data_default' => '',
                'data_index' => 1,
                'data_length' => 32,
                'data_not_NULL' => 0,
                'data_precision' => 10,
                'data_scale' => 2,
                'data_size' => 'normal',
                'data_type' => 'numeric',
            ),
            'display_format' => '$display_output = $entity_field_item[\'value\'];',
            'store' => 1,
        ),
        'translatable' => 0,
        'type' => 'computed',
    );

    // Exported field_base: 'field_league_match_22rf'
    $field_bases['field_league_match_22rf'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_22rf',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 0,
        'module' => 'number',
        'settings' => array(
            'decimal_separator' => '.',
            'precision' => 10,
            'scale' => 2,
        ),
        'translatable' => 0,
        'type' => 'number_decimal',
    );

    // Exported field_base: 'field_league_match_22sf'
  $field_bases['field_league_match_22sf'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_league_match_22sf',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

    // Exported field_base: 'field_league_match_22tf'
    $field_bases['field_league_match_22tf'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_22tf',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 0,
        'module' => 'number',
        'settings' => array(
            'decimal_separator' => '.',
            'precision' => 10,
            'scale' => 2,
        ),
        'translatable' => 0,
        'type' => 'number_decimal',
    );

    // Exported field_base: 'field_league_match_cfagg'
    $field_bases['field_league_match_cfagg'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_cfagg',
        'foreign keys' => array(),
        'indexes' => array(
            'value' => array(
                0 => 'value',
            ),
        ),
        'locked' => 0,
        'module' => 'computed_field',
        'settings' => array(
            'code' => '$entity_field[0][\'value\'] = $entity->field_league_match_cfsf[LANGUAGE_NONE][0][\'value\'] + $entity->field_league_match_cftf[LANGUAGE_NONE][0][\'value\'] + $entity->field_league_match_cfrf[LANGUAGE_NONE][0][\'value\'];',
            'database' => array(
                'data_default' => '',
                'data_index' => 1,
                'data_length' => 32,
                'data_not_NULL' => 0,
                'data_precision' => 10,
                'data_scale' => 2,
                'data_size' => 'normal',
                'data_type' => 'numeric',
            ),
            'display_format' => '$display_output = $entity_field_item[\'value\'];',
            'store' => 1,
        ),
        'translatable' => 0,
        'type' => 'computed',
    );

    // Exported field_base: 'field_league_match_cfrf'
    $field_bases['field_league_match_cfrf'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_cfrf',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 0,
        'module' => 'number',
        'settings' => array(
            'decimal_separator' => '.',
            'precision' => 10,
            'scale' => 2,
        ),
        'translatable' => 0,
        'type' => 'number_decimal',
    );

    // Exported field_base: 'field_league_match_cfsf'
    $field_bases['field_league_match_cfsf'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_cfsf',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 0,
        'module' => 'number',
        'settings' => array(
            'decimal_separator' => '.',
            'precision' => 10,
            'scale' => 2,
        ),
        'translatable' => 0,
        'type' => 'number_decimal',
    );

    // Exported field_base: 'field_league_match_cftf'
    $field_bases['field_league_match_cftf'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_cftf',
        'foreign keys' => array(),
        'indexes' => array(),
        'locked' => 0,
        'module' => 'number',
        'settings' => array(
            'decimal_separator' => '.',
            'precision' => 10,
            'scale' => 2,
        ),
        'translatable' => 0,
        'type' => 'number_decimal',
    );

    // Exported field_base: 'field_league_match_date'
  $field_bases['field_league_match_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_league_match_date',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 1,
      'cache_enabled' => 1,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'repeat' => 0,
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

    // Exported field_base: 'field_league_match_grandagg'
    $field_bases['field_league_match_grandagg'] = array(
        'active' => 1,
        'cardinality' => 1,
        'deleted' => 0,
        'entity_types' => array(),
        'field_name' => 'field_league_match_grandagg',
        'foreign keys' => array(),
        'indexes' => array(
            'value' => array(
                0 => 'value',
            ),
        ),
        'locked' => 0,
        'module' => 'computed_field',
        'settings' => array(
            'code' => '$entity_field[0][\'value\'] = $entity->field_league_match_22agg[LANGUAGE_NONE][0][\'value\'] + $entity->field_league_match_cfagg[LANGUAGE_NONE][0][\'value\'];',
            'database' => array(
                'data_default' => '',
                'data_index' => 1,
                'data_length' => 32,
                'data_not_NULL' => 0,
                'data_precision' => 10,
                'data_scale' => 3,
                'data_size' => 'normal',
                'data_type' => 'numeric',
            ),
            'display_format' => '$display_output = $entity_field_item[\'value\'];',
            'store' => 1,
        ),
        'translatable' => 0,
        'type' => 'computed',
    );

    // Exported field_base: 'field_league_match_name'
  $field_bases['field_league_match_name'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_league_match_name',
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'direction' => 'ASC',
          'property' => 'name',
          'type' => 'property',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'user',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
