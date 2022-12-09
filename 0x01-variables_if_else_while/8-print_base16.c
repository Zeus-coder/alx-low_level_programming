#include<stdio.h>

/* entry point to our code */int main(void)/* prog to print base 10 */
{

	int num;
	char a;


	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (a = 'a'; a <= 'f'; a++)
		putchar(a);

	putchar('\n');

	return (0);





}
