#include "main.h"
#include <stdlib.h>

/**
 * str_concat - that concatenates two strings
 * @s1: bla bla
 * @s2: bla bla
 *
 * Return: to str_concat
 */

char *str_concat(char *s1, char *s2)
{
	char *espace;
	int planA, planB;
	int longueur1 = 0, longueur2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[longueur1] != '\0')
		longueur1++;
	while (s2[longueur2] != '\0')
		longueur2++;

	espace = malloc((longueur1 + longueur2 + 1) * sizeof(char));
	if (espace == NULL)

		return (NULL);

	for (planA = 0; planA < longueur1; planA++)
		espace[planA] = s1[planA];

	for (planB = 0; planB < longueur2; planB++)
		espace[planA + planB] = s2[planB];

	espace[planA + planB] = '\0';

	return (espace);
}
