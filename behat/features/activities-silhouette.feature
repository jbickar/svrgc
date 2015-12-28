Feature: Silhoutte Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/silhouette page

  @safe
  Scenario: Silhouette Headings
    Given I am on "activities/silhouette"
    Then I should see the heading "Silhouette: Smallbore and Air Rifle"
    And I should see the heading "Introduction"
    And I should see the heading "Equipment"
    And I should see the heading "Rifles"
    And I should see the heading "Scopes"
    And I should see the heading "Ammunition"
    And I should see the heading "Other Gear"
    And I should see the heading "Getting Ready"
    And I should see the heading "Testing Ammunition"
    And I should see the heading "Getting Scope Settings"
    And I should see the heading "Shooting Offhand"
    And I should see the heading "The Match"
    And I should see the heading "Downloadable Targets"