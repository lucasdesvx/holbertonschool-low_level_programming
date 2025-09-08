#include "lists.h"
#include <stdlib.h>

void free_list(list_t *head)
{
    list_t *temp;

    while (head)
    {
        temp = head->next; /* garde le pointeur vers le suivant */
        free(head->str);   /* libère la string */
        free(head);        /* libère le noeud */
        head = temp;       /* passe au suivant */
    }
}
