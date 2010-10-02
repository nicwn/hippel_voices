<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function hippel_voices_user_default_permissions() {
  $permissions = array();

  // Exported permission: create comment content
  $permissions['create comment content'] = array(
    'name' => 'create comment content',
    'roles' => array(),
  );

  // Exported permission: create image content
  $permissions['create image content'] = array(
    'name' => 'create image content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create link content
  $permissions['create link content'] = array(
    'name' => 'create link content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create question content
  $permissions['create question content'] = array(
    'name' => 'create question content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: create suggestion content
  $permissions['create suggestion content'] = array(
    'name' => 'create suggestion content',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
