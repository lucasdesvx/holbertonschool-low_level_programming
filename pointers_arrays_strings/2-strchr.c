#include "main.h"
#include <stddef.h>

/**
 * _strchar - that locates a character in a string
 * @s: bla bla
 * @c: bla bla
 *
 * Return: to _strchar
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	if (c == '\0')
	{
		return s;
	}
	return NULL;
}
