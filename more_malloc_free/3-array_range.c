#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of ints from min to max
 *
 * @min: smallest no in the array
 * @max: highest number in the array
 *
 * Return: pointer to string int array in memory
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * (max - min +1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = min;
	j = 0;
	while (i <= max)
	{
		ptr[j] = i;
		i = i + 1;
		j = j + 1;
	}
	return ptr;
}
