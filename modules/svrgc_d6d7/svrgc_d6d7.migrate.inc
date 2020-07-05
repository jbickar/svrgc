<?php

/**
 * This is example code for a Drupal 6 to Drupal 7 migration. This won't actually
 * work without defining the referenced vocabularies, content types, and fields
 * on each side.
 */

/**
 * Implements hook_migrate_api().
 */
function svrgc_d6d7_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'svrgc_d6d7_public_migration' => array(
        'title' => 'SRGC Drupal 6 to Drupal 7 public site migrations',
      )
    )
  );

  /**
   * Each migration being registered takes an array of arguments, some required
   * and some optional. Start with the common arguments required by all - the
   * source_connection (connection key, set up in settings.php, pointing to
   * the Drupal 6 database), source_version (major version of Drupal), and
   * group_name (a.k.a. import job).
   */
  $common_arguments = array(
    'source_connection' => 'legacy',
    'source_version' => 6,
    'group_name' => 'svrgc_d6d7_public_migration',
    'format_mappings' => array(
      '0' => 'plain_text',
      '1' => 'filtered_html',
      '2' => 'full_html',
      '3' => 'full_html',
      '4' => 'content_editor_text_format',
    )
  );

  // Register the file migration.
  // source_dir needs to be adjusted to match your file system.
  $api['migrations']['File'] = $common_arguments + array(
    'machine_name' => 'filemigration',
    'description' => t('Import Drupal 6 files'),
    'class_name' => 'DrupalFile6Migration',
    'user_migration' => 'User',
    'default_uid' => 1,
    'source_dir' => DRUPAL_ROOT . '/../../srgcdrupal',
    // @TODO: private_upload files.
    'destination_dir' => 'public://files',
  );

  // Register the user migration.
  // We just use the migrate_d2d D6 migration class as-is.
  $api['migrations']['User'] = $common_arguments + array(
    'description' => t('Migration of Users from Drupal 6'),
    'class_name' => 'DrupalUser6Migration',
    'role_migration' => 'Roles',
    'picture_migration' => 'UserPictures',
    'soft_dependencies' => array('Roles'),
  );

  // Register the role migration.
  // We just use the migrate_d2d D6 migration class as-is.
  $api['migrations']['Roles'] = $common_arguments + array(
    'description' => t('Migration of Roles from Drupal 6'),
    'class_name' => 'DrupalRole6Migration',
    'role_mappings' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'Bullseye Shooter' => 'bullseye_shooter',
      'caliber' => 'caliber',
      'Forum Moderator' => 'forum_moderator',
      'Member' => 'member',
      'Membership Chairman' => 'membership_chairman',
      'Power User' => 'power_user',
      'Site Admin' => 'administrator',
    )
  );

  /*
   * User Picture Migration
   */
  $api['migrations']['UserPictures'] = $common_arguments + array(
      'description' => t('Migration of user pictures from Drupal 6.'),
      'class_name' => 'DrupalPicture6Migration',
      'default_uid' => 1, // The default owner id if owner is not present
      'source_dir' => DRUPAL_ROOT . '/../../srgcdrupal',
      'destination_dir' => 'public://',
    );

  // For vocabulary migrations, source_vocabulary and destination_vocabulary are
  // required arguments. Note that in Drupal 6 vocabularies did not have machine
  // names, so we use the vocabulary ID to uniquely identify them.
  $vocabulary_arguments = array(
    'Gallery' => array(
      'description' => t('Migration of Gallery terms from Drupal 6'),
      'source_vocabulary' => '3',  // D6 Vocabulary ID
      'destination_vocabulary' => 'gallery',
    ),
    'OperatingHours' => array(
      'description' => t('Migration of Operating Hours terms from Drupal 6'),
      'source_vocabulary' => '4',  // D6 Vocabulary ID
      'destination_vocabulary' => 'operating_hours',
    ),
    'Range' => array(
      'description' => t('Migration of Range terms from Drupal 6'),
      'source_vocabulary' => '5',  // D6 Vocabulary ID
      'destination_vocabulary' => 'range',
    ),
    'FileType' => array(
      'description' => t('Migration of File Type terms from Drupal 6'),
      'source_vocabulary' => '7',  // D6 Vocabulary ID
      'destination_vocabulary' => 'file_type',
    ),
  );

  // Again, we're using the migrate_d2d class directly.
  // The soft dependency says that while we don't have to run the user migration
  // first, we want to make sure it's listed first so the vocabularies are
  // listed right ahead of the node migrations.
  $common_vocabulary_arguments = $common_arguments + array(
    'class_name' => 'DrupalTerm6Migration',
    'soft_dependencies' => array('User'),
  );
  foreach ($vocabulary_arguments as $migration_name => $arguments) {
    $arguments += $common_vocabulary_arguments;
    $api['migrations'][$migration_name] = $arguments;
  }

  // Node migrations - each has its own class derived from the migrate_d2d class,
  // specifying its particular field mappings and transformations. source_type
  // and destination_type are required arguments.
  $node_arguments = array(
    'BullseyeLeagueMatchNodes' => array(
      'class_name' => 'SVRGCD6D7BullseyeLeagueMatchNodeMigration',
      'description' => t('Migration of Bullseye League Match nodes from Drupal 6'),
      'source_type' => 'bullseye_league_match',
      'destination_type' => 'bullseye_league_match',
    ),
    'BullseyeHandicapLeagueMatchNodes' => array(
      'class_name' => 'SVRGCD6D7BullseyeHandicapLeagueMatchNodeMigration',
      'description' => t('Migration of Bullseye Handicap League Match nodes from Drupal 6'),
      'source_type' => 'bullseye_handicap_league_match',
      // @TODO: create content type on destination.
      'destination_type' => 'bullseye_handicap_league_match',
    ),
    'EventNodes' => array(
      'class_name' => 'SVRGCD6D7EventNodeMigration',
      'description' => t('Migration of Event nodes from Drupal 6'),
      'source_type' => 'event',
      'destination_type' => 'event',
    ),
    'FileNodes' => array(
      'class_name' => 'SVRGCD6D7FileNodeMigration',
      'description' => t('Migration of File nodes from Drupal 6'),
      'source_type' => 'file',
      'destination_type' => 'file',
    ),
    'OperatingHoursNodes' => array(
      'class_name' => 'SVRGCD6D7OperatingHoursNodeMigration',
      'description' => t('Migration of Operating Hours nodes from Drupal 6'),
      'source_type' => 'operating_hours',
      'destination_type' => 'operating_hours',
    ),
    'PageNodes' => array(
      'class_name' => 'SVRGCD6D7PageNodeMigration',
      'description' => t('Migration of Page nodes from Drupal 6'),
      'source_type' => 'page',
      'destination_type' => 'stanford_page',
    ),
    'PhotoNodes' => array(
      'class_name' => 'SVRGCD6D7PhotoNodeMigration',
      'description' => t('Migration of Photo nodes from Drupal 6'),
      'source_type' => 'photo',
      'destination_type' => 'stanford_slide',
    ),
    'ProfileNodes' => array(
      'class_name' => 'SVRGCD6D7ProfileNodeMigration',
      'description' => t('Migration of Profile nodes from Drupal 6'),
      'source_type' => 'profile',
      // @TODO: Map this to D7 user entity.
      'destination_type' => 'user',
    ),
  );

  // Tell the node migrations where the users are coming from, so they can
  // set up the dependency and resolve D6->D7 uids.
  $common_node_arguments = $common_arguments + array(
    'user_migration' => 'User',
    'file_migration' => 'File',
    'soft_dependencies' => array('File'),
  );

  foreach ($node_arguments as $migration_name => $arguments) {
    $arguments = array_merge_recursive($arguments, $common_node_arguments);
    $api['migrations'][$migration_name] = $arguments;
  }

  // Menu migrations -- same requirements as users
  /**
   * Not migrating menus.

  $menu_arguments = $common_arguments + array(
      'description' => t('Migration of menus from Drupal 6'),
      'class_name' => 'DrupalMenu6Migration',
    );

  // We just use the migrate_d2d D6 migration class as-is.
  $api['migrations']['Menu'] = $menu_arguments;

  // Menu links migrations -- basic requirements, plus must set up menu dependency
  $menu_links_arguments = $common_arguments + array(
      'description' => t('Migration of menu links from Drupal 6'),
      'class_name' => 'DrupalMenuLinks6Migration',
      'menu_migration' => 'Menu',
    );
  $api['migrations']['MenuLinks'] = $menu_links_arguments;
  */
  return $api;
}
