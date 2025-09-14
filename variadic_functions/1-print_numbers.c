#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;        /* Variable pour parcourir les arguments */
    unsigned int i;      /* Variable de boucle */

    va_start(args, n);   /* Initialise la liste d'arguments variadiques */

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int)); /* Récupère et affiche chaque entier */

        /* Si on a encore des nombres à afficher et un séparateur, on l'imprime */
        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    printf("\n");        /* Ajoute une nouvelle ligne à la fin */
    va_end(args);        /* Libère la liste d'arguments */
}
