<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class SVRGCD6D7NodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}

/**
 *  Bullseye League Matches
 */

class SVRGCD6D7BullseyeLeagueMatchNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_league_match_22sf'] = '.22 Slow Fire';
    $this->sourceFields['field_league_match_22tf'] = '.22 Timed Fire';
    $this->sourceFields['field_league_match_22rf'] = '.22 Rapid Fire';
    $this->sourceFields['field_league_match_cfsf'] = 'CF Slow Fire';
    $this->sourceFields['field_league_match_cftf'] = 'CF Timed Fire';
    $this->sourceFields['field_league_match_cfrf'] = 'CF Rapid Fire';
    $this->sourceFields['field_league_match_date'] = 'Date';

    parent::__construct($arguments);

    $this->addFieldMapping('field_league_match_22sf', 'field_league_match_22sf');
    $this->addFieldMapping('field_league_match_22tf', 'field_league_match_22tf');
    $this->addFieldMapping('field_league_match_22rf', 'field_league_match_22rf');
//    $this->addFieldMapping('field_league_match_22agg', 'field_league_match_22agg');
    $this->addFieldMapping('field_league_match_cfsf', 'field_league_match_cfsf');
    $this->addFieldMapping('field_league_match_cftf', 'field_league_match_cftf');
    $this->addFieldMapping('field_league_match_cfrf', 'field_league_match_cfrf');
//    $this->addFieldMapping('field_league_match_cfagg', 'field_league_match_cfagg');
//    $this->addFieldMapping('field_league_match_grandagg', 'field_league_match_grandagg');
    $this->addFieldMapping('field_league_match_date', 'field_league_match_date');
  }
}

/**
 *  Bullseye League Handicap Matches
 */

class SVRGCD6D7BullseyeHandicapLeagueMatchNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_league_match_22sf'] = '.22 Slow Fire';
    $this->sourceFields['field_league_match_22tf'] = '.22 Timed Fire';
    $this->sourceFields['field_league_match_22rf'] = '.22 Rapid Fire';
    $this->sourceFields['field_league_match_cfsf'] = 'CF Slow Fire';
    $this->sourceFields['field_league_match_cftf'] = 'CF Timed Fire';
    $this->sourceFields['field_league_match_cfrf'] = 'CF Rapid Fire';
    $this->sourceFields['field_league_match_date'] = 'Date';

    parent::__construct($arguments);

    $this->addFieldMapping('field_league_match_22sf', 'field_league_match_22sf');
    $this->addFieldMapping('field_league_match_22tf', 'field_league_match_22tf');
    $this->addFieldMapping('field_league_match_22rf', 'field_league_match_22rf');
//    $this->addFieldMapping('field_league_match_22agg', 'field_league_match_22agg');
    $this->addFieldMapping('field_league_match_cfsf', 'field_league_match_cfsf');
    $this->addFieldMapping('field_league_match_cftf', 'field_league_match_cftf');
    $this->addFieldMapping('field_league_match_cfrf', 'field_league_match_cfrf');
//    $this->addFieldMapping('field_league_match_cfagg', 'field_league_match_cfagg');
//    $this->addFieldMapping('field_league_match_grandagg', 'field_league_match_grandagg');
    $this->addFieldMapping('field_league_match_date', 'field_league_match_date');
  }
}

/**
 *  Events
 */

class SVRGCD6D7EventNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_event_date_time'] = 'Date and Start Time';
    $this->sourceFields['field_event_date_time:value2'] = 'Date and End Time';
    $this->sourceFields['field_event_date_time:rrule'] = 'Repeat Rule';
    parent::__construct($arguments);

    $this->addFieldMapping('field_event_datetime', 'field_event_date_time');
    $this->addFieldMapping('field_event_datetime:to', 'field_event_date_time:value2');
    $this->addFieldMapping('field_event_datetime:rrule', 'field_event_date_time:rrule');

    // Taxonomy term mapping.
    $this->addFieldMapping('field_event_range', '5')
      ->sourceMigration('Range');
    $this->addFieldMapping('field_event_range:source_type')
      ->defaultValue('tid');

  }
}

/**
 *  Files
 */

