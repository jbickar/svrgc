<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function bullseye_league_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function bullseye_league_node_info() {
  $items = array(
    'bullseye_league_match' => array(
      'name' => t('Bullseye League Match'),
      'module' => 'features',
      'description' => t('Results for complete 120-shot match for one shooter'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'profile' => array(
      'name' => t('Profile'),
      'module' => 'features',
      'description' => t('A user profile built as content.'),
      'has_title' => '1',
      'title_label' => t('Full Name'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function bullseye_league_views_api() {
  return array(
    'api' => '2',
  );
}
