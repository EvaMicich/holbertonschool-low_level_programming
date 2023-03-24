#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(__attribute__((unused))const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%d", va_arg(ap, int));
		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}
