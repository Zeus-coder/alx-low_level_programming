#include<stdio.h>

/* entry point to our code */int main(void)/* prog to print base 10 */
{

	int a;


	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');
	putchar('\n');

	return (0);





}