class SVRGCD6D7FileNodeMigration extends SVRGCD6D7NodeMigration
{
  public function __construct(array $arguments)
  {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_file_file'] = 'File';
    $this->sourceFields['field_file_date'] = 'Date';
    parent::__construct($arguments);

    $this->addFieldMapping('field_file_date', 'field_file_date');

    // Taxonomy term mapping.
    $this->addFieldMapping('field_file_type', '7')
      ->sourceMigration('File Type');
    $this->addFieldMapping('field_file_type:source_type')
      ->defaultValue('tid');

    // Map files from D6 core upload field to File Field.
    // See https://www.drupal.org/node/1819704#comment-8874705
    $this->addFieldMapping('field_file_file', 'field_file_file')
      ->sourceMigration('File');
    $this->addFieldMapping('field_file_file:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_file_file:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_file_file:description', 'field_file_file:description');
    $this->addFieldMapping('field_file_file:display', 'field_file_file:list');
    $this->addFieldMapping('field_file_file:language')
      ->defaultValue(LANGUAGE_NONE);
  }
}

/**
 *  Operating Hours
 */

class SVRGCD6D7OperatingHoursNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_op_hours_hours'] = 'Date and Start Time';
    $this->sourceFields['field_op_hours_hours:value2'] = 'Date and End Time';
    $this->sourceFields['field_op_hours_hours:rrule'] = 'Repeat Rule';
    parent::__construct($arguments);

    $this->addFieldMapping('field_op_hours_hours', 'field_op_hours_hours');
    $this->addFieldMapping('field_op_hours_hours:value2', 'field_op_hours_hours:value2');
    $this->addFieldMapping('field_op_hours_hours:rrule', 'field_op_hours_hours:rrule');

    // Taxonomy term mapping.
    $this->addFieldMapping('field_op_hours_member_hours', '4')
      ->sourceMigration('OperatingHours');
    $this->addFieldMapping('field_op_hours_member_hours:source_type')
      ->defaultValue('tid');

    $this->addFieldMapping('field_op_hours_range', '5')
      ->sourceMigration('Range');
    $this->addFieldMapping('field_op_hours_range:source_type')
      ->defaultValue('tid');
  }
}

/**
 *  Pages
 */

class SVRGCD6D7PageNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['upload'] = "Upload";
    parent::__construct($arguments);

    // Map files from D6 core upload field to File Field.
    // See https://www.drupal.org/node/1819704#comment-8874705
    $this->addFieldMapping('field_s_page_file', 'upload')
      ->sourceMigration('File');
    $this->addFieldMapping('field_s_page_file:file_class')
      ->defaultValue('MigrateFileFid');
    $this->addFieldMapping('field_s_page_file:preserve_files')
      ->defaultValue(TRUE);
    $this->addFieldMapping('field_s_page_file:description', 'upload:description');
    $this->addFieldMapping('field_s_page_file:display', 'upload:list');
    $this->addFieldMapping('field_s_page_file:language')
      ->defaultValue(LANGUAGE_NONE);
  }
}

/**
 *  Photos
 */

class SVRGCD6D7PhotoNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {

    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_photo_photo'] = 'Photo';

    parent::__construct($arguments);

    // @TODO: See if this works. It's a Field Collection, so might need to do some additional work.
    $this->addFieldMapping('field_s_image_info', 'field_photo_photo');


    // Taxonomy term mapping.
    $this->addFieldMapping('field_s_slide_gallery', '3')
      ->sourceMigration('Gallery');
    $this->addFieldMapping('field_s_slide_gallery:source_type')
      ->defaultValue('tid');

  }
}

/**
 *  Profiles
 */

class SVRGCD6D7ProfileNodeMigration extends SVRGCD6D7NodeMigration {
  public function __construct(array $arguments) {
    // Add any other data we're pulling into the source row, before the parent
    // constructor.
    $this->sourceFields['field_profile_fullname'] = 'Full Name';
    $this->sourceFields['field_profile_firstname'] = 'First Name';
    $this->sourceFields['field_profile_lastname'] = 'Last Name';
    $this->sourceFields['field_profile_membership_type'] = 'Membership Type';
    $this->sourceFields['field_profile_phone'] = 'Phone Number';
    parent::__construct($arguments);

    // @TODO: map these to User entities.
    $this->addFieldMapping('field_user_first_name', 'field_profile_firstname')
      ->sourceMigration('User');
    $this->addFieldMapping('field_user_last_name', 'field_profile_lastname')
      ->sourceMigration('User');
    $this->addFieldMapping('field_user_membership_type', 'field_profile_membership_type')
      ->sourceMigration('User');
    $this->addFieldMapping('field_user_phone_number', 'field_profile_phone')
      ->sourceMigration('User');

  }
}
