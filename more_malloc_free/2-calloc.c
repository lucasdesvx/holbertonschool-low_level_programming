#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  that allocates memory for an array, using malloc
 * @nmemb: unsigned variable
 * @size: unsigned variable
 *
 * Return: to _calloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int letotal;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	letotal = nmemb * size;


	ptr = malloc(letotal);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < letotal; i++)
		ptr[i] = 0;

	return (ptr);
}
