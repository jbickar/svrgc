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
    $this->addFieldMapping('field_league_match_22agg', 'field_league_match_22agg');
    $this->addFieldMapping('field_league_match_cfsf', 'field_league_match_cfsf');
    $this->addFieldMapping('field_league_match_cftf', 'field_league_match_cftf');
    $this->addFieldMapping('field_league_match_cfrf', 'field_league_match_cfrf');
    $this->addFieldMapping('field_league_match_cfagg', 'field_league_match_cfagg');
    $this->addFieldMapping('field_league_match_grandagg', 'field_league_match_grandagg');
    $this->addFieldMapping('field_league_match_date', 'field_league_match_date');
  }
