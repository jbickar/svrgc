Feature: Club Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the club page

  @safe
  Scenario: Club Headings and content
    Given I am on "club"
    Then I should see the heading "Join the Club"
    And I should see the heading "About the Club"
    And I should see the heading "Membership"
    And I should see "Regular Membership"
    And I should see "Special Membership"
