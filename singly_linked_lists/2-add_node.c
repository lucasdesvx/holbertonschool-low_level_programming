#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *new;        /* Pointeur vers le nouveau noeud */
    unsigned int len = 0; /* Compteur pour calculer la longueur du string */

    if (head == NULL || str == NULL) /* Vérifie ue head et str ne sont pas NULL */
        return (NULL);               /* Retourne NULL si un des deux est invalide */

    new = malloc(sizeof(list_t));    /* Alloue la mémoire pour le nouveau noeud */
    if (new == NULL)                 /* Vérifie si malloc a échoué */
        return (NULL);               /* Retourne NULL si l'allocation échoue */

    new->str = strdup(str);          /* Duplique la string et l'assigne str */
    if (new->str == NULL)            /* Vérifie si strdup a échoué */
    {
        free(new);                   /* Libèr dee la mmoire allouée au noeud */
        return (NULL);               /* Retourne NULL si la duplication échoue */
    }

    while (str[len])                 /* Boucle pour calculer la longueur du string */
        len++;                       /* Incrémente len pur chaque caractère */

    new->len = len;                  /* Stocke la longueur de la string dans len */
    new->next = *head;               /* Fait pointer le nouveau noeud vers l'ancien head */
    *head = new;                     /* Mettre a jour head pour qu'il pointe vers le nouveau noeud */

    return (new);                    /* Retourne l'adresse du nouveau noeud créé */
}
