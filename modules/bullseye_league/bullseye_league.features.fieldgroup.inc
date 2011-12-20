<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function bullseye_league_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_league_match_handicap
  $groups['bullseye_league_match-group_league_match_handicap'] = array(
    'group_type' => 'standard',
    'type_name' => 'bullseye_league_match',
    'group_name' => 'group_league_match_handicap',
    'label' => 'Handicap Results',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '42',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_league_match_22sf_hcp',
      '1' => 'field_league_match_22tf_hcp',
      '2' => 'field_league_match_22rf_hcp',
      '3' => 'field_league_match_22agg_hcp',
      '4' => 'field_league_match_cfsf_hcp',
      '5' => 'field_league_match_cftf_hcp',
      '6' => 'field_league_match_cfrf_hcp',
      '7' => 'field_league_match_cfagg_hcp',
      '8' => 'field_league_match_grandagg_hcp',
    ),
  );

  // Exported group: group_league_match_scratch
  $groups['bullseye_league_match-group_league_match_scratch'] = array(
    'group_type' => 'standard',
    'type_name' => 'bullseye_league_match',
    'group_name' => 'group_league_match_scratch',
    'label' => 'Scratch Results',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '4',
    'fields' => array(
      '0' => 'field_league_match_22sf',
      '1' => 'field_league_match_22tf',
      '2' => 'field_league_match_22rf',
      '3' => 'field_league_match_22agg',
      '4' => 'field_league_match_cfsf',
      '5' => 'field_league_match_cftf',
      '6' => 'field_league_match_cfrf',
      '7' => 'field_league_match_cfagg',
      '8' => 'field_league_match_grandagg',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Handicap Results');
  t('Scratch Results');

  return $groups;
}
