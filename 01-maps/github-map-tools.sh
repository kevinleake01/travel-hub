#!/bin/sh

# Geohash
git clone https://github.com/vinsci/geohash 0001-geohash
git clone https://github.com/wdm0006/pygeohash 0001-pygeohash
git clone https://github.com/simonjsaunders/Geohash 0001-geohash-cpp

# 3geonames and geocode.xyz
git clone https://github.com/eruci/geocode 0002-geocode
wget https://cpan.metacpan.org/authors/id/E/ER/ERUCI/Geo-Code-XYZ-1.6.tar.gz -O 0002-geo-code-xyz-1.6.tar.gz

# Mapcode
git clone https://github.com/mapcode-foundation/mapcode-cpp 0003-mapcode-cpp
git clone https://github.com/mapcode-foundation/mapcode-rest-service 0003-mapcode-rest-service

# Open Location Codes / Plus Codes
git clone https://github.com/google/open-location-code 0004-pluscode
git clone https://github.com/cvzi/open-location-code-demo 0004-olc-demo

# MGRS
git clone https://github.com/sotex/geographiclib 0005-mgrs-geographiclib
git clone https://github.com/hobu/mgrs 0005-mgrs-hobu
git clone https://github.com/hrbrmstr/mgrs 0005-mgrs-hrbrmstr

# QGIS
git clone https://github.com/NationalSecurityAgency/qgis-latlontools-plugin 0006-qgis-latlongtools

