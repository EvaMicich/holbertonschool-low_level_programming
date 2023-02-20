#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}
	return (0);
}
