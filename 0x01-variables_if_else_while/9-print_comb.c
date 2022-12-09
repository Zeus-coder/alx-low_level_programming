#include<stdio.h>

/* prog to print 0-9 */int main(void)/* entry prog */

{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');

	}

	putchar('\n');

	return (0);



}
