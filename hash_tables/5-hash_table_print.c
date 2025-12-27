#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer
 *
 * Return: to hash_table_print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int planA;
	hash_node_t *noeud;
	int premier = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (planA = 0; planA < ht->size; planA++)
	{
		noeud = ht->array[planA];
		while (noeud)
		{
			if (!premier)
				printf(", ");

			printf("'%s': '%s'", noeud->key, noeud->value);
			premier = 0;
			noeud = noeud->next;
		}
	}

	printf("}\n");
}
