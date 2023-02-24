#include "main.h"
#include <stdio.h>
/**
 *print_square - writes a square of # chars length 'size'
 *@size: size of sqare sides. if 0 or less, the function only prints \n
 * _putchar - writes the character c to stdout
 *
 */

void print_square(int size)
{
	int row = 0, col = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row < size)
		{
			while (col < size)
			{
				_putchar('#');
				col = col + 1;
			}
			_putchar('\n');
			row = row + 1;
			col = 0;
		}
	}
}
