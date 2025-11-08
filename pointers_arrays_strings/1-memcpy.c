#include "main.h"

/**
 * _memcpy - that copies memory area
 * @src:
 * @n: 
 *
 * Return: to _memcpy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int memoire;


	for (memoire = 0; memoire < n; memoire++)
	{
		dest[memoire] = src[memoire];
	}

	return (dest);
}
