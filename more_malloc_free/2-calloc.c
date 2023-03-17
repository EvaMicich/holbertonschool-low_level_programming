#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - returns a pointer to enough space for an array of nmem objects of
 *the specified size
 *
 * @nmemb: number of objects in array
 * @size: size of object
 *
 * Return: pointer to string concat in memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *char_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	char_ptr = ptr;
	i = 0;
	while (i < nmemb * size)
	{
		char_ptr[i] = '\0';
		i = i + 1;
	}

	return (ptr);
}
