#ifndef _COLOR_CODE_H
#include "color_code.h"
#endif

/******* Global declaration**************/

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"}; /*Major color names array*/
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"}; /*Minor color names array*/

int numberOfMajorColors =sizeof(MajorColorNames) / sizeof(MajorColorNames[0]); /*to compute number of major color*/
int numberOfMinorColors =sizeof(MinorColorNames) / sizeof(MinorColorNames[0]); /*to compute number of minor color*/

/****************************************************************************************
*Func desc : This function converts the given colour pair into a unified single string 
*Param     : colorpair - the ctructure which contains information about major and minor color pair
*            buffer    - Pointer buffer which holds unified color pair names
*Return    : No return value, it just combines the string and updtes the buffer passed 
*****************************************************************************************/

void ColorPairToString(const COLORPAIR* colorPair, char* buffer) 
{
    sprintf(buffer, "%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/****************************************************************************************
*Func desc : This function fetches the colour details from the given pair numbers 
*Param     : pairnumber - the pair number which is to be converted color names
*Return    : Structure variable which contains major and minor color corresponding to pair numbers passed
*****************************************************************************************/
COLORPAIR GetColorFromPairNumber(int pairNumber) 
{
    COLORPAIR colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor = (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/****************************************************************************************
*Func desc : This function finds the pairnumber corresponding to the colour pair passed
*Param     : Structure variable which contains major and minor color 
*Return    : The pair number which is converted from passed color names
*****************************************************************************************/

int GetPairNumberFromColor(const COLORPAIR* colorPair) 
{
    return (colorPair->majorColor * numberOfMinorColors) + (colorPair->minorColor + 1);
}

