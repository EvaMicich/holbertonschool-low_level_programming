#include <stdio.h>
/**
 *main-prints sizes of different types
 *Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int l;
	long long int  d;
	float f;

	printf("Size of a char: %lu.", (unsigned long)sizeof(c), "byte(s) %lu.\n");
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float: %lu.\n", (unsigned long)sizeof(f));

	return (0);
}
