Feature: Five-Stand Shotgun Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the activities/five-stand page

  Scenario: Five-Stand Content
    Given I am on "activities/five-stand"
    Then I should see the heading "Five Stand Shotgun"
    And I should see "Five Stand is very similar to Sporting Clays in that a wide variety of targets are thrown."
    And I should see "Each round of Five Stand is shot from five different stations"
    And I should see "Five Stand is a great way to get an experience like Sporting Clays"
    And I should see "Saturdays: 9AM - 5PM"
    And I should see "Tuesdays: 3 PM to 7 PM"
    And I should see "$3 per round for SRGC members"
    And I should see "$6 per round for non-members (lowest cost in Northern California)"

