#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print 0-9 using only printchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x = x + 1;
	}

	putchar(10);

	return (0);

}
