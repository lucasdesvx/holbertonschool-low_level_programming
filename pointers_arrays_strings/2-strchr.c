#include "main.h"

/**
 * _strchr - that locates a character in a string
 * @s: bla bla
 * @c: bla bla
 *
 * Return: to _strchar
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}


	if (c == '\0')
		return (s);

	return (0);
}
