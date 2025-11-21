#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  that allocates memory using malloc
 * @b: bla bla
 *
 * Return: to malloc_checked
 */

void *malloc_checked(unsigned int b)
{
	void *determination;

	determination = malloc(b);
	if (determination == NULL)
		exit(98);


	return (determination);
}
