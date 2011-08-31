<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function msfeat_profiles_user_default_permissions() {
  $permissions = array();

  // Exported permission: Allow Reordering
  $permissions['Allow Reordering'] = array(
    'name' => 'Allow Reordering',
    'roles' => array(
      '0' => 'authenticated user',
      '1' => 'editor',
    ),
  );

  // Exported permission: create profile content
  $permissions['create profile content'] = array(
    'name' => 'create profile content',
    'roles' => array(),
  );

  // Exported permission: delete any profile content
  $permissions['delete any profile content'] = array(
    'name' => 'delete any profile content',
    'roles' => array(),
  );

  // Exported permission: delete own profile content
  $permissions['delete own profile content'] = array(
    'name' => 'delete own profile content',
    'roles' => array(),
  );

  // Exported permission: edit any profile content
  $permissions['edit any profile content'] = array(
    'name' => 'edit any profile content',
    'roles' => array(),
  );

  // Exported permission: edit own profile content
  $permissions['edit own profile content'] = array(
    'name' => 'edit own profile content',
    'roles' => array(),
  );

  // Exported permission: view imagecache profile
  $permissions['view imagecache profile'] = array(
    'name' => 'view imagecache profile',
    'roles' => array(),
  );

  // Exported permission: view imagecache profile-thumb
  $permissions['view imagecache profile-thumb'] = array(
    'name' => 'view imagecache profile-thumb',
    'roles' => array(),
  );

  return $permissions;
}
