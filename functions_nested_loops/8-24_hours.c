#include "main.h"

void print_time(int hours, int minutes)
{
	_putchar((hours / 10) + '0');
	_putchar((hours % 10) + '0');
	_putchar(':');
	_putchar((minutes / 10) + '0');
	_putchar((minutes % 10) + '0');
}

/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int hr = 0, min = 0;

	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			print_time(hr, min);
			_putchar('\n');
			min = min + 1;
		}
		hr = hr + 1;
	}
}
