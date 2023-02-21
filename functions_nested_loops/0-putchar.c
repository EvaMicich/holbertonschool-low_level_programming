#include <unistd.h>
#include "main.h"
#include <stdio.h>
/**
 *main - writes the word _putchar
 * _putchar - writes the character c to stdout
 *
 * Return: On success 0.
 */

int main(void)
{
	char a[] = "_putchar";
	int index = 0;

	while (index < 8)
	{
	_putchar(a[index]);
	index = index + 1;
	}

	putchar(10);

	return (0);
}
