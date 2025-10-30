#include "main.h"

/**
 *
 *
 *
 */

int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
		longueur++;

	return (longueur);
}
