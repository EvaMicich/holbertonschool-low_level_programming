#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: The chessboard to be printed
 */
void print_chessboard(char (*a)[8])
{
	int y = 0, x;

	while (y < 8)
	{
		x = 0;
		while (x < 8)
		{
			_putchar(a[y][x]);
			x = x + 1;
		}
		_putchar('\n');
		y = y + 1;
	}
}
