#include "main.h"

/**
 * swap_int - échange les valeurs de deux entiers
 * @a: pointeur vers le premier entier
 * @b: pointeur vers le deuxième entier
 */
void swap_int(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
