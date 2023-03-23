#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - searches for an int in an array
 * @array: array to hold each element
 * @size: size of array
 * @cmp: function used to compare
 *
 * Return: -1 for -size, -1 for no match, index for first match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 0)
			i = i + 1;
		}
		return (i);
	}
	return (-1);
}
