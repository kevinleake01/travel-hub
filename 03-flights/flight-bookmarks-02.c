/*
####################################
#
# --- FLIGHT-BOOKMARKS-02.C ---
#
# This is a tool to display flight routes between 2 airports.
# 
# Example Usage:
# 
# gcc flight-bookmarks-02.c; ./a.out LHR JFK > flight-bookmark-lhr-jfk.html
# gcc flight-bookmarks-02.c; ./a.out JFK LAX > flight-bookmark-jfk-lax.html
#
####################################
*/

#include <stdio.h>

/* --- Function Prototypes go here --- */
int main(int argc, char *argv[]);

/* --- Global variables go here --- */

int main(int argc, char *argv[])
{
  printf("<!DOCTYPE html>\n");
  printf("<html lang=\"en\">\n");
  printf("<head>\n");
  printf("<meta charset=\"utf-8\" >\n");
  printf("<title>Flight Bookmarks 02</title>\n");
  printf("<style>\n");
  printf("body {\n");
  printf("  background-color: #000000;\n");
  printf("  color: #FFFFFF;\n");
  printf("  font-family: monospace;\n");
  printf("}\n");
  printf("h1 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("h2 {\n");
  printf("  background-color: #585858;\n");
  printf("  color: #FFFFFF;\n");
  printf("}\n");
  printf("a:link {\n");
  printf("  color: #FF0000;\n");
  printf("}\n");
  printf("a:visited {\n");
  printf("  color: #00FF00;\n");
  printf("}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>Flight Routes</h1>\n");
  printf("<h2>Between: %s-%s</h2>\n", argv[1], argv[2]);
  printf("<p>\n");
  printf("<a href=\"https://www.flightaware.com/live/findflight?origin=%s&destination=%s\">FlightAware</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightstats.com/v2/flight-tracker/route/%s/%s\">Flightstats</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.airportia.com/search/?q=%s-%s\">Airportia</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flig.ht/s/%s-%s\">Flig.ht/s</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.directflights.com/%s-%s\">Directflights.com</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightroutes.com/%s-%s\">Flightroutes</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightsfrom.com/%s-%s\">Flightsfrom.com</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightpaths.com/%s-%s\">Flightpaths</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://info.flightmapper.net/route/YY_%s_%s\">FlightMapper.net</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightconnections.com/flights-from-%s-to-%s\">FlightConnections</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.airlineinformation.com/%s-%s\">Airline Information</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.fastflightsearch.com/?from=%s&to=%s\">FastFlightSearch.com</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://flight-status.com/route/%s-to-%s\">Flight Status Tracker</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.aircalculator.com/flightplan.php?from=%s&to=%s\">AirCalculator.com</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.google.com/travel/flights?q=%s-%s\">Google Flights #1</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.google.com/search?q=Flight+Route+%s-%s\">Google Flights #2</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://duckduckgo.com/?q=Flight+Route+%s-%s\">DuckDuckGo</a><br>\n", argv[1], argv[2]);
  printf("<br>\n");
  printf("----------------------------------------<br>\n");
  printf("NOTE: You will have to enter the Flight Route manually to the<br>\n");
  printf("website listed below:<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://aviability.com/en/route\">Aviability: Routes Between Any Airports</a><br>\n");
  printf("<br>\n");
  printf("----------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

