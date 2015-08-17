<?php
/**
 * @file
 * water_level.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function water_level_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'water_level';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Water Level';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'water_level_statistics',
      'display' => 'block',
      'args' => '',
      'title' => 'Today',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'water_level_statistics',
      'display' => 'block_1',
      'args' => '',
      'title' => 'Yesterday',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Today');
  t('Water Level');
  t('Yesterday');

  $export['water_level'] = $quicktabs;

  return $export;
}
