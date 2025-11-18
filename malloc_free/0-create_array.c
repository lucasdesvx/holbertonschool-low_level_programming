#include <stdlib.h>
#include "main.h"

/**
 * create_array - that creates an array of chars
 * @size: a variable
 * @c: a variable
 *
 * Return: to create_array
 */

char *create_array(unsigned int size, char c)
{
	char *new_array = NULL;
	unsigned int i;


	if (size == 0)
		return (NULL);

	new_array = malloc(sizeof(char) * size);
	
	if (new_array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_array[i] = c;

	return (new_array);
}
