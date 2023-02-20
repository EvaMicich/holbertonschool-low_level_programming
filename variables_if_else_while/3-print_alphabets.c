#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-Entry point
*Return: Always 0 (Success)
*/

int main(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		x = tolower(x);
		putchar(x);
		x++;
	}

	x = 'A';
	while (x <= 'Z')
	{
		x = toupper(x);
		putchar(x);
		x++;
	}

	printf("\n");

	return (0);
}
