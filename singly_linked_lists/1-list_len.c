#include <stdio.h>
#include "lists.h"

/**
 * list_len - retourne le nombre d’éléments dans une liste list_t
 * @h: pointeur vers le premier nœud de la liste
 *
 * Return: nombre total de nœuds
 */
size_t list_len(const list_t *h)
{
    size_t count = 0;

    while (h != NULL) /* Tant qu'on n'est pas à la fin */
    {
        count++;      /* On compte le nœud actuel */
        h = h->next;  /* On passe au suivant */
    }

    return (count);
}
