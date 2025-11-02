#include "main.h"

/**
 * reset_to_98 - met a  jour la valeur d'un pointer
 * @n: pointeur vers un entier
 *
 * Return: rien
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
