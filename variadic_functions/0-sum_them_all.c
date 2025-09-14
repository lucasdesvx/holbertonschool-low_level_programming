#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    va_list args;        /* Déclaration de la variable pour stocker les arguments */
    unsigned int i;      /* Variable de boucle pour parcourir les paramètres */
    int sum = 0;         /* Variable qui contiendra la somme finale */

    if (n == 0)          /* Si aucun argument n’est passé */
        return (0);      /* On retourne directement 0 */

    va_start(args, n);   /* Initialisation de la liste args avec le nombre d’arguments */

    for (i = 0; i < n; i++)   /* Boucle pour parcourir chaque paramètre */
        sum += va_arg(args, int); /* Récupère chaque argument de type int et l’ajoute à sum */

    va_end(args);        /* Libère la mémoire utilisée par va_list */

    return (sum);        /* Retourne la somme calculée */
}

