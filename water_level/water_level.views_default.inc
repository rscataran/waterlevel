<?php
/**
 * @file
 * water_level.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function water_level_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'water_level_statistics';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Water Level Statistics';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'charts';
  $handler->display->display_options['style_options']['width'] = '240';
  $handler->display->display_options['style_options']['height'] = '320';
  $handler->display->display_options['style_options']['type'] = array(
    'bluff' => 'bar',
    'flot' => 'point',
  );
  $handler->display->display_options['style_options']['showlegend'] = 0;
  $handler->display->display_options['style_options']['zoom'] = 0;
  $handler->display->display_options['style_options']['views_charts_series_fields'] = array(
    'field_water_level' => 'field_water_level',
  );
  $handler->display->display_options['style_options']['views_charts_x_labels'] = 'title';
  $handler->display->display_options['style_options']['y_min'] = '';
  $handler->display->display_options['style_options']['y_legend'] = '';
  $handler->display->display_options['style_options']['series_colours'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Water Level */
  $handler->display->display_options['fields']['field_water_level']['id'] = 'field_water_level';
  $handler->display->display_options['fields']['field_water_level']['table'] = 'field_data_field_water_level';
  $handler->display->display_options['fields']['field_water_level']['field'] = 'field_water_level';
  $handler->display->display_options['fields']['field_water_level']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'water_level' => 'water_level',
  );
  /* Filter criterion: Content: Date (field_date_date) */
  $handler->display->display_options['filters']['field_date_date_value']['id'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['table'] = 'field_data_field_date_date';
  $handler->display->display_options['filters']['field_date_date_value']['field'] = 'field_date_date_value';

  /* Display: Water Level Today */
  $handler = $view->new_display('block', 'Water Level Today', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'water_level' => 'water_level',
  );
  /* Filter criterion: Content: Date (field_date_date) */
  $handler->display->display_options['filters']['field_date_date_value']['id'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['table'] = 'field_data_field_date_date';
  $handler->display->display_options['filters']['field_date_date_value']['field'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_date_date_value']['value'] = '2015-08-17';
  $handler->display->display_options['filters']['field_date_date_value']['expose']['operator_id'] = 'field_date_date_value_op';
  $handler->display->display_options['filters']['field_date_date_value']['expose']['label'] = 'Date (field_date_date)';
  $handler->display->display_options['filters']['field_date_date_value']['expose']['use_operator'] = TRUE;
  $handler->display->display_options['filters']['field_date_date_value']['expose']['operator'] = 'field_date_date_value_op';
  $handler->display->display_options['filters']['field_date_date_value']['expose']['identifier'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Water Level Yesterday */
  $handler = $view->new_display('block', 'Water Level Yesterday', 'block_1');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Date (field_date_date) */
  $handler->display->display_options['filters']['field_date_date_value']['id'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['table'] = 'field_data_field_date_date';
  $handler->display->display_options['filters']['field_date_date_value']['field'] = 'field_date_date_value';
  $handler->display->display_options['filters']['field_date_date_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_date_date_value']['value'] = '2015-08-17';
  $handler->display->display_options['filters']['field_date_date_value']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'water_level' => 'water_level',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $export['water_level_statistics'] = $view;

  return $export;
}
