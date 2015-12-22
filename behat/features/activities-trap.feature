Feature: Trap Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/trapshooting page

  Scenario: Trap Headings
    Given I am on "activities/trapshooting"
    Then I should see the heading "Trap"
    And I should see the heading "Singles"
    And I should see the heading "Handicap"
    And I should see the heading "Doubles"
    And I should see the heading "The Equipment"
    And I should see the heading "Guns"
    And I should see the heading "Ammunition"
    And I should see the heading "Clothing"
    And I should see the heading "More Information"