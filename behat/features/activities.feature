Feature: Activities Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities page

  @safe
  Scenario: Activities Headings
    Given I am on "activities"
    Then I should see the heading "Activities"
    And I should see the heading "Shooting Sports"
    And I should see the heading "American Rimfire Association .22LR Benchrest"
    And I should see the heading "Bullseye Pistol"
    And I should see the heading "SASS Style Cowboy Shooting"
    And I should see the heading "Silhouette - Smallbore Rifle"
    And I should see the heading "Silhouette - Air Rifle"
    And I should see the heading "Trap"
