#include "main.h"

/**
 * *_memset -  function that fills memory with a constant byte
 * @n: bla bla
 * @b: bla bla
 * @s: bla bla
 *
 * Return: to *_memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int memoire;


	for (memoire = 0; memoire < n; memoire++)
	{
		s[memoire] = b;
	}

	return (s);
}
