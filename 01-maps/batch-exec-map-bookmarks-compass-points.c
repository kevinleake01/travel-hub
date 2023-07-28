/*
####################################
#
# --- BATCH-EXEC-MAP-BOOKMARKS-COMPASS-POINTS.C ---
#
# To run this program:
#
# gcc batch-exec-map-bookmarks-compass-points.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("gcc map-bookmarks.c -o a.out-1\n");
  system("mkdir map-bookmarks-compass-points\n");
  system("./a.out-1 0.000001,0.000001 > map-bookmarks-compass-points/000.html\n");
  system("./a.out-1 89.999999,0.000001 > map-bookmarks-compass-points/north.html\n");
  system("./a.out-1 -89.999999,0.000001 > map-bookmarks-compass-points/south.html\n");
  system("./a.out-1 0.000001,90.000001 > map-bookmarks-compass-points/east.html\n");
  system("./a.out-1 0.000001,-89.999999 > map-bookmarks-compass-points/west.html\n");
  system("./a.out-1 0.000001,-179.999999 > map-bookmarks-compass-points/180.html\n");
  system("rm a.out-1\n");
}

