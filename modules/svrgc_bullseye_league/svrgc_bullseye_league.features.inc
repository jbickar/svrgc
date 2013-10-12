<?php
/**
 * @file
 * svrgc_bullseye_league.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function svrgc_bullseye_league_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function svrgc_bullseye_league_node_info() {
  $items = array(
    'bullseye_league_match' => array(
      'name' => t('Bullseye League Match'),
      'base' => 'node_content',
      'description' => t('Results for complete 120-shot match for one shooter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
