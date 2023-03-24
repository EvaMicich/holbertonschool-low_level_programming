#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);

	if (separator == NULL)
	{
		separator = "";
	}
	i = 0;
	while (i < n)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
		{
			str = "(nil)";
		}
		if (i != 0)
		{
			printf("%s", separator);
		}
		printf("%s", str);
		i = i + 1;
	}
	printf("\n");
	va_end(ap);
}
