<?php

/**
 * Common mappings for the Drupal 6 node migrations.
 */
abstract class svrgcd6d7NodeMigration extends DrupalNode6Migration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);
  }
}

/**
 *  Bullseye League Matches
 */

class svrgcd6d7BullseyeLeagueMatchMigration extends svrgcd6d7NodeMigration {
  public function __construct(array $arguments) {
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

class svrgcd6d7EventsMigration extends svrgcd6d7NodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_event_date_time', 'field_event_datetime');
    $this->addFieldMapping('field_event_date_time:value2', 'field_event_datetime:value2');
    $this->addFieldMapping('field_event_date_time:rrule', 'field_event_datetime:rrule');
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_op_hours_range', '5')
      ->sourceMigration('Range')
      ->arguments(array('source_type' => 'tid'));
  }
}

/**
 *  Operating Hours
 */

class svrgcd6d7OperatingHoursMigration extends svrgcd6d7NodeMigration {
  public function __construct(array $arguments) {
    parent::__construct($arguments);

    $this->addFieldMapping('field_op_hours_hours', 'field_op_hours_hours');
    $this->addFieldMapping('field_op_hours_hours:value2', 'field_op_hours_hours:value2');
    $this->addFieldMapping('field_op_hours_hours:rrule', 'field_op_hours_hours:rrule');
    // Note that we map migrated terms by the vocabulary ID.
    $this->addFieldMapping('field_op_hours_member_hours', '4')
      ->sourceMigration('OperatingHours')
      ->arguments(array('source_type' => 'tid'));
    $this->addFieldMapping('field_op_hours_range', '5')
      ->sourceMigration('Range')
      ->arguments(array('source_type' => 'tid'));
  }
}
