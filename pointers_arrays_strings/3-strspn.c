#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index = 0;

	while (*s != '\0')
	{
		while (accept[index])
		{
			if (*s == accept[index])
			{
				bytes = bytes + 1;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
			index = index + 1;
		}

		s = S + 1;
	}

	return (bytes);
}
