#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * add_node - creates and links a new hash node
 * @ht: hash table to update
 * @index: bucket index
 * @key: key to add
 * @value: value associated with the key
 *
 * Return: 1 on success, or 0 on failure
 */
static int add_node(hash_table_t *ht, unsigned long int index,
		    const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * hash_table_set - adds or updates a key/value in a hash table
 * @ht: hash table to update
 * @key: key to add or update
 * @value: value associated with the key
 *
 * Return: 1 on success, or 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int leindex;
	hash_node_t *noeud;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || *key == '\0' || value == NULL)
		return (0);

	leindex = key_index((unsigned char *)key, ht->size);
	noeud = ht->array[leindex];

	while (noeud)
	{
		if (strcmp(noeud->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(noeud->value);
			noeud->value = new_value;
			return (1);
		}
		noeud = noeud->next;
	}
	return (add_node(ht, leindex, key, value));
}
