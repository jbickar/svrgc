<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function range_duty_importer_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function range_duty_importer_views_api() {
  return array(
    'api' => '2',
  );
}
