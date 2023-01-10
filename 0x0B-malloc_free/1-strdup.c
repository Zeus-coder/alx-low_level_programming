#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
*
* _strdup - takes a string alocates a mem to the string and the returns the string
* @str: func arg
*
* Return: returns str
*
*/


char *_strdup(char *str)
{

	char *mem_str;
	int len;

	int i;

        if (str == NULL)
        {
                return (NULL);
        }


        len = strlen(str);


        mem_str = malloc((len) * sizeof(char));

	if (mem_str == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (i < len)
	{
		mem_str[i] = str[i];
		i++;
	}

	return (mem_str);
}
