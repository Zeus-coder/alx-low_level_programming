
#include "main.h"

/**
*_pow_recursion - function that returns x raised to the power of y.
*@x: func arg1
*@y: func arg2
*
*Return: x rasied to the power of y
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}

	else
	{

		return (x * _pow_recursion(x, y - 1));
	}


}
