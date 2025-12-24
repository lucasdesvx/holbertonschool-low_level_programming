#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - adds or updates an element in the hash table
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
	char *valeurA;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	leindex = key_index((const unsigned char *)key, ht->size);
	noeud = ht->array[leindex];
	
	
	while (noeud != NULL)
	{
		if (strcmp(noeud->key, key) == 0)
		{
			valeurA = strdup(value);
			if (valeurA == NULL)
				return (0);
			free(noeud->value);

			noeud->value = valeurA;
			return (1);
		}
		noeud = noeud->next;
	}
	noeud = malloc(sizeof(hash_node_t));

	if (noeud == NULL)
		return (0);
	return (1);
}
