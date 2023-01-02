#include <string.h>
#include "main.h"
#include <stdio.h>

/**
*
**_memcpy - function that copy the memeory from a src to dest
*@dest: dest arg
*@src: src arg
*@n: nth value to which we cpy src to dest
*
*Return: memroy to dest
*
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i;


	for (i = 0; i < n; i++)
	{

		*(dest + 50) = src[i];
	}


	return (dest + i);

}
