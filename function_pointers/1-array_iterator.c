#include "function_pointers.h"

/**
 * array_iterator - applies a function to each element of an array
 * @array: array of integers
 * @size: number of elements in the array
 * @action: function to apply to each element
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
