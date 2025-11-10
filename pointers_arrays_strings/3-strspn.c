#include "main.h"

/**
 * _strspn - that gets the length of a prefix substring
 * @s: bla bla
 * @accept: bla bla
 *
 * Return: to _strspn
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int longueur;
	unsigned int nombre;


	for (longueur = 0; s[longueur] != '\0'; longueur++)
	{
		for (nombre = 0; accept[nombre] != '\0'; nombre++)
		{
			if (s[longueur] == accept[nombre])
				break;
		}
		if (accept[nombre] == '\0')
			break;
	}
	return (longueur);
}
