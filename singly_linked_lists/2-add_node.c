#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node; /* Création d'un pointeur pour le nouveau oeud */

    if (!head || !str) /* Vérifie que head et str ne sont pas NULL */
        return (NULL); /* Retourne NULL si invalidité */

    new_node = malloc(sizeof(list_t)); /* Alloue de la mémoire pour le nouveau oeud */
    if (!new_node)                     /* Vérifie si malloc a échoué */
        return (NULL);                 /* Retourne NULL si échec */

    new_node->str = strdup(str);       /* Duplique la string passée en argument */
    if (!new_node->str)                /* Vérifie si strdup a échoué */
    {
        free(new_node);                /* Libère la mémoire allouée si échec */
        return (NULL);                 /* Retourne NULL */
    }

    new_node->len = strlen(str);       /* Calcule la longueur de la string */
    new_node->next = *head;            /* Pointe le nouveau noeud dans lancien premier noeud */
    *head = new_node;                  /* Met le pointeur head sur le nouveau noeud */

    return (new_node);                 /* Retourne ladresse du nouveau noeud */
}
