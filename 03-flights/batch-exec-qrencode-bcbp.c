/*
####################################
#
# --- BATCH-EXEC-QRENCODE-BCBP.C ---
#
# This is a batch-exec file to convert Barcode Boarding Pass raw data into QR Codes
# using Qrencode.
#
# The text is raw BCBP data, and for decoding this data please see:
#   https://www.iata.org/contentassets/1dccc9ed041b4f3bbdcf8ee8682e75c4/2021_03_02-bcbp-implementation-guide-version-7-.pdf
#   https://github.com/shooshx/BoardingBarcode
#   https://shooshx.github.io/BoardingBarcode/
#   https://www.npmjs.com/package/bcbp
#   https://github.com/georgesmith46/bcbp
#   https://gist.github.com/sebastiengoddard/9c727dd7bb1ef30651437e3d638f83bd
#   https://www.codereadr.com/blog/scanning-iata-bar-coded-boarding-pass-bcbp/
#   https://en.wikipedia.org/wiki/Boarding_pass#Bar-codes
#
# Please edit the line of text to suit your needs. The QR Codes will be
# saved as PNG files.
#
# To run the program:
#
#   gcc batch-exec-qrencode-bcbp.c; ./a.out
#
####################################
*/

#include <stdlib.h>

int main(int argc, char *argv[])
{
  system("qrencode -8 -o qr_0001.png \"M1DOE/JOHN            EXYZ123 ZRHSFOBA 1234 231F035A0001 100\"");
  system("qrencode -8 -o qr_0002.png \"M1DESMARAIS/LUC       EABC123 YULFRAAC 0834 226F001A0025 101\"");
  system("qrencode -8 -o qr_0003.png \"M1SMITH/JOHN          ECV7UGB MLADXBEK 0110 321J010K0072 337>1082WO6321B291762184866292 EK 447730916\"");
  system("qrencode -8 -o qr_0004.png \"M1TESSAR/MATTHEW D    EQR2L8Q DENLAXWN 1420 180T017A0017 125>30B0WW0179BWN 0E             0T0101L^460MEQCIC4E6a7 GJNwAfTHnyxgY3VQdsPORVOuPZifjf51WrzqAiA3Zp59 Vw5M1YOUc4snjSh86yeyVK0LxthZdoZBBT/2A==\"");
  return (0);
}

