#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 *and initializes it with a specific char
 *
 * @c: the char to initiate
 * @size: the size of the array
 *
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		array[i] = c;
		i = i + 1;
	}
	return (array);
}
