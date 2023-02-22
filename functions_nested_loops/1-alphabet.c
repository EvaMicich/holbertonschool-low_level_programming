#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - writes the alphabet
 * _putchar - writes the character c to stdout
 *
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
}
