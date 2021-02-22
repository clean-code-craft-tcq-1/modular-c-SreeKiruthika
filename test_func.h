/************************************************************************************************************************/
/* This file contains the inclusions and definitions needed for encoding and decoding of wiring cable color used in telecommunication*/
/************************************************************************************************************************/

/******************** INCLUDE SECTION ***********************/

#ifndef _COLOR_CODE_H
#include "color_code.h"
#endif

#ifndef _ASSERT_H
#include <assert.h>
#endif

/************************************************************/



/***************DEFINES section *****************************/

/**************************************************************/


/**************Function prototype section**********************/

void testNumberToPair(int pairNumber, enum MAJORCOLOR expectedMajor, enum MINORCOLOR expectedMinor);

void testPairToNumber(enum MAJORCOLOR major, enum MINORCOLOR minor, int expectedPairNumber);

/***************************************************************/