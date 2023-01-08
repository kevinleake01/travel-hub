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
#   https://github.com/jandauz/boarding-pass
#   https://gist.github.com/sebastiengoddard/9c727dd7bb1ef30651437e3d638f83bd
#   https://se.au/notes/whats-contained-in-a-boarding-pass-barcode/
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
  system("qrencode -8 -o qr_0002.png \"M1DESMARAIS/LUC       EABC123 YULFRAAC 0834 326J001A0025 167>5321WW1325BAC 0014123456002001412346700100141234789012A0141234567890 1AC AC 1234567890123    4PCYLX58Z\"");
  system("qrencode -8 -o qr_0003.png \"M1DESMARAIS/LUC       EABC123 YULFRAAC 0834 326J001A0025 167>5321WW1325BAC 0014123456002001412346700100141234789012A0141234567890 1AC AC 1234567890123    4PCYLX58Z^164GIWVC5EH7JNT684FVNJ91W2QA4DVN5J8K4F0L0GEQ3DF5TGBN8709HKT5D3DW3GBHFCVHMY7J5T6HFR41W2QA4DVN5J8K4F0L0GE\"");
  system("qrencode -8 -o qr_0004.png \"M2DESMARAIS/LUC       EABC123 YULFRAAC 0834 326J003A0027 167>5321WW1325BAC 0014123456002001412346700100141234789012A0141234567890 1AC AC 1234567890123    3PCYLX58ZDEF456 FRAGVALH 3664 327C012C0002 12E2A0140987654321 1AC AC 1234567890123    3PCNWQ\"");
  system("qrencode -8 -o qr_0005.png \"M2DESMARAIS/LUC       EABC123 YULFRAAC 0834 326J003A0027 167>5321WW1325BAC 0014123456002001412346700100141234789012A0141234567890 1AC AC 1234567890123    3PCYLX58ZDEF456 FRAGVALH 3664 327C012C0002 12E2A0140987654321 1AC AC 1234567890123    3PCNWQ^164GIWVC5EH7JNT684FVNJ91W2QA4DVN5J8K4F0L0GEQ3DF5TGBN8709HKT5D3DW3GBHFCVHMY7J5T6HFR41W2QA4DVN5J8K4F0L0GE\"");
  system("qrencode -8 -o qr_0006.png \"M1PADRONGOMEZ/CARLO   EK51KC  MADSPCIB 3842 117N016B0109 14B>5181WM8117BIB              2A0752376813598 2   IB IB00000000           8  \"");
  system("qrencode -8 -o qr_0007.png \"M1ASKREN/TEST         EA272SL ORDNRTUA 0881 007F002K0303 15C>3180 K6007BUA              2901624760758980 UA UA EY975897            *30600    09  UAG  \"");
  system("qrencode -8 -o qr_0008.png \"M1GRANDMAIRE/MELANIE  EABC123 GVACDGAF 0123 339C002F0025 130>5002A0571234567890  AF AF 1234567890123456    Y^164\"");
  system("qrencode -8 -o qr_0009.png \"M2GRANDMAIRE/MELANIE  EABC123 GVACDGAF 0123 339C002F0025 130>5002A0571234567890  AF AF 1234567890123456 20KYDEF456 CDGDTWNW 0049 339F001A0002 12C2A012098765432101                       2PC ^164\"");
  system("qrencode -8 -o qr_0010.png \"M1ALNASSER/LUBNAABDU  EM3X23F DXBISTEK 0123 033Y037C0262 366>5322MO6033BEK 0176938082002                          2A1761610270374                         30K ^1\"");
  system("qrencode -8 -o qr_0011.png \"M2STONE/JACOB         EDCEZUB PERDXBEK 0421 163Y045C0221 136>20B1WW2163BEK 251762146276875 1                      DCEZUB DXBDAREK 0725 164Y041F0216 127251762146276875 1                      \"");
  system("qrencode -8 -o qr_0012.png \"M1SMITH/JOHN          ECV7UGB MLADXBEK 0110 321J010K0072 337>1082WO6321B291762184866292 EK 447730916\"");
  return (0);
}

