#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - adds dog to list
 * @d: the struct for dog data
 * @name: name of dog
 * @age: age of dog as float
 * @owner: owner of dog
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
