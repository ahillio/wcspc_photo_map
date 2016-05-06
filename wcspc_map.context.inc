<?php
/**
 * @file
 * wcspc_map.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function wcspc_map_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map_toolbar_anon';
  $context->description = '';
  $context->tag = 'map';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-substance-use' => 'photos-substance-use',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-photo_map-block_1' => array(
          'module' => 'views',
          'delta' => 'photo_map-block_1',
          'region' => 'content',
          'weight' => '11',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('map');
  $export['map_toolbar_anon'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'map_toolbar_auth';
  $context->description = '';
  $context->tag = 'map';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'photos-substance-use' => 'photos-substance-use',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'content',
          'weight' => '10',
        ),
        'views-photo_map-block_1' => array(
          'module' => 'views',
          'delta' => 'photo_map-block_1',
          'region' => 'content',
          'weight' => '11',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('map');
  $export['map_toolbar_auth'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'user_profile_layout';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'user*' => 'user*',
      ),
    ),
    'user' => array(
      'values' => array(
        'authenticated user' => 'authenticated user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['user_profile_layout'] = $context;

  return $export;
}
