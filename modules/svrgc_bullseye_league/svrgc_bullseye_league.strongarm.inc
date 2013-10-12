<?php
/**
 * @file
 * svrgc_bullseye_league.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function svrgc_bullseye_league_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__bullseye_league_match';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'redirect' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__bullseye_league_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_bullseye_league_match';
  $strongarm->value = array();
  $export['menu_options_bullseye_league_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_bullseye_league_match';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_bullseye_league_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_bullseye_league_match';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_bullseye_league_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_bullseye_league_match';
  $strongarm->value = '1';
  $export['node_preview_bullseye_league_match'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_bullseye_league_match';
  $strongarm->value = 0;
  $export['node_submitted_bullseye_league_match'] = $strongarm;

  return $export;
}
