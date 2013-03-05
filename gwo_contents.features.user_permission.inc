<?php
/**
 * @file
 * gwo_contents.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function gwo_contents_user_default_permissions() {
  $permissions = array();

  // Exported permission: create short_article content.
  $permissions['create short_article content'] = array(
    'name' => 'create short_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any short_article content.
  $permissions['delete any short_article content'] = array(
    'name' => 'delete any short_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own short_article content.
  $permissions['delete own short_article content'] = array(
    'name' => 'delete own short_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any short_article content.
  $permissions['edit any short_article content'] = array(
    'name' => 'edit any short_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own short_article content.
  $permissions['edit own short_article content'] = array(
    'name' => 'edit own short_article content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
