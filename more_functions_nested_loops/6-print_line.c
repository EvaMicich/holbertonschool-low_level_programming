#include "main.h"
#include <stdio.h>
/**
 *print_line - writes a line of chars of length n
 *@n: is line char length if 0 or less, the function only prints \n
 * _putchar - writes the character c to stdout
 *
 */

void print_line(int n)
{
	int counter = 0;

	while (counter <= n)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
		counter = counter + 1;
	}
	_putchar('\n');
}
