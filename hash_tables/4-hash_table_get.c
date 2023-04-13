#include "hash_tables.h"
/**
 * hash_table_get - retieves value for key
 * @ht: hash table
 * @key: key to look for
 *
 * Return: value for the key, fail returns NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL)
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			return (ht->array[index]->value);
		}
	}
	return (NULL);
}
