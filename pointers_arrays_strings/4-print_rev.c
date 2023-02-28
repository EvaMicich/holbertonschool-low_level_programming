#include <stdio.h>
#include "main.h"

/**
* print_rev - returns string backwards
* @s: pointer to s string in main
* Return: Void
*/
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c = c + 1;
	}

	c = c - 1;

	while (c >= 0)
	{
		putchar(s[c]);
		c = c - 1;
	}
	putchar('\n');
}
