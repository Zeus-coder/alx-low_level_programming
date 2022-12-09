#include<stdio.h>

/* entry to our code */int main(void)/* code prints alphabet */
{
	int a;
	int z;
	int A;
	int Z;

	a = 'a';
	z = 'z';
	A = 'A';
	Z = 'Z';

	while (a <= z )
		putchar(a++);
	while (A <= Z)
		putchar(A++);

	putchar(' ');

	return (0);

}
