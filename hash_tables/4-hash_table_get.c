#include "hash_tables.h"
#include <string.h>

char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long index;
    hash_node_t *node;

    if (!ht || !key || !*key)
        return NULL;

    index = key_index((const unsigned char *)key, ht->size);

    node = ht->array[index];
    while (node)
    {
        if (strcmp(node->key, key) == 0)
            return node->value;
        node = node->next;
    }
    return NULL;
}
