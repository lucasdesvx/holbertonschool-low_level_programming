#include "main.h"
#include <stdio.h>

/**
 * _puts - affiche une chaîne de caractères suivie d'un saut de ligne
 * @str: la chaîne à afficher
 */
void _puts(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
    putchar('\n');
}
