#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of array of ints
* @a: pointer to array of ints
* @n: number of elements to print
* Return: Void
*/
void print_array(int *a, int n)
{
	int c = 0;

	while (c < n)
	{
		printf("%d, ", a[c]);
		c = c + 1;
	}
	printf("\b\b \b\b");
	putchar('\n');
}
