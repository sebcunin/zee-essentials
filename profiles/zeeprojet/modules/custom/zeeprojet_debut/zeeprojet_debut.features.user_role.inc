<?php
/**
 * @file
 * zeeprojet_debut.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function zeeprojet_debut_user_default_roles() {
  $roles = array();

  // Exported role: contributeur.
  $roles['contributeur'] = array(
    'name' => 'contributeur',
    'weight' => '4',
  );

  // Exported role: zee_member.
  $roles['zee_member'] = array(
    'name' => 'zee_member',
    'weight' => '5',
  );

  return $roles;
}
