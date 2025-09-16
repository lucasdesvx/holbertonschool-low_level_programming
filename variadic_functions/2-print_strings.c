#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings followed by a new line
 * @separator: The string to be printed between the strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	 va_list args;           /* Déclaration de la liste d'arguments variables */
    unsigned int i;         /* Compteur pour la boucle */
    char *str;              /* Pointeur vers la chaîne de caractèrea imprimer */

    va_start(args, n);      /* Initialisation de la liste d'arguments variadiques */

    for (i = 0; i < n; i++) /* Boucle a travers les arguments */
    {
        str = va_arg(args, char *); /* Récupératiodu string suivante */

        if (str == NULL)            /* Si la chaîne est NULL */
            printf("(nil)");        /* On affiche (nil) */
        else
            printf("%s", str);      /* Sinon, on affiche la chaîne */

        /* Si un séparateur est défini equon n'est pas a la dernière chaîne */
        if (separator != NULL && i < n - 1)
            printf("%s", separator); /* On imprime le séparateur */
    }

    printf("\n");           /* Nouvelle ligne a la fin de l'affichage */

    va_end(args);           /* Libère la mémoire utilisée par va_list */
}
