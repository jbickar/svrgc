<?php
/**
 * @file
 * svrgc_bullseye_league.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function svrgc_bullseye_league_field_default_field_instances() {
  $field_instances = array();

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_22agg'
    $field_instances['node-bullseye_league_match-field_league_match_22agg'] = array(
        'bundle' => 'bullseye_league_match',
        'deleted' => 0,
        'description' => '',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'computed_field',
                'settings' => array(),
                'type' => 'computed_field_plain',
                'weight' => 5,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 5,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_22agg',
        'label' => '.22 Aggregate',
        'required' => 0,
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'computed_field',
            'settings' => array(),
            'type' => 'computed',
            'weight' => 5,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_22rf'
    $field_instances['node-bullseye_league_match-field_league_match_22rf'] = array(
        'bundle' => 'bullseye_league_match',
        'default_value' => NULL,
        'deleted' => 0,
        'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'number',
                'settings' => array(
                    'decimal_separator' => '.',
                    'prefix_suffix' => TRUE,
                    'scale' => 2,
                    'thousand_separator' => ' ',
                ),
                'type' => 'number_decimal',
                'weight' => 4,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 4,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_22rf',
        'label' => '.22 Rapid Fire',
        'required' => 0,
        'settings' => array(
            'max' => 200.2,
            'min' => 0,
            'prefix' => '',
            'suffix' => '',
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'number',
            'settings' => array(),
            'type' => 'number',
            'weight' => 4,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_22sf'
  $field_instances['node-bullseye_league_match-field_league_match_22sf'] = array(
    'bundle' => 'bullseye_league_match',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_decimal',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_league_match_22sf',
    'label' => '.22 Slow Fire',
    'required' => 0,
    'settings' => array(
      'max' => 200.2,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_22tf'
    $field_instances['node-bullseye_league_match-field_league_match_22tf'] = array(
        'bundle' => 'bullseye_league_match',
        'default_value' => NULL,
        'deleted' => 0,
        'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'number',
                'settings' => array(
                    'decimal_separator' => '.',
                    'prefix_suffix' => TRUE,
                    'scale' => 2,
                    'thousand_separator' => ' ',
                ),
                'type' => 'number_decimal',
                'weight' => 3,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 3,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_22tf',
        'label' => '.22 Timed Fire',
        'required' => 0,
        'settings' => array(
            'max' => 200.2,
            'min' => 0,
            'prefix' => '',
            'suffix' => '',
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'number',
            'settings' => array(),
            'type' => 'number',
            'weight' => 3,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_cfagg'
    $field_instances['node-bullseye_league_match-field_league_match_cfagg'] = array(
        'bundle' => 'bullseye_league_match',
        'deleted' => 0,
        'description' => '',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'computed_field',
                'settings' => array(),
                'type' => 'computed_field_plain',
                'weight' => 9,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 9,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_cfagg',
        'label' => 'Center Fire Aggregate',
        'required' => 0,
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'computed_field',
            'settings' => array(),
            'type' => 'computed',
            'weight' => 9,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_cfrf'
    $field_instances['node-bullseye_league_match-field_league_match_cfrf'] = array(
        'bundle' => 'bullseye_league_match',
        'default_value' => NULL,
        'deleted' => 0,
        'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'number',
                'settings' => array(
                    'decimal_separator' => '.',
                    'prefix_suffix' => TRUE,
                    'scale' => 2,
                    'thousand_separator' => ' ',
                ),
                'type' => 'number_decimal',
                'weight' => 8,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 8,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_cfrf',
        'label' => 'Center Fire Rapid Fire',
        'required' => 0,
        'settings' => array(
            'max' => 200.2,
            'min' => 0,
            'prefix' => '',
            'suffix' => '',
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'number',
            'settings' => array(),
            'type' => 'number',
            'weight' => 8,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_cfsf'
    $field_instances['node-bullseye_league_match-field_league_match_cfsf'] = array(
        'bundle' => 'bullseye_league_match',
        'default_value' => NULL,
        'deleted' => 0,
        'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'number',
                'settings' => array(
                    'decimal_separator' => '.',
                    'prefix_suffix' => TRUE,
                    'scale' => 2,
                    'thousand_separator' => ' ',
                ),
                'type' => 'number_decimal',
                'weight' => 6,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 6,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_cfsf',
        'label' => 'Center Fire Slow Fire',
        'required' => 0,
        'settings' => array(
            'max' => 200.2,
            'min' => 0,
            'prefix' => '',
            'suffix' => '',
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'number',
            'settings' => array(),
            'type' => 'number',
            'weight' => 6,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_cftf'
    $field_instances['node-bullseye_league_match-field_league_match_cftf'] = array(
        'bundle' => 'bullseye_league_match',
        'default_value' => NULL,
        'deleted' => 0,
        'description' => 'Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'number',
                'settings' => array(
                    'decimal_separator' => '.',
                    'prefix_suffix' => TRUE,
                    'scale' => 2,
                    'thousand_separator' => ' ',
                ),
                'type' => 'number_decimal',
                'weight' => 7,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 7,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_cftf',
        'label' => 'Center Fire Timed Fire',
        'required' => 0,
        'settings' => array(
            'max' => 200.2,
            'min' => 0,
            'prefix' => '',
            'suffix' => '',
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'number',
            'settings' => array(),
            'type' => 'number',
            'weight' => 7,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_date'
  $field_instances['node-bullseye_league_match-field_league_match_date'] = array(
    'bundle' => 'bullseye_league_match',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_repeat_rule' => 'show',
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_league_match_date',
    'label' => 'Date',
    'required' => 1,
    'settings' => array(
      'default_value' => 'strtotime',
      'default_value2' => 'same',
      'default_value_code' => '-1 day',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'display_all_day' => 0,
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'repeat_collapsed' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_grandagg'
    $field_instances['node-bullseye_league_match-field_league_match_grandagg'] = array(
        'bundle' => 'bullseye_league_match',
        'deleted' => 0,
        'description' => '',
        'display' => array(
            'default' => array(
                'label' => 'above',
                'module' => 'computed_field',
                'settings' => array(),
                'type' => 'computed_field_plain',
                'weight' => 10,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 10,
            ),
        ),
        'entity_type' => 'node',
        'field_name' => 'field_league_match_grandagg',
        'label' => 'Grand Aggregate',
        'required' => 0,
        'settings' => array(
            'user_register_form' => FALSE,
        ),
        'widget' => array(
            'active' => 0,
            'module' => 'computed_field',
            'settings' => array(),
            'type' => 'computed',
            'weight' => 10,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_name'
  $field_instances['node-bullseye_league_match-field_league_match_name'] = array(
    'bundle' => 'bullseye_league_match',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_league_match_name',
    'label' => 'Shooter\'s Name',
    'required' => FALSE,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 0,
    ),
  );

    // Translatables
    // Included for use with string extractors like potx.
    t('.22 Aggregate');
    t('.22 Rapid Fire');
    t('.22 Slow Fire');
    t('.22 Timed Fire');
    t('Center Fire Aggregate');
    t('Center Fire Rapid Fire');
    t('Center Fire Slow Fire');
    t('Center Fire Timed Fire');
    t('Date');
    t('Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.');
    t('Grand Aggregate');
    t('Shooter\'s Name');

    return $field_instances;
}
