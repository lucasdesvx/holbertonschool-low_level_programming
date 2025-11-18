#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *new_array = NULL;
	unsigned int i;


	if (size == 0)
		return NULL;

	new_array = malloc(sizeof(char) * size);

	if (new_array == NULL)
		return NULL;
	
	for (i = 0; i < size; i++)
		new_array[i] = c;
	
	return new_array;
}
