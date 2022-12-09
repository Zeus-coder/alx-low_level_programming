#include<stdio.h>

/* entry to our code */int main(void)/* code prints alphabet */
{
	char a;
	char z;

	a = 'a';
	z = 'z';

	putchar(' ');

	while (a <= z)
		putchar(a++);


	return (0);

}
