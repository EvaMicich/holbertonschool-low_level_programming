#include "main.h"
#include <stdio.h>
/**
 *print_diagonal - writes a diagonal line of chars of length n
 *@n: is line char length if 0 or less, the function only prints \n
 * _putchar - writes the character c to stdout
 *
 */

void print_diagonal(int n)
{
	int row = 0, col = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < n)
		{
			while (col < row)
			{
				_putchar(' ');
				col = col + 1;
			}
			_putchar('\\');
			_putchar('\n');
			row = row + 1;
			col = 0;
		}
	}
}
