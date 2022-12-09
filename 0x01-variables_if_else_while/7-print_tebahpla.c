#include<stdio.h>

/* entry to our code */int main(void)/* code prints alphabet */
{
	char a;
	char z;

	a = 'a';
	z = 'z';


	while (z >= a)
		putchar(z--);

	putchar('\n');

	return (0);

}
