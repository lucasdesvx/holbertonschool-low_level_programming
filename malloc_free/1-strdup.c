#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @memoire: a variable
 * @ledouble:a variable
 * @longueur: a variable
 *
 * Return: to _strdup
 */

char *_strdup(char *str)
{
	char *ledouble;
	int memoire = 0, longueur = 0;

	if (str == NULL)
		return (NULL);

	while (str[longueur])
        longueur++;



	ledouble = malloc(longueur + 1);
	if (ledouble == NULL)
	
		return (NULL);

	for (memoire = 0; memoire < longueur; memoire++)
		ledouble[memoire] = str[memoire];

	ledouble[longueur] = '\0';
	return (ledouble);
}
