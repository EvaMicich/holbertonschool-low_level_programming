#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * print_time - prints time in format hh:mm
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
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min = min + 1;
		}
		hr = hr + 1;
	}
}
