/************************************************************************************************************************/
/* This file contains the inclusions and definitions needed for encoding and decoding of wiring cable color used in telecommunication*/
/************************************************************************************************************************/

/********** Library files INCLUDE SECTION ********************/
#ifndef _STDIO_H
#include <stdio.h>
#endif
/************************************************************/



/***************DEFINES section *****************************/

enum MAJORCOLOR {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MINORCOLOR {BLUE, ORANGE, GREEN, BROWN, SLATE};

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MAJORCOLOR majorColor;
    enum MINORCOLOR minorColor;
} COLORPAIR;

/**************************************************************/


/**************Function prototype section**********************/
void ColorPairToString(const COLORPAIR* colorPair, char* buffer);

COLORPAIR GetColorFromPairNumber(int pairNumber);

int GetPairNumberFromColor(const COLORPAIR* colorPair);

/***************************************************************/