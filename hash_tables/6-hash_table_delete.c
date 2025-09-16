#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - supprime une table de hachage et libère la mémoire
 * @ht: pointeur vers la table de hachage à supprimer
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long i;
    hash_node_t *node, *tmp;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node)
        {
            tmp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = tmp;
        }
    }

    free(ht->array);
    free(ht);
}
