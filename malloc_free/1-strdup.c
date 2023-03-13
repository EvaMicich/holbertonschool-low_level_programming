#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter.
 *
 * @str: the string being copied and pointed
 *
 * Return: pointer to array in memory
 */
char *_strdup(char *str)
{
	char *array;
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i] != '\0')
	{
		size = size + 1;
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = str[i];
		i = i + 1;
	}
	return (array);
}
