/*
####################################
#
# --- MAP-BOOKMARKS2.C ---
#
# This is a tool to quickly set your co-ordinates
# using decimal Lat-Long Degrees.
# 
# Example Usage:
# 
# gcc map-bookmarks2.c; ./a.out 51.5122 -0.0904 > map-bookmarks2-london.html
# gcc map-bookmarks2.c; ./a.out 48.8563 2.3485 > map-bookmarks2-paris.html
# gcc map-bookmarks2.c; ./a.out 40.7161 -73.9912 > map-bookmarks2-newyork.html
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
  printf("<title>Map Bookmarks2</title>\n");
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
  printf("<h1>Map Bookmarks2</h1>\n");
  printf("<h2>For location (Lat-Long): %s,%s</h2>\n", argv[1], argv[2]);
  printf("<p>\n");
  printf("EPSG:4326: %s %s<br>\n", argv[1], argv[2]);
  printf("<a href=\"geo:%s,%s;crs=EPSG:4326;u=20\">Geo URI</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.openstreetmap.org/#map=10/%s/%s\">Openstreetmap - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.openstreetmap.org/#map=15/%s/%s\">Openstreetmap - Zoom x15</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://opentopomap.org/#map=10/%s/%s\">OpenTopomap - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://opentopomap.org/#map=15/%s/%s\">OpenTopomap - Zoom x15</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://epsg.io/transform#s_srs=4326&x=%s&y=%s\">Epsg.io Transform</a><br>\n", argv[2], argv[1]);
  printf("<a href=\"https://coordinates-converter.com/en/decimal/%s,%s?karte=OpenStreetMap&zoom=15\">Coordinates Converter</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://geographiclib.sourceforge.io/cgi-bin/GeoConvert?input=%s,%s\">Geographiclib Geoconvert</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://caltopo.com/map.html#ll=%s,%s&z=15&b=om\">Caltopo</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://mappingsupport.com/p2/gissurfer.php?center=%s,%s&zoom=10\">Mappingsupport GIS Server</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"http://geohash.org?q=%s,%s&format=gpx\">Geohash: GPX</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"http://geohash.org?q=%s,%s&format=garmin\">Geohash: Garmin</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"http://geohash.org?q=%s,%s&format=url&redirect=0\">Geohash: URL</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://s3.eu-central-1.amazonaws.com/download.mapcode.com/getcoordst.html?yy=%s&xx=%s\">Mapcode: Google Map</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://s3.eu-central-1.amazonaws.com/download.mapcode.com/getcoords.html?yy=%s&xx=%s\">Mapcode: TomTom Map</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://api.mapcode.com/mapcode/xml/codes/%s,%s\">Mapcode REST-API XML</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://api.mapcode.com/mapcode/json/codes/%s,%s\">Mapcode REST-API JSON</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://plus.codes/%s,%s\">Plus Codes</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://plus.codes/api?address=%s,%s\">Plus Codes API</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wolf-h3-viewer.glitch.me/?lat=%s&lng=%s&zoom=10\">H3 Viewer - Zoom x10</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wolf-h3-viewer.glitch.me/?lat=%s&lng=%s&zoom=15\">H3 Viewer - Zoom x15</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wolf-h3-viewer.glitch.me/?lat=%s&lng=%s&zoom=20\">H3 Viewer - Zoom x20</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wolf-h3-viewer.glitch.me/?lat=%s&lng=%s&zoom=25\">H3 Viewer - Zoom x25</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.3geonames.org/%s,%s\">3Geonames</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://api.3geonames.org/%s,%s\">3Geonames API XML</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://api.3geonames.org/%s,%s.json\">3Geonames API JSON</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://fixphrase.com/#%s,%s\">Fixphrase</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wherewords.id/%s,%s\">Wherewords.id</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.bing.com/maps/?v=2&cp=%s~%s&lvl=15.0\">Bing</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.mapquest.com/latlng/%s,%s?zoom=15&maptype=map\">Mapquest</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://copernix.io/#?where=%s,%s,15\">Copernix</a><br>\n", argv[2], argv[1]);
  printf("<a href=\"https://openstreetbrowser.org/#map=15/%s/%s&basemap=osm-mapnik\">Openstreet Browser</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wikimapia.org/#lang=en&lat=%s&lon=%s&z=15&m=w\">Wikimapia</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wma.wmflabs.org/iframe.html?wma=%s_%s_700_500_en_8_en&globe=Earth\">Wiki Mini Atlas</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://wikimap.toolforge.org/?lat=%s&lon=%s&zoom=15&wp=false\">Wikimap Toolforge</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.gpsvisualizer.com/draw/?bg=OPENSTREETMAP&z=15&c=%s,%s\">GPS Visualizer</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.mapillary.com/app/?lat=%s&lng=%s&z=10\">Mapillary</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://kartaview.org/map/@%s,%s,10z\">KartaView</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.geody.com/geolook.php?world=terra&lat=%s&lon=%s\">Geody</a><br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.heavens-above.com/?lat=%s&lng=%s&loc=-----&alt=20&tz=UCT\">Heavens Above</a> (Astronomy)<br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.flightradar24.com/%s,%s/10\">Flightradar24</a> (Flights)<br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.radarbox.com/@%s,%s,z10\">AirNav Radarbox</a> (Flights)<br>\n", argv[1], argv[2]);
  printf("<a href=\"https://globe.adsbexchange.com/?lat=%s&lon=%s&zoom=10\">ADSB Exchange</a> (Flights)<br>\n", argv[1], argv[2]);
  printf("<a href=\"https://www.marinetraffic.com/en/ais/home/centerx:%s/centery:%s/zoom:10\">Marine Traffic</a> (Ships and Ferries)<br>\n", argv[2], argv[1]);
  printf("</p>\n");
  printf("</body>\n");
  printf("</html>\n");
}

