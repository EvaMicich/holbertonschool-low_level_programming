#include "main.h"
#include <stdio.h>
/**
 *more_numbers - writes the numbers 0 to 14, 10 times
 * _putchar - writes the character c to stdout. 'counter' tracks no. of repeat
 *
 */

void more_numbers(void)
{
	int counter = 0;
	char c;

	while (counter < 10)
	{
		c = 0;
		while (c <= 14)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
			c = c + 1;
		}
		_putchar('\n');
		counter = counter + 1;
	}
}
