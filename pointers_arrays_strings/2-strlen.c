#include <stdio.h>
#include "main.h"

/**
* _strlen - returns length of sting s
* @s: pointer to s string in main
* Return: String lentgh n.
*/
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n = n + 1;
		s = s + 1;
	}
	return (n);
}
