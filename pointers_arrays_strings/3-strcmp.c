#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: bla bla
 * @s2: bla bla
 *
 * Return: to _strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int cisfun = 0;


	while (s1[cisfun] != '\0' && s2[cisfun] != '\0')
	{
		if (s1[cisfun] != s2[cisfun])
		{
			return (s1[cisfun] - s2[cisfun]);
		}
		cisfun++;
	}
	return (s1[cisfun] - s2[cisfun]);
}
