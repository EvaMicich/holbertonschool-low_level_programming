#include <stdio.h>
#include "main.h"

/**
* puts2 - returns string backwards
* @str: pointer to str string array in main
* Return: Void
*/
void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(str[c]);
		c = c + 2;
	}
	putchar('\n');
}
