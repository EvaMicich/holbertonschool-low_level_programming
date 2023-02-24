#include "main.h"
#include <stdio.h>
/**
 *print_numbers - writes the alphabet
 * _putchar - writes the character c to stdout
 *
 */

void print_alphabet(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
