<?php

/**
 * Implementation of hook_content_default_fields().
 */
function bullseye_league_content_default_fields() {
  $fields = array();

  // Exported field: field_league_match_22agg
  $fields['bullseye_league_match-field_league_match_22agg'] = array(
    'field_name' => 'field_league_match_22agg',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '34',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'computed_value',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22sf[0][\'value\'] + $node->field_league_match_22tf[0][\'value\'] + $node->field_league_match_22rf[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => '.22 Aggregate',
      'weight' => '34',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_22agg_hcp
  $fields['bullseye_league_match-field_league_match_22agg_hcp'] = array(
    'field_name' => 'field_league_match_22agg_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '46',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22sf_hcp[0][\'value\'] + $node->field_league_match_22tf_hcp[0][\'value\'] + $node->field_league_match_22rf_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => '.22 Aggregate (Handicap)',
      'weight' => '46',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_22rf
  $fields['bullseye_league_match-field_league_match_22rf'] = array(
    'field_name' => 'field_league_match_22rf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '33',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_22rf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => '.22 Rapid Fire',
      'weight' => '33',
      'description' => 'Enter the score, with Xs, in the form of <strong>197.15</strong> (that would be 197-15x).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_22rf_hcp
  $fields['bullseye_league_match-field_league_match_22rf_hcp'] = array(
    'field_name' => 'field_league_match_22rf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '45',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22rf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => '.22 Rapid Fire (Handicap)',
      'weight' => '45',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_22sf
  $fields['bullseye_league_match-field_league_match_22sf'] = array(
    'field_name' => 'field_league_match_22sf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_22sf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => '.22 Slow Fire',
      'weight' => '31',
      'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_22sf_hcp
  $fields['bullseye_league_match-field_league_match_22sf_hcp'] = array(
    'field_name' => 'field_league_match_22sf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22sf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => '.22 Slow Fire (Handicap)',
      'weight' => '43',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_22tf
  $fields['bullseye_league_match-field_league_match_22tf'] = array(
    'field_name' => 'field_league_match_22tf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_22tf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => '.22 Timed Fire',
      'weight' => '32',
      'description' => 'Enter the score, with Xs, in the form of <strong>197.15</strong> (that would be 197-15x).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_22tf_hcp
  $fields['bullseye_league_match-field_league_match_22tf_hcp'] = array(
    'field_name' => 'field_league_match_22tf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22tf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => '.22 Timed Fire (Handicap)',
      'weight' => '44',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_cfagg
  $fields['bullseye_league_match-field_league_match_cfagg'] = array(
    'field_name' => 'field_league_match_cfagg',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'computed_value',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_cfsf[0][\'value\'] + $node->field_league_match_cftf[0][\'value\'] + $node->field_league_match_cfrf[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'CF Aggregate',
      'weight' => '38',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_cfagg_hcp
  $fields['bullseye_league_match-field_league_match_cfagg_hcp'] = array(
    'field_name' => 'field_league_match_cfagg_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '50',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_cfsf_hcp[0][\'value\'] + $node->field_league_match_cftf_hcp[0][\'value\'] + $node->field_league_match_cfrf_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'CF Aggregate (Handicap)',
      'weight' => '50',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_cfrf
  $fields['bullseye_league_match-field_league_match_cfrf'] = array(
    'field_name' => 'field_league_match_cfrf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_cfrf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CF Rapid Fire',
      'weight' => '37',
      'description' => 'Enter the score, with Xs, in the form of <strong>197.15</strong> (that would be 197-15x).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_cfrf_hcp
  $fields['bullseye_league_match-field_league_match_cfrf_hcp'] = array(
    'field_name' => 'field_league_match_cfrf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '49',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_cfrf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'CF Rapid Fire (Handicap)',
      'weight' => '49',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_cfsf
  $fields['bullseye_league_match-field_league_match_cfsf'] = array(
    'field_name' => 'field_league_match_cfsf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_cfsf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CF Slow Fire',
      'weight' => '35',
      'description' => 'Enter the score, with Xs, in the form of <strong>197.15</strong> (that would be 197-15x).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_cfsf_hcp
  $fields['bullseye_league_match-field_league_match_cfsf_hcp'] = array(
    'field_name' => 'field_league_match_cfsf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '47',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_cfsf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'CF Slow Fire (Handicap)',
      'weight' => '47',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_cftf
  $fields['bullseye_league_match-field_league_match_cftf'] = array(
    'field_name' => 'field_league_match_cftf',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'us_2',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_decimal',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '200.20',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'precision' => '10',
    'scale' => '2',
    'decimal' => '.',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_league_match_cftf][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'CF Timed Fire',
      'weight' => '36',
      'description' => 'Enter the score, with Xs, in the form of <strong>197.15</strong> (that would be 197-15x).',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_cftf_hcp
  $fields['bullseye_league_match-field_league_match_cftf_hcp'] = array(
    'field_name' => 'field_league_match_cftf_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '48',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_cftf[0][\'value\'] + $node->field_league_match_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '5',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'CF Timed Fire (Handicap)',
      'weight' => '48',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_date
  $fields['bullseye_league_match-field_league_match_date'] = array(
    'field_name' => 'field_league_match_date',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '1',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'timezone_db' => 'America/Los_Angeles',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'medium',
    'widget' => array(
      'default_value' => 'strtotime',
      'default_value_code' => '-1 day',
      'default_value2' => 'blank',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'label' => 'Date',
      'weight' => '-1',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_league_match_grandagg
  $fields['bullseye_league_match-field_league_match_grandagg'] = array(
    'field_name' => 'field_league_match_grandagg',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_league_match_scratch',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'computed_value',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22agg[0][\'value\'] + $node->field_league_match_cfagg[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '6',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Grand Aggregate',
      'weight' => '39',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_grandagg_hcp
  $fields['bullseye_league_match-field_league_match_grandagg_hcp'] = array(
    'field_name' => 'field_league_match_grandagg_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '51',
      'parent' => 'group_league_match_handicap',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_league_match_22agg_hcp[0][\'value\'] + $node->field_league_match_cfagg_hcp[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'float',
    'data_length' => '6',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Grand Aggregate (Handicap)',
      'weight' => '51',
      'description' => '',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_league_match_hcp
  $fields['bullseye_league_match-field_league_match_hcp'] = array(
    'field_name' => 'field_league_match_hcp',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'number_integer',
    'required' => '0',
    'multiple' => '0',
    'module' => 'number',
    'active' => '1',
    'prefix' => '',
    'suffix' => '',
    'min' => '0',
    'max' => '40',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => '0',
          '_error_element' => 'default_value_widget][field_league_match_hcp][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Handicap',
      'weight' => 0,
      'description' => 'Enter the shooter\'s handicap',
      'type' => 'number',
      'module' => 'number',
    ),
  );

  // Exported field: field_league_match_name
  $fields['bullseye_league_match-field_league_match_name'] = array(
    'field_name' => 'field_league_match_name',
    'type_name' => 'bullseye_league_match',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'profile' => 'profile',
      'bullseye_league_match' => 0,
      'forum' => 0,
      'page' => 0,
      'story' => 0,
      'event' => FALSE,
      'operating_hours' => FALSE,
      'photo' => FALSE,
      'webform' => FALSE,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Shooter\'s Name',
      'weight' => '-2',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_profile_firstname
  $fields['profile-field_profile_firstname'] = array(
    'field_name' => 'field_profile_firstname',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'First Name',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_fullname
  $fields['profile-field_profile_fullname'] = array(
    'field_name' => 'field_profile_fullname',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'computed',
    'required' => '0',
    'multiple' => '0',
    'module' => 'computed_field',
    'active' => '1',
    'code' => '$node_field[0][\'value\'] = $node->field_profile_firstname[0][\'value\'] .\' \'. $node->field_profile_lastname[0][\'value\'];',
    'display_format' => '$display = $node_field_item[\'value\'];',
    'store' => 1,
    'data_type' => 'varchar',
    'data_length' => '128',
    'data_not_NULL' => 0,
    'data_default' => '',
    'data_sortable' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Full Name',
      'weight' => '4',
      'description' => 'This field is automatically created from the First Name and Last Name fields ',
      'type' => 'computed',
      'module' => 'computed_field',
    ),
  );

  // Exported field: field_profile_lastname
  $fields['profile-field_profile_lastname'] = array(
    'field_name' => 'field_profile_lastname',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Last Name',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_profile_membership_type
  $fields['profile-field_profile_membership_type'] = array(
    'field_name' => 'field_profile_membership_type',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'Associate
Full
Honorary
Life
Life Charter
Life Honorary
Probate
Special',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Membership Type',
      'weight' => '7',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_profile_phone
  $fields['profile-field_profile_phone'] = array(
    'field_name' => 'field_profile_phone',
    'type_name' => 'profile',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'ca_phone',
    'required' => '0',
    'multiple' => '2',
    'module' => 'phone',
    'active' => '1',
    'phone_country_code' => 0,
    'ca_phone_separator' => '-',
    'ca_phone_parentheses' => 1,
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Phone Number',
      'weight' => '8',
      'description' => '',
      'type' => 'phone_textfield',
      'module' => 'phone',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('.22 Aggregate');
  t('.22 Aggregate (Handicap)');
  t('.22 Rapid Fire');
  t('.22 Rapid Fire (Handicap)');
  t('.22 Slow Fire');
  t('.22 Slow Fire (Handicap)');
  t('.22 Timed Fire');
  t('.22 Timed Fire (Handicap)');
  t('CF Aggregate');
  t('CF Aggregate (Handicap)');
  t('CF Rapid Fire');
  t('CF Rapid Fire (Handicap)');
  t('CF Slow Fire');
  t('CF Slow Fire (Handicap)');
  t('CF Timed Fire');
  t('CF Timed Fire (Handicap)');
  t('Date');
  t('First Name');
  t('Full Name');
  t('Grand Aggregate');
  t('Grand Aggregate (Handicap)');
  t('Handicap');
  t('Last Name');
  t('Membership Type');
  t('Phone Number');
  t('Shooter\'s Name');

  return $fields;
}
