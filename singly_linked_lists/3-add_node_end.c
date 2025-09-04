#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - ajoute un nœud à la fin d'une liste
 * @head: adresse du pointeur vers le premier nœud
 * @str: chaîne à dupliquer
 *
 * Return: adresse du nouveau nœud, ou NULL si échec
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    unsigned int len = 0;

    /* calculer la longueur de la chaîne */
    while (str[len])
        len++;

    /* créer le nouveau nœud */
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

    /* sinon, parcourir jusqu'au dernier nœud */
    temp = *head;
    while (temp->next)
        temp = temp->next;

    /* ajouter le nouveau nœud à la fin */
    temp->next = new_node;

    return (new_node);
}

