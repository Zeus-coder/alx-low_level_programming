#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*print_rev - my func to print str to stdout in reverse
*@s: para of func
*
* printed string to output in reverse
*/

void print_rev(char *s)
{



	int i, l, temp;

	l = strlen(s);

	for (i = (l-1); i >= 0; i--)
	{

		temp = s[i];
		putchar(temp);
	}
	putchar('\n');
}
