#include<stdio.h>

int i;
char c;
long int li;
long long ll;
float f;

/* script to print size of */int main(void)/* entry point to our code */
{
        printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(i));
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n",(unsigned long)sizeof(f));

	return (0);

}
