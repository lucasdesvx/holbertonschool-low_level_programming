#include <stdlib.h>

/**
 * array_range - Create array of ints from min to max
 * @min: minimum int
 * @max: maximum int
 *
 * Return: pointer to array, or NULL if error
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
