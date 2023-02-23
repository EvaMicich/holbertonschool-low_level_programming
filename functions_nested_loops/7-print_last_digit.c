#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: number to return the last digit from
 * Return: Always 0.
 */
int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar((r % 10) + '0');
	return (r % 10);
}
