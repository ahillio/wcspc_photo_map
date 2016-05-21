<?php
/**
 * @file
 * wcspc_map.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function wcspc_map_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'button_add_photo' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'user_s_photos' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function wcspc_map_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'button_add_photo';
  $ds_field->label = 'Button - Add Photo';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|15',
    'block_render' => '1',
  );
  $export['button_add_photo'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'user_s_photos';
  $ds_field->label = 'User\'s Photos';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|photo_map-block_2',
    'block_render' => '1',
  );
  $export['user_s_photos'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function wcspc_map_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'button_add_photo',
      ),
      'right' => array(
        1 => 'user_s_photos',
      ),
    ),
    'fields' => array(
      'button_add_photo' => 'left',
      'user_s_photos' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['user|user|default'] = $ds_layout;

  return $export;
}

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
