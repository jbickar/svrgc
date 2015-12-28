Feature: Range Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the range page

  @safe
  Scenario: Range Headings
    Given I am on "range"
    Then I should see the heading "Ranges"
    And I should see the heading "Ranges and Rules"
    And I should see the heading "Rifle and Pistol Range Conditions:"
    And I should see the heading "Trap Range Conditions:"
    And I should see the heading "Range Rules:"
