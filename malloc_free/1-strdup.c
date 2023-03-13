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
	int i;

	array = malloc(strlen(str) + 1);
	if (array == NULL)
		return (NULL);
	i = 0;
	strcpy(array, str);
	return (array);
}
