#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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

/**
 * string_nconcat - concatenates two strings, only part of second string
 *
 * @s1: string 1
 * @s2: string 2
 * @n: length of string 2 to concat
 * Return: pointer to string concat in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len_s1;
	unsigned int len_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	if (n > len_s2)
	{
		n = len_s2;
	}

	str = malloc(sizeof(*str) * (len_s1 + len_s2 + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
