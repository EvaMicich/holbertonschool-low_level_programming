#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isdigit - tests whether a character is a digit 0-9
 * @c: character being checked for digit
 * Return: 1 for digit, 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
