#include "lists.h"
#include <stdlib.h>
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    unsigned int len = 0;

    /* calculer la longueur de la string */
    while (str[len])
        len++;

    /* créer le nouveau oeud */
    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    new_node->str = strdup(str);
    if (!new_node->str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = len;
    new_node->next = NULL;

    /* si la liste est vide, le nouveau devient la tête */
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    /* sinon, parcourir jusqu'au dernier noeud */
    temp = *head;
    while (temp->next)
        temp = temp->next;

    /* ajouter le nouveau noeud a la fin */
    temp->next = new_node;

    return (new_node);
}

