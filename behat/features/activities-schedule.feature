Feature: Activities Schedule Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the range/hours page

  @safe
  Scenario: Schedule Headings
    Given I am on "activities/schedule"
    Then I should see the heading "Events Calendar"

