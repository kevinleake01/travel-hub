/*
####################################
#
# --- MAP-BOOKMARKS.C ---
#
# This is a tool to quickly set your co-ordinates
# using decimal Lat-Long Degrees.
# 
# Example Usage:
# 
# gcc map-bookmarks.c; ./a.out "51.5122,-0.0904" > map-bookmarks-london.html
# gcc map-bookmarks.c; ./a.out "48.8563,2.3485" > map-bookmarks-paris.html
# gcc map-bookmarks.c; ./a.out "40.7161,-73.9912" > map-bookmarks-newyork.html
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
  printf("<title>Map Bookmarks</title>\n");
  printf("<style>\n");
  printf("body {\n");
  printf("  background-color: #000000;\n");
  printf("  color: #FFFFFF;\n");
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
  printf("<h1>Map Bookmarks</h1>\n");
  printf("<h2>For location (Lat-Long): %s</h2>\n", argv[1]);
  printf("<p>\n");
  printf("<a href=\"https://www.3geonames.org/%s\">3Geonames</a><br>\n", argv[1]);
  printf("<a href=\"https://api.3geonames.org/%s\">3Geonames API XML</a><br>\n", argv[1]);
  printf("<a href=\"https://api.3geonames.org/%s.json\">3Geonames API JSON</a><br>\n", argv[1]);
  printf("<a href=\"https://geocode.xyz/%s\">Geocode.xyz</a><br>\n", argv[1]);
  printf("<a href=\"https://geocode.xyz/%s?geoit=xml\">Geocode.xyz XML</a><br>\n", argv[1]);
  printf("<a href=\"https://geocode.xyz/%s?geoit=json\">Geocode.xyz JSON</a><br>\n", argv[1]);
  printf("<a href=\"http://geohash.org?q=%s&format=url&redirect=0\">Geohash: URL</a><br>\n", argv[1]);
  printf("<a href=\"http://geohash.org?q=%s&format=osm\">Geohash: OpenStreetmap</a><br>\n", argv[1]);
  printf("<a href=\"http://geohash.org?q=%s&format=gmaps\">Geohash: Google Maps</a><br>\n", argv[1]);
  printf("<a href=\"https://api.mapcode.com/mapcode/xml/codes/%s\">Mapcode REST-API XML</a><br>\n", argv[1]);
  printf("<a href=\"https://api.mapcode.com/mapcode/json/codes/%s\">Mapcode REST-API JSON</a><br>\n", argv[1]);
  printf("<a href=\"https://plus.codes/api?address=%s\">Plus Codes API</a><br>\n", argv[1]);
  printf("<a href=\"https://www.geoplaner.com/?z=10;p=%s;;\">Geoplaner</a><br>\n", argv[1]);
  printf("<a href=\"https://wego.here.com/?x=ep&map=%s,10,normal\">Here We Go</a><br>\n", argv[1]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s&zoom=10&basemap=ESRI_Topographic\">Mappingsupport: ESRI Topographic</a><br>\n", argv[1]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s&zoom=10&basemap=ESRI_Streets\">Mappingsupport: ESRI Streets</a><br>\n", argv[1]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s&zoom=10&basemap=ESRI_Aerial\">Mappingsupport: ESRI Aerial</a><br>\n", argv[1]);
  printf("<a href=\"https://mapper.acme.com/?ll=%s&z=15&t=M&marker0=%s\">ACME Mapper</a><br>\n", argv[1], argv[1]);
  printf("<a href=\"https://www.mapquest.com/latlng/%s?zoom=15&maptype=map\">Mapquest</a><br>\n", argv[1]);
  printf("<a href=\"http://boulter.com/gps/?c=%s\">Boulter Geocaching</a><br>\n", argv[1]);
  printf("<a href=\"https://www.gpsvisualizer.com/draw/?bg=OPENSTREETMAP&z=10&c=%s\">GPS Visualizer: Openstreetmap</a><br>\n", argv[1]);
  printf("<a href=\"https://www.gpsvisualizer.com/draw/?bg=OPENTOPOMAP&z=10&c=%s\">GPS Visualizer: Opentopomap</a><br>\n", argv[1]);
  printf("<a href=\"https://www.gpsvisualizer.com/draw/?bg=KOMOOT_OSM&z=10&c=%s\">GPS Visualizer: OSM Komoot</a><br>\n", argv[1]);
  printf("<a href=\"https://www.gpsvisualizer.com/draw/?bg=ARCGIS_HYBRID&z=10&c=%s\">GPS Visualizer: ArcGIS Hybrid</a><br>\n", argv[1]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

