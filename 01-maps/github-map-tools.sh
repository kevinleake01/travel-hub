#!/bin/sh

# Geohash
git clone git://github.com/vinsci/geohash.git 0001-geohash
git clone git://github.com/wdm0006/pygeohash.git 0001-pygeohash
git clone git://github.com/simonjsaunders/Geohash.git 0001-geohash-cpp

# 3geonames and geocode.xyz
git clone git://github.com/eruci/geocode.git 0002-geocode
wget https://cpan.metacpan.org/authors/id/E/ER/ERUCI/Geo-Code-XYZ-1.6.tar.gz -O 0002-geo-code-xyz-1.6.tar.gz

# Mapcode
git clone git://github.com/mapcode-foundation/mapcode-cpp.git 0003-mapcode-cpp
git clone git://github.com/mapcode-foundation/mapcode-rest-service.git 0003-mapcode-rest-service

# Open Location Codes / Plus Codes
git clone git://github.com/google/open-location-code.git 0004-pluscode
git clone git://github.com/cvzi/open-location-code-demo.git 0004-olc-demo

# MGRS
git clone git://github.com/sotex/geographiclib.git 0005-mgrs-geographiclib
git clone git://github.com/hobu/mgrs.git 0005-mgrs-hobu
git clone git://github.com/hrbrmstr/mgrs.git 0005-mgrs-hrbrmstr

# QGIS
git clone git://github.com/NationalSecurityAgency/qgis-latlontools-plugin.git 0006-qgis-latlongtools

