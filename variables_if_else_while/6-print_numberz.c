#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print 0-9 using only printchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char x = '0';

	while (x <= '9')
	{
		putchar(x);
		x = x + 1;
	}

	putchar('\n');

	return (0);

}
