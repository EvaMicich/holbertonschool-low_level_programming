#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string and new line
* @str: pointer to str string in main
* Return: void
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str = str + 1;
	}
	putchar('\n');
}
