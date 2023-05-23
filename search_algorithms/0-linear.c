#include "search_algos.h"
/**
 * linear_search - finds first value in array of integers with liear search
 * @array: arrray to search
 * @size: size of array
 * @value: value to find in the array
 * Return: success, first index of value. failure -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i = i + 1;
	}
	return (-1);
}
