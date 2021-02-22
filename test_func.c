#ifndef _TEST_FUNC_H
#include "test_func.h"
#endif

const int MAX_COLORPAIR_NAME_CHARS = 16;

/****************************************************************************************
*Func desc : Test function which asserts conversion of pair number into corresponding colour pair 
*Param     : pairnumber    - The pair number corresponding to the  expected major and minor color passed
*            expectedMajor - The major color corresponding to the pair number to be converted
*            expectedMinor - The minor color corresponding to the pair number to be converted
*Return    : No return value, it evaluation of test case 
*****************************************************************************************/

void testNumberToPair(int pairNumber, enum MAJORCOLOR expectedMajor, enum MINORCOLOR expectedMinor)
{
    COLORPAIR colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

/****************************************************************************************
*Func desc : Test function which asserts conversion of given colour pair into a pair number 
*Param     : major  - The major color corresponding to pair number passed
*            minor  - The minor color corresponding to pair number passed
*            expectedPairNumber - The pair number corresponding to the major and minor color passed 
*Return    : No return value, it evaluation of test case  
*****************************************************************************************/

void testPairToNumber(enum MAJORCOLOR major, enum MINORCOLOR minor, int expectedPairNumber)
{
    COLORPAIR colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}