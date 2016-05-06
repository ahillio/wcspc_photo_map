<?php
/**
 * @file
 * wcspc_map.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function wcspc_map_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map';
  $ds_view_mode->label = 'map';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map'] = $ds_view_mode;

  return $export;
}
