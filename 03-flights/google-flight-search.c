/*
####################################
#
# --- GOOGLE-FLIGHT-SEARCH.C ---
#
# Example usage:
#
# Flight from London to New York, departing on 10th September 2021, returning on 24th September 2021.
#
# gcc google-flight-search.c; ./a.out LHR.JFK.2021-09-10 JFK.LHR.2021-09-24 > flight-search-0001.html
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
  printf("<title>Google Flight Search</title>\n");
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
  printf("a:link {\n");
  printf("  color: #FF0000;\n");
  printf("}\n");
  printf("a:visited {\n");
  printf("  color: #00FF00;\n");
  printf("}\n");
  printf("</style>\n");
  printf("</head>\n");
  printf("<body>\n");
  printf("<h1>Google Flight Search</h1>\n");
  printf("<p>\n");
  printf("Depart: %s<br>\n", argv[1]);
  printf("Return: %s<br><br>\n\n", argv[2]);
  printf("<a href=\"https://www.google.com/flights\?hl=en#flt=%s*%s\">----- SEARCH HERE FOR FLIGHTS -----</a><br>\n", argv[1], argv[2]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
  printf("\n");
}

