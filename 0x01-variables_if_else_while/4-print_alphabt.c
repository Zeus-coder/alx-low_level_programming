#include<stdio.h>

/* entry to our code */int main(void)/* code prints alphabet */
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a != 'e' && a != 'q')
		putchar(a);

	putchar('\n');

	return (0);

}
