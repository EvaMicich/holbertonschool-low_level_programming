#include "main.h"
#include <stdio.h>
/**
 *print_most_numbers - writes numbers 0-9, except 2 and 4
 * _putchar - writes the character c to stdout
 *
 */

void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if ((c == '2') || (c == '4'))
		{
			c = c + 1;
		}
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
