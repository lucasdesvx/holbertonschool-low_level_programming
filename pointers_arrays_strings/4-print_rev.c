#include "main.h"

/**
 *
 *
 *
 */

void print_rev(char *s)
{
	int longueur = 0;
	int d;
	
	while (s [longueur] != '\0')
	{
		longueur++;
	}
	for (d = longueur - 1; d >= 0; d--)
	{
		_putchar(s[d]);
		_putchar('\n');
	}
}
