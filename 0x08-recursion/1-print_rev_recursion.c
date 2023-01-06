#include "main.h"
/**
*
*_print_rev_recursion - func to print rev of a str
*@s: func arg
*
*Return: rev of str
*/

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}

	else
	{

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}




}
