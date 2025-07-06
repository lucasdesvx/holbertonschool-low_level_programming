#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src to dest
 * @dest: Buffer to copy the string into
 * @src: The source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
