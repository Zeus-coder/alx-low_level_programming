#include "main.h"
#include <stdlib.h>

/**
* create_array - function to allocate memory for buffering a char
* @size: func arg1
* @c: func arg2
*
* Return: NULL if size = 0 and ptr
*
*/


char *create_array(unsigned int size, char c)
{

	char *ptr;

	unsigned int i;


	if (size == 0)
	{
		return (NULL);
	}


	ptr = malloc((size) * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		ptr[i] = c;
		i++;

	}


	ptr[i] = '\0';
	return (ptr);
}
