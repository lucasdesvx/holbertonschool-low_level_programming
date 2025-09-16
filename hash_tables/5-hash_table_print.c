#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - affiche une table de hachage
 * @ht: pointeur vers la table de hachage
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long i;
    hash_node_t *node;
    int first = 1;

    if (!ht)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            if (!first)
                printf(", ");
            printf("'%s': '%s'", node->key, node->value);
            first = 0;
            node = node->next;
        }
    }
    printf("}\n");
}
