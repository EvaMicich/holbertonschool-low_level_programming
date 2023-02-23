#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int num = '0';
	int alpha = 'a';

	while (num <= '9')
	{
		putchar(num);
		num = num + 1;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
