#include "main.h"

/**
 *_strlen - the string lengh
 *@s: pointer for the lengh
 *
 *return: to _strlen
 */

int _strlen(char *s)
{
	int longueur = 0;

	while (s[longueur] != '\0')
		longueur++;

	return (longueur);
}
