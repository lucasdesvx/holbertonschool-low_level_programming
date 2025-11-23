#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 *
 * Return: to _strpbrk
 */

char *_strpbrk(char *s, char *accept)
{
	int planA;
	int planB;

	for (planA = 0; s[planA] != '\0'; planA++)
	{
		for (planB = 0; accept[planB] != '\0'; planB++)
		{
			if (s[planA] == accept[planB])
				return (s + planA);
		}
	}


	return (NULL);
}
