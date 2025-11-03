#include "main.h"

/**
 * _strcpy - function that copies the string pointed to the buffer pointed
 * @dest:
 * @src:
 *
 * Return:
 */

char *_strcpy(char *dest, char *src)
{
	int sentence = 0;

	while (src[sentence] != '\0')
	{
		dest[sentence] = src[sentence];
		sentence++;
	}
	dest[sentence] = '\0';

	return (dest);
}
