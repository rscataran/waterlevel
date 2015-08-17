<?php
/**
 * @file
 * water_level.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function water_level_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function water_level_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function water_level_node_info() {
  $items = array(
    'water_level' => array(
      'name' => t('Water Level'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name of Dam'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
