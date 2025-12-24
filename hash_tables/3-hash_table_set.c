#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds or updates a key/value in a hash table
 * @ht: pointer
 * @key: pointer
 * @value: pointer
 *
 * Return: to hash_table_set
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int leindex;
	hash_node_t *noeud;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	leindex = key_index((unsigned char *)key, ht->size);
	noeud = ht->array[leindex];

	while (noeud)
	{
		if (strcmp(noeud->key, key) == 0)
		{
			free(noeud->value);
			noeud->value = strdup(value);
			return (noeud->value != NULL);
		}
		noeud = noeud->next;
	}

	noeud = malloc(sizeof(hash_node_t));
	if (noeud == NULL)
		return (0);

	noeud->key = strdup(key);
	noeud->value = strdup(value);

	if (noeud->key == NULL || noeud->value == NULL)
	{
		free(noeud->key);
		free(noeud->value);
		free(noeud);
		return (0);
	}

	noeud->next = ht->array[leindex];
	ht->array[leindex] = noeud;

	return (1);
}
