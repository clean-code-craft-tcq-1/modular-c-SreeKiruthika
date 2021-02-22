#ifndef _TEST_FUNC_H
#include "test_func.h"
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

	
	/*Function to print manual for code coding
	COLORPAIR manualprint;
	for(int pairnumber = 1; pairnumber <= 25; pairnumber++)
	{
		char *dummy;
		printf("%d - ", pairnumber); 
                manualprint = GetColorFromPairNumber(pairnumber); 
		ColorPairToString (&manualprint , dummy);
		printf ("%s", dummy);
	}*/
    return 0;
}
