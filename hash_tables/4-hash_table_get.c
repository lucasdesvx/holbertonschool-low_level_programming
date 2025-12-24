#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: a pointer
 * @key: a pointer
 *
 * Return: to hash_table_get
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int holberton;
	hash_node_t *noeud;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	holberton = key_index((const unsigned char *)key, ht->size);

	noeud = ht->array[holberton];

	while (noeud != NULL)
	{
		if (strcmp(noeud->key, key) == 0)
			return (noeud->value);

		noeud = noeud->next;
	}

	return (NULL);
}

