#ifndef _TEST_FUNC_H
#include "test_func.h"
#endif 

#ifndef _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

	
	/*Function to print manual for code coding*/
	COLORPAIR manualprint;
	for(int pairnum = 1; pairnum <= 25; pairnum++)
	{
		char *dummy_buffer;
		dummy_buffer = (char*)malloc( 16 * sizeof(char));
		printf("\n%d - ", pairnum); 
                manualprint = GetColorFromPairNumber(pairnum); 
		ColorPairToString (& manualprint , dummy_buffer);
		printf ("%s", dummy_buffer); /*To print the color name */
	}
    return 0;
}
