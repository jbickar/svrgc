Feature: Service Rifle Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/service-rifle page

  Scenario: Service Rifle Headings
    Given I am on "activities/service-rifle"
    Then I should see the heading "Service Rifle"
    And I should see the heading "Introduction"
    And I should see the heading "Where"
    And I should see the heading "When"
    And I should see the heading "Eligibility"
    And I should see the heading "Information for New Shooters"
    And I should see the heading "Course of Fire"
    And I should see the heading "Firearms and Equipment"
    And I should see the heading "Targets"
    And I should see the heading "Alibis"
    And I should see the heading "Scoring"
    And I should see the heading "Cost"
    And I should see the heading "Awards"
    And I should see the heading "Miscellaneous"