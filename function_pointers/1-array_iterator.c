#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - that executes a function given as a parameter
 * @array: pointer
 * @size: variable
 * @action: pointer
 *
 * Return: to array_iterator
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t leparametre;

	if (array == NULL || action == NULL)
		return;


	for (leparametre = 0; leparametre < size; leparametre++)
		action(array[leparametre]);
}
