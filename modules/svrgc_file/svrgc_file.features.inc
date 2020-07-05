<?php
/**
 * @file
 * svrgc_file.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function svrgc_file_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function svrgc_file_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => t('Upload a newsletter or meeting minutes PDF file'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
