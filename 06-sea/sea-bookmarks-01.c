/*
####################################
#
# --- SEA-BOOKMARKS-01.C ---
#
# This is a tool to display various information for a seaport, using UN/LOCODE.
# 
# Example Usage:
# 
# gcc sea-bookmarks-01.c; ./a.out GBDVR > sea-bookmark-dover.html
# gcc sea-bookmarks-01.c; ./a.out FRCQF > sea-bookmark-calais.html
# gcc sea-bookmarks-01.c; ./a.out USMIA > sea-bookmark-miami.html
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
  printf("<title>Sea Bookmarks 01</title>\n");
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
  printf("<h1>Seaport Information</h1>\n");
  printf("<h2>For port: %s</h2>\n", argv[1]);
  printf("<p>\n");
  printf("<a href=\"https://magicport.ai/ports/%s\">MagicPort</a><br>\n", argv[1]);
  printf("<a href=\"https://www.fluentcargo.com/ports/locode/%s\">Fluent Cargo</a><br>\n", argv[1]);
  printf("<a href=\"https://www.vesselfinder.com/ports/%s\">VesselFinder</a><br>\n", argv[1]);
  printf("<a href=\"https://www.shipxplorer.com/data/ports/%s\">ShipXplorer</a><br>\n", argv[1]);
  printf("<a href=\"https://www.google.com/search?q=UN+LOCODE+%s\">Google: UN/LOCODE</a><br>\n", argv[1]);
  printf("<a href=\"https://duckduckgo.com/?q=UN+LOCODE+%s\">DuckDuckGo: UN/LOCODE</a><br>\n", argv[1]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

