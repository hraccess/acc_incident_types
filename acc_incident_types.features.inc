<?php
/**
 * @file
 * acc_incident_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function acc_incident_types_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function acc_incident_types_views_api() {
  return array("api" => "3.0");
}
