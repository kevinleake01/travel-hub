/*
####################################
#
# --- BATCH-EXEC-MAP-BOOKMARKS2-COMPASS-POINTS.C ---
#
# To run this program:
#
# gcc batch-exec-map-bookmarks2-compass-points.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks2.c -o a.out-1\n");
  system("mkdir map-bookmarks2-compass-points\n");
  system("./a.out-1 0.000001 0.000001 > map-bookmarks2-compass-points/000.html\n");
  system("./a.out-1 89.999999 0.000001 > map-bookmarks2-compass-points/north.html\n");
  system("./a.out-1 -89.999999 0.000001 > map-bookmarks2-compass-points/south.html\n");
  system("./a.out-1 0.000001 90.000001 > map-bookmarks2-compass-points/east.html\n");
  system("./a.out-1 0.000001 -89.999999 > map-bookmarks2-compass-points/west.html\n");
  system("./a.out-1 0.000001 -179.999999 > map-bookmarks2-compass-points/180.html\n");
  system("rm a.out-1\n");
}

