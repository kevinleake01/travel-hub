#!/usr/bin/perl
#
# Geocode-encode.pl
#
# This program encodes a location using Lat, Long, and Elevation into 3geonames.org addresses, and prints them out.
# It has been wriien in Perl5, and will require the Geo::Code::XYZ module to be installed. You can find it at:
#
# https://metacpan.org/pod/Geo::Code::XYZ
#
# For more info about 3Geonames, go to https://3geonames.org/ and https://geocode.xyz/
#
#
use strict;
use Geo::Code::XYZ;
my $g = Geo::Code::XYZ->new();

# Please set your lat, long, and elevation here:
my ($x,$y,$z) = (0.0,0.0,0);

my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>0);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>1);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>2);
print $geocode . "\n";
my $geocode = $g->geocode(lat=>$x,lon=>$y,el=>$z,geoname=>3);
print $geocode . "\n";
 
# geoname: 0 => Alphanumeric, 1 => three geonames, 2 => hybrid string (one geoname and a string), 3 => numeric code.
