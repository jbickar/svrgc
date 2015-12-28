Feature: Member Functions
  In order to ensure that upgrades to the Sunnyvale Rod & Gun Club do not break existing functionality
  As a member
  I want to access various privileged content

  @api
  Scenario: Members should be able to access Members' Only content
    Given I am logged in as a user with the "member" role
    And I am on "members"

  Scenario: Anonymous users should not access Members' Only content
    Given I am an anonymous user
    And I am on "members"


