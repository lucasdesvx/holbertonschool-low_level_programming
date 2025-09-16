#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;
	char *value_copy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	/* Check if key already exists, and update */
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}

	/* Key not found, create new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	value_copy = strdup(value);
	if (!value_copy)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->value = value_copy;

	/* Insert at beginning of linked list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
