#include "main.h"
/**
*
*_puts_recursion - func that prints string to screen
*@s: func arg
*
*Return: the string printed.
*
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');

	}

	else
	{

		_putchar(*s);
		_puts_recursion(s + 1);

	}


}
