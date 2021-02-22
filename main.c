#include <assert.h>

#ifndef _TEST_FUNC_H
#include "test_func.h"
#endif 

#ifndef _COLOR_CODE_H
#include "color_code.h"
#endif

#ifndef _STDIO_H
#include <stdio.h>
#endif

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

	/*Function to print manual for code coding*/
	for(int pairnumber = 1; pairnumber <= 25; pairnumber++)
	{
		char *dummy ;
		printf("%d - ", pairnumber); 
		ColorPairToString (GetColorFromPairNumber(pairnumber), dummy);
		printf ("%s", pairnumber);
	}
    return 0;
}
