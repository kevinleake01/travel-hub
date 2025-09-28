/*
####################################
#
# --- FLIGHT-BOOKMARKS-03.C ---
#
# This is a tool to check airline flight numbers.
# 
# Example Usage:
# 
# gcc flight-bookmarks-03.c; ./a.out BA 1234 > flight-bookmark-ba-1234.html
# gcc flight-bookmarks-03.c; ./a.out BAW 1234 > flight-bookmark-baw-1234.html
# gcc flight-bookmarks-03.c; ./a.out AA 5678 > flight-bookmark-aa-5678.html
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
  printf("<title>Flight Bookmarks 03</title>\n");
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
  printf("<h1>Flight Number:</h1>\n");
  printf("<h2>%s %s</h2>\n", argv[1], argv[2]);
  printf("<p>\n");
  printf("<a href=\"https://www.flightradar24.com/%s%s/\">Flightradar24</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightstats.com/v2/flight-tracker/%s/%s\">Flightstats</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.avionio.com/en/flight/%s-%s\">Avionio</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.airportia.com/search/?q=%s%s\">Airportia</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flight.info/%s%s\">Flightinfo</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://info.flightmapper.net/flight/%s_%s\">FlightMapper.net</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.kayak.com/tracker/%s-%s/\">KAYAK Flight Tracker</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightview.com/flight-tracker/%s/%s\">OAG Flightview</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://flight-status.com/%s-%s\">Flight Status Tracker</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.google.com/search?q=Flight+%s+%s\">Google Flights</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://duckduckgo.com/?q=Flight+%s+%s\">DuckDuckGo</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.google.com/search?q=%s%s+Flight+Tracker\">Google: Flight Tracker</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://duckduckgo.com/?q=%s%s+Flight+Tracker\">DuckDuckGo: Flight Tracker</a><br>\n", argv[1], argv[2]);
  printf("----------------------------------------<br>\n");
  printf("NOTE: You will have to enter the Flight Number manually to the<br>\n");
  printf("website listed below:<br>\n");
  printf("<br>\n");
  printf("<a href=\"https://aviability.com/en/flight\">Aviability: Flight Status and Schedule</a><br>\n");
  printf("<br>\n");
  printf("----------------------------------------<br>\n");
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

