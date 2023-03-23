#include <stdio.h>
#include "dog.h"
/**
 * free_dog - free memory
 *
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
	free(dog->name);
	free(dog->owner);
	free(dog);
}
