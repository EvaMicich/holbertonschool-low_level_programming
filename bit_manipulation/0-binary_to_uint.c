#include "main.h"
#include <stdio.h>

/**
 * is_binary - checks if char is 0 or 1
 *
 * @c: the character
 * Return: 1 for  binary char, 0 for other.
 */

int is_binary(char c)
{
	if (c != '0' && c != '1')
	{
		return (0);
	}
	return (1);
}

/**
 * binary_to_uint - changes binary chars to a number
 *
 * @b: string containing chars of a binary number
 * Return: the number as an unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int index;

	num = 0;
	index = 0;
	if (b == NULL)
	{
		return (0);
	}
	while (b[index] != '\0')
	{
		if (is_binary(b[index]) == 0)
		{
			return (0);
		}
		num = num << 1;
		if (b[index] == '1')
		{
			num = num | 1;

		}
		index = index + 1;
	}
	return (num);
}
