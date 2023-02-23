#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - tests whether a character is a lower case letter
 * @c: character being checked for lowercase
 * Return: 1 for lower case letter, 0 for anything else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
