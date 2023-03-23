#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - exectuest function on each array element
 * @array: array to hold each element
 * @size: size of array
 * @action: function to use
 *
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}
