#include "function_pointers.h"

/**
 * int_index - searches for the first matching integer
 * @array: array to search
 * @size: number of elements in the array
 * @cmp: comparison function
 *
 * Return: index of the first match, or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
