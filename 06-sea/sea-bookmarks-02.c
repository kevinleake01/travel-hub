/*
####################################
#
# --- SEA-BOOKMARKS-02.C ---
#
# This is a tool to display various information for a boat, ship or ferry, using IMO Numbers.
# 
# Example Usage:
# 
# gcc sea-bookmarks-02.c; ./a.out 9524231 > sea-bookmark-spirit_of_britain.html
# gcc sea-bookmarks-02.c; ./a.out 9533816 > sea-bookmark-spirit_of_france.html
# gcc sea-bookmarks-02.c; ./a.out 9829930 > sea-bookmark-icon_of_the_seas.html
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
  printf("<title>Sea Bookmarks 02</title>\n");
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
  printf("<h1>Boat, Ship or Ferry Information</h1>\n");
  printf("<h2>For IMO Number: %s</h2>\n", argv[1]);
  printf("<p>\n");
  printf("<a href=\"https://www.vesselfinder.com/vessels/details/%s\">VesselFinder</a><br>\n", argv[1]);
  printf("<a href=\"https://www.cruisemapper.com/?imo=%s\">CruiseMapper</a><br>\n", argv[1]);
  printf("<a href=\"https://www.ferry-site.dk/ferry.php?id=%s&lang=en\">The Ferry Site</a><br>\n", argv[1]);
  printf("<a href=\"https://www.balticshipping.com/vessel/imo/%s\">Balticshipping.com</a><br>\n", argv[1]);
  printf("<a href=\"https://www.google.com/search?q=IMO+%s\">Google: IMO Search</a><br>\n", argv[1]);
  printf("<a href=\"https://duckduckgo.com/?q=IMO+%s\">DuckDuckGo: IMO Search</a><br>\n", argv[1]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

