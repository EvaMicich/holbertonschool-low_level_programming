#include "main.h"

/**
 * _strpbrk - Searches a string for a set of bytes
 * @s: The string to be searched
 * @accept: The bytes to be searched for
 *
 * Return: If a set is matched - a pointer to the matched byte
 *         If no match - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int index = 0;

	while (*s != '\0')
	{
		for (index = 0; accept[index]; (index = index + 1))
		{
			if (*s == accept[index])
				return (s);
		}

		s = s + 1;
	}

	return ('\0');
}
