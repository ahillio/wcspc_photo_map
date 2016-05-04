<?php
/**
 * @file
 * wcspc_map.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function wcspc_map_user_default_roles() {
  $roles = array();

  // Exported role: community.
  $roles['community'] = array(
    'name' => 'community',
    'weight' => 4,
  );

  // Exported role: parent.
  $roles['parent'] = array(
    'name' => 'parent',
    'weight' => 3,
  );

  // Exported role: youth.
  $roles['youth'] = array(
    'name' => 'youth',
    'weight' => 2,
  );

  return $roles;
}
