#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: variable
 *
 * Return: to hash_table_create
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int planA;
	hash_table_t *table;


	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (planA = 0; planA < size; planA++)
		table->array[planA] = NULL;

	return (table);
}
