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

  // Exported field_instance: 'node-bullseye_league_match-body'
  $field_instances['node-bullseye_league_match-body'] = array(
    'bundle' => 'bullseye_league_match',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
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
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 34,
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
                'weight' => 0,
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
            'weight' => 34,
        ),
    );

    // Exported field_instance: 'node-bullseye_league_match-field_league_match_22rf'
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
                'weight' => 3,
            ),
            'teaser' => array(
                'label' => 'above',
                'settings' => array(),
                'type' => 'hidden',
                'weight' => 0,
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
            'weight' => 34,
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
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 33,
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
        'weight' => 1,
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
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('.22 Slow Fire');
  t('Body');
  t('Date');
  t('Enter the score, with Xs, in the form of <strong>181.05</strong> (that would be 181-5x). Please include the leading zero for the X count.');
  t('Shooter\'s Name');

  return $field_instances;
}
