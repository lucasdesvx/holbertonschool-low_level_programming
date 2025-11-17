#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
	char *new_array = NULL;


	if (size == 0)
		return NULL;

	new_array = malloc(sizeof(char) * size);

	if (new_array == NULL)
	{
		return NULL;
	}
}
