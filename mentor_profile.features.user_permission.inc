<?php
/**
 * @file
 * mentor_profile.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mentor_profile_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any mentor profile'.
  $permissions['edit any mentor profile'] = array(
    'name' => 'edit any mentor profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'edit own mentor profile'.
  $permissions['edit own mentor profile'] = array(
    'name' => 'edit own mentor profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view any mentor profile'.
  $permissions['view any mentor profile'] = array(
    'name' => 'view any mentor profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  // Exported permission: 'view own mentor profile'.
  $permissions['view own mentor profile'] = array(
    'name' => 'view own mentor profile',
    'roles' => array(),
    'module' => 'profile2',
  );

  return $permissions;
}
