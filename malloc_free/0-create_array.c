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
char *create_array(unsigned int size,__attribute__((unused)) char c)
{
	char *array;

	array = malloc(sizeof(char) * size);
	return (array);
}
