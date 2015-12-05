Feature: Range Hours Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the range/hours page

  Scenario: Hours Headings
    Given I am on "range/hours"
    Then I should see the heading "Range Hours"
#    And I should see the heading "Today's Hours"
    And I should see the heading "Scheduled Activities"

