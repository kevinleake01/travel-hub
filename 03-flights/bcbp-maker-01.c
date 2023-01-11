/*
####################################
#
# --- BCBP-MAKER-01.C ---

This is the Airline Barcode Boarding Pass Maker, and this will create airline boarding pass
data files for demonstration purposes. To get started, simply edit the details below to suit
your own personal preferences. Then to create the BCBP data file, do this:

  gcc bcbp-maker-01.c; ./a.out > bcbp-data-01.txt

You can then create the QR Codes for this data, which will be saved as PNG image files, and
using Qrencode, do this:

  qrencode -8 -o qr-bcbp-data-01.png -r bcbp-data-01.txt

#
####################################
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("M1");
/* Name of Passenger:
         |--------------------| */ 
  printf("SURNAME/NAME        ");
  printf("E");
/* PNR Booking Number: */
  printf("ABC1234");
/* From: */
  printf("LHR");
/* To: */
  printf("JFK");
/* Flight Number: */
  printf("BA 1234 ");
/* Julian Date: */
  printf("001");
/* Class:
  "B"=Business, "F"=First, "Y"=Economy */
  printf("Y");
/* Seat Number: */
  printf("001A");
/* Sequence Number: */
  printf("0001 ");
/* Passenger Status:
  "1"=Checked in, "3"=With Baggage */
  printf("3");
/* Extra data for Version 7 */
  printf("67>7");
/* Field Size of following data in Hex: */
  printf("32");
/* Passenger Description:
  "0"=Adult, "1"=Male, "2"=Female */
  printf("0");
/* Source of Check In:
  "W"=Web, "K"=Airport Kiosk, "M"=Mobile Device */
  printf("W");
/* Source of Boarding Pass Issuance: */
  printf("W");
/* Date of Boarding Pass Issuance:
  Last digit of the year + Julian Date */
  printf("1001");
/* Document Type: */
  printf("B");
/* Airline issuer of Boarding Pass */
  printf("BA ");
/* Baggage Tag Licence Plate Number: 
         |-------------| */
  printf("0000000001001");
/* First Consecutive Baggage Tag Licence Plate Number: 
         |-------------| */
  printf("0000000002001");
/* Second Consecutive Baggage Tag Licence Plate Number: 
         |-------------| */
  printf("0000000003001");
/* Field Size of following data in Hex: */
  printf("2A");
/* Airline Numeric Code: */
  printf("125");
/* Serial Number:
         |----------| */
  printf("0000000001");
/* Selectee:
  "0"=Not Selectee, "1"=Selectee, "2"=Known Passenger */
  printf("0");
/* Documentation Verification:
  "0"=Not Required, "1"=Required, "2"=Performed */
  printf("0");
/* Marketing Carrier Designator Airline: */
  printf("BA ");
/* Frequent Flyer Designator Airline: */
  printf("BA ");
/* Frequent Flyer Number:
         |----------------| */
  printf("0000000000000001");
/* ID/AD Indicator:
  "4"=AD, "B"=ID */
  printf("4");
/* Free Baggage Allowance:
  "25K"=25 Kg, "2PC"=2 Pieces of Luggage */
  printf("25K");
/* Fast Track, "Y"es or "N"o : */
  printf("Y");
/* Individual Airline Use: */
  printf("12345");
/* ----- Security Data -----*/
  printf("^10512345");
  return (0);
}

