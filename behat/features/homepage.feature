Feature: Homepage Content
  In order to ensure that the Sunnyvale Rod & Gun Club website has the correct content
  As an end user
  I want to check for the existence of content that should appear on the homepage

  @safe
  Scenario Outline: Homepage content
    Given I am on the homepage
    Then I should see "<Content>" in the "<Region>" region

    Examples:
      | Content                                                                             | Region       |
      | Since 1961, the Sunnyvale Rod & Gun Club has served shooters from its foothill site | Content Area |
      | Sunnyvale Rod & Gun Club is open to the public                                      | Content Area |
      | NOTE: We do not rent or sell firearms or ammunition.                                | Content Area |

  @safe
  Scenario: Homepage Headings
    Given I am on the homepage
    Then I should see the heading "Welcome to the Sunnyvale Rod & Gun Club"
    And I should see the heading "A Premier Shooting Facility Located in Cupertino, California"
    And I should see the heading "Map"
    And I should see the heading "Location"
    And I should see the heading "Public Hours"
    And I should see the heading "Membership"

