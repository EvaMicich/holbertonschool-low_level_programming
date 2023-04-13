#include "hash_tables.h"
/**
 *unsigned long int key_index -
 *
 *
 *
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;
	unsigned long int index;

	if (key == NULL)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}
	hash_val = hash_djb2(key);
	index = hash_val % size;
	return (index);
}
