/*
####################################
#
# --- FLIGHT-BOOKMARKS-01.C ---
#
# This is a tool to display arrivals and departures from an airport.
# 
# Example Usage:
# 
# gcc flight-bookmarks-01.c; ./a.out LHR > flight-bookmark-lhr.html
# gcc flight-bookmarks-01.c; ./a.out JFK > flight-bookmark-jfk.html
# gcc flight-bookmarks-01.c; ./a.out LAX > flight-bookmark-lax.html
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
  printf("<title>Flight Bookmarks 01</title>\n");
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
  printf("<h1>Flight Arrivals and Departures</h1>\n");
  printf("<h2>For Airport: %s</h2>\n", argv[1]);
  printf("<p>\n");
  printf("<a href=\"https://www.flightradar24.com/airport/%s/arrivals\">Flightradar24 Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightradar24.com/airport/%s/departures\">Flightradar24 Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightaware.com/live/airport/%s\">Flightaware</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightstats.com/v2/flight-tracker/arrivals/%s\">Flightstats: Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightstats.com/v2/flight-tracker/departures/%s\">Flightstats: Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://www.avionio.com/en/airport/%s/arrivals\">Avionio: Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://www.avionio.com/en/airport/%s/departures\">Avionio: Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://www.airportia.com/search/?q=%s\">Airportia</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flig.ht/s/%s\">Flig.ht/s</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flight.info/%s/arrivals\">Flightinfo: Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flight.info/%s/departures\">Flightinfo: Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://airportix.com/%s/arrivals/\">Airportix: Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://airportix.com/%s/departure/\">Airportix: Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://www.directflights.com/%s\">Directflights.com</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightsfrom.com/%s\">FlightsFrom.com</a><br>\n", argv[1]);
  printf("<a href=\"https://www.flightsleaving.com/%s\">Flights Leaving Today</a><br>\n", argv[1]);
  printf("<a href=\"https://myflight.life/airports/%s\">My Flight Life</a><br>\n", argv[1]);
  printf("<a href=\"https://airportguide.com/airport/info/%s\">Airport Guide</a><br>\n", argv[1]);
  printf("<a href=\"https://info.flightmapper.net/airport/%s\">FlightMapper.net</a><br>\n", argv[1]);
  printf("<a href=\"https://www.planemapper.com/airports/%s\">Plane Mapper</a><br>\n", argv[1]);
  printf("<a href=\"https://flight-report.com/en/airport/%s/\">Flight Report</a><br>\n", argv[1]);
  printf("<a href=\"https://allairportsworld.net/?s=%s\">AllAirportsWorld.net</a><br>\n", argv[1]);
  printf("<a href=\"https://shipsgo.com/air/airports/%s\">Shipsgo</a><br>\n", argv[1]);
  printf("<a href=\"https://www.google.com/search?q=%s+Arrivals\">Google: Airport Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://www.google.com/search?q=%s+Departures\">Google: Airport Departures</a><br>\n", argv[1]);
  printf("<a href=\"https://duckduckgo.com/?q=%s+Arrivals\">DuckDuckGo: Airport Arrivals</a><br>\n", argv[1]);
  printf("<a href=\"https://duckduckgo.com/?q=%s+Departures\">DuckDuckGo: Airport Departures</a><br>\n", argv[1]);
  printf("<br>\n");
  printf("----------------------------------------<br>\n");
  printf("NOTE: You will have to enter the Airport Code manually to the<br>\n");
  printf("websites listed below:<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://www.flightera.net/en/search\">Flightera</a><br>\n");
  printf("<a href=\"https://airportinfo.live/search\">Airport Info Live</a><br>\n");
  printf("<a href=\"https://aviability.com/en/airport\">Aviability: Airport Information and Flight Status</a><br>\n");
  printf("<br>\n");
  printf("----------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

