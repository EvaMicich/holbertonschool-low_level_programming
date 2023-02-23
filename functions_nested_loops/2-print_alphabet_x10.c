#include "main.h"
/**
 *print_alphabet_x10 - writes the alphabet 10 times
 * _putchar - writes character 'c' to stdout. 'counter' tracks no. of repeats
 *Return void
 */

void print_alphabet_x10(void)
{
	int counter;

	counter = 0;

	while (counter < 10)
	{

		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c = c + 1;
		}
		_putchar('\n');
		counter = counter + 1;
	}
}
