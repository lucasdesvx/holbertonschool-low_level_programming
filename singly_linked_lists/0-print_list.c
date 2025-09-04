#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0; /* compteur pour compter le nombre de noeuds */

    while (h != NULL) /* tant que le pointeur natteint pas la fin de la liste */
    {
        if (h->str == NULL) /* si le string du noeud est NULL */
            printf("[0] (nil)\n"); /* afficher [0] (nil) */
        else
            printf("[%d] %s\n", h->len, h->str); /* afficher la longueur avec %d et le strings */

        h = h->next; /* passer au noeud suivant */
        count++;     /* incrémenter le compteur */
    }

    return (count); /* retourner le nombre total de noeuds */
}
