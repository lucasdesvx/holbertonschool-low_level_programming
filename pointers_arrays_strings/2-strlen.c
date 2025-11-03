#include "main.h"

/**
 *_strlen - the string lengh
 *@s: pointer
 *
 *return: void
 */

int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
		longueur++;

	return (longueur);
}
