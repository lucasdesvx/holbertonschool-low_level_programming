#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - that creates an array of integers
 * @min: variable whole number
 * @max: variable whole number
 *
 * Return: to array_range
 */

int *array_range(int min, int max)
{
	int *direction;
	int planA;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	direction = malloc(sizeof(int) * size);
	if (direction == NULL)
		return (NULL);

	for (planA = 0; planA < size; planA++)
		direction[planA] = min + planA;

	return (direction);
}
