#include "search_algos.h"
#include <math.h>
/**
* print_array - prints n elements of array of ints
* @a: pointer to array of ints
* @n: number of elements to print
* Return: Void
*/
void print_array(int *a, int n)
{
	int c = 0;
	int stop_comma = (n - 1);

	while (c < n)
	{
		printf("%d", a[c]);
		if (c < stop_comma)
		{
			printf(", ");
		}
		c = c + 1;
	}
	putchar('\n');
}

/**
 * binary_search - finds array index number for value using binary search
 * @array: array to search
 * @size: size of array
 * @value: value to find in the array
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int L;
	int R;
	int M;
	int int_size;

	if (array == NULL)
	{
		return (-1);
	}
	L = 0;
	int_size = (int) size;
	R = int_size - 1;

	while (L <= R)
	{
		printf("Searching in array: ");
		print_array(&array[L], (R - L + 1));
		M = ((L + R) / 2);
		if (array[M] < value)
		{
			L = M + 1;
		}
		else if (array[M] > value)
		{
			R = M - 1;
		}
		else
		{
			return (M);
		}
	}
	return (-1);
}
