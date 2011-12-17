<?php
// Declare all the .view files in the views subdir that end in .view
function svrgc_views_default_views() {
  $files = file_scan_directory(drupal_get_path('module', 'svrgc') .'/views', '.view');
  foreach ($files as $absolute => $file) {
    require $absolute;
    if (isset($view)) {
      $views[$file->name] = $view;
    }
  }
  return $views;
}
