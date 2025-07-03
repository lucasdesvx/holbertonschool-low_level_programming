#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to first integer
 * @b: Pointer to second integer
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
