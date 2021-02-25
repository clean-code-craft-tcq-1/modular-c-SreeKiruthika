#ifndef _TEST_FUNC_H
#include "test_func.h"
#endif 

#ifndef _STDIO_H
#include <stdio.h>
#endif

#ifndef _STDLIB_H
#include <stdlib.h>
#endif

extern const int MAX_COLORPAIR_NAME_CHARS;

int main() 
{
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    printf("The User manual which provides the pair number and its corresponding color details is as follows");	
	/*Function to print manual for code coding*/
	COLORPAIR manualprint;
	for(int pairnum = 1; pairnum <= MAXNUMOFCOLORPAIR; pairnum++)
	{
		char *colorname_buffer;
		colorname_buffer = (char*)malloc( MAX_COLORPAIR_NAME_CHARS * sizeof(char));
		printf("\n%d - ", pairnum); 
                manualprint = GetColorFromPairNumber(pairnum); 
		ColorPairToString (& manualprint , colorname_buffer);
		printf ("%s", colorname_buffer); /*To print the color name */
	}
    return 0;
}
