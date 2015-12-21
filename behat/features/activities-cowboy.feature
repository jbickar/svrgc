Feature: Cowboy Action Shooting Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/cowboy page

  Scenario: Cowboy Headings
    Given I am on "activities/cowboy"
    Then I should see the heading "Cowboy Action Shooting"
    And I should see the heading "Equipment"
    And I should see the heading "When"
    And I should see the heading "More Info"
    And I should see the heading "Introduction"
    And I should see the heading "Where"
    And I should see the heading "When"
    And I should see the heading "Eligibility"
    And I should see the heading "Course of Fire"
    And I should see the heading "Rules"
    And I should see the heading "Cost"

