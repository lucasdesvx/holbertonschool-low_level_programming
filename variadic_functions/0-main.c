#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024); /* Test avec 2 entiers */
    printf("%d\n", sum);             /* Doit afficher 1122 */

    sum = sum_them_all(4, 98, 1024, 402, -1024); /* Test avec 4 entiers */
    printf("%d\n", sum);                         /* Doit afficher 500 */

    return (0); /* Fin du programme */
}
