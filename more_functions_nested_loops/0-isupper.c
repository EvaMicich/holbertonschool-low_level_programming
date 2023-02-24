#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isupper - tests whether a character is a upper case letter
 * @c: character being checked for uppercase
 * Return: 1 for upper case letter, 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
