Feature: Action Pistol Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/action-pistol page

  @safe
  Scenario: Action Pistol Headings
    Given I am on "activities/action-pistol"
    Then I should see the heading "Action Pistol"
    And I should see the heading "Object"
    And I should see the heading "Type of Events"
    And I should see the heading "Equipment"
    And I should see the heading "Safety"
    And I should see the heading "When"
    And I should see the heading "Eligibility"

