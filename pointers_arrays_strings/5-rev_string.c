#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	int length = 0, i;
	char *p = s;

	while (*p != '\0')
	{
		length = length + 1;
		p = p + 1;
	}
	i = length - 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i = i - 1;
	}
}
