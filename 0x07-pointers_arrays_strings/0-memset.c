#include<string.h>
#include "main.h"

/**
*
*_memset - function that replace the value of b up to the nth value of the pointer
*@s: pointer s
*@b: char b to replace the values in *s
*@n: nth value to which we replace the value stored in *s
*
*Return: pointer to the pointe of s
*
*/


char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(s + i) = b;

	}

	return (s + i);

}
