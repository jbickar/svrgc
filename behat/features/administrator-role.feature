Feature: Administrator Functions
  In order to ensure that upgrades to the Sunnyvale Rod & Gun Club do not break existing functionality
  As an administrator
  I want to perform various administrative tasks

  @api @destructive @dev
  Scenario: Add User
    Given I am logged in as a user with the "administrator" role

  @api @destructive @dev
  Scenario: Block User
    Given I am logged in as a user with the "administrator" role

  @api @destructive @dev @javascript
  Scenario: User Overview
    Given I am logged in as a user with the "administrator" role
    And I am on "admin/user/user2"

  @api @destructive @dev @javascript
  Scenario: Content Overview
    Given I am logged in as a user with the "administrator" role
    And I am on "admin/content/node2"

  @api @destructive @dev
  Scenario: Send Email
    Given I am logged in as a user with the "administrator" role

  @api @destructive @dev
  Scenario: Add Bullseye League Match
    Given I am logged in as a user with the "administrator" role

  @api @destructive @dev
  Scenario: Add Bullseye League Handicap Match
    Given I am logged in as a user with the "administrator" role

