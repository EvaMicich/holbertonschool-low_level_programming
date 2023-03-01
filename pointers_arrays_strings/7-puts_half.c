#include "main.h"

/**
* puts_half - returns second half of string
* @str: pointer to str string array in main
* Return: Void
*/
void puts_half(char *str)
{
	int len = 0, start, c;

	while (str[len] != '\0')
	{
		len = len + 1;
	}
	start = (len + 1) / 2;
	c = start;
	while (c < len)
	{
		_putchar(str[c]);
		c = c + 1;
	}
	_putchar('\n');
}
