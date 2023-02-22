#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *main - writes the alphabet
 * _putchar - writes the character c to stdout
 *
 * Return: On success 0.
 */

int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c = c + 1;
	}
	_putchar('\n');
	return (0);
}
