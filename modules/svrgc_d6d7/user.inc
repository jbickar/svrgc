<?php

/**
 * Common mappings for the Drupal 6 user migrations.
 */
abstract class svrgcd6d7UserMigration extends DrupalUser6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
    $this->addFieldMapping('is_new')->defaultValue('TRUE');
    // Keep the same UID's
	  $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('field_user_first_name', 'field_profile_firstname');
    $this->addFieldMapping('field_user_last_name', 'field_profile_lastname');
    $this->addFieldMapping('field_user_membership_type', 'field_profile_membership_type');
    $this->addFieldMapping('field_user_phone', 'field_profile_phone');
  }

}