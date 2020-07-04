<?php
/**
 * @file
 * svrgc_vocabularies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function svrgc_vocabularies_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
