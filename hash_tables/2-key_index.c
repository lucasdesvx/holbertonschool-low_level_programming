#include "hash_tables.h"
#include <stddef.h>

/**
 * key_index - gives the index of a key
 * @key: variable
 * @size: variable
 *
 * Return: to key_index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;


	if (key == NULL || size == 0)
		return (0);

	hash = hash_djb2(key);
	return (hash % size);
}
