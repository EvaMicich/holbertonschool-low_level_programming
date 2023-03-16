#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory to be allocated
 *
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		printf("98");
	}
	return (mem);
}
