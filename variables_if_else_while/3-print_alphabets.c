#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
*main-Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'a', y = 'A';

	while (x <= 'z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}

	y = 'A';
	while (y <= 'Z')
	{
		y = toupper(y);
		putchar(y);
		y++;
	}

	printf("\n");

	return (0);
}
