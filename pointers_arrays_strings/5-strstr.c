#include "main.h"
#include <stddef.h>

/**
 * _strstr - that locates a substring
 * @haystack: pointer
 * @needle: pointer
 *
 * Return: to _strstr
 */

char *_strstr(char *haystack, char *needle)
{
	int locationA;
	int locationB;

	for (locationA = 0; haystack[locationA] != '\0'; locationA++)
	{
		for (locationB = 0; needle[locationB] != '\0'; locationB++)
		{
			if (haystack[locationA + locationB] != needle[locationB])
				break;
		}
		if (needle[locationB] == '\0')
			return (haystack + locationA);
	}
	return (NULL);
}
