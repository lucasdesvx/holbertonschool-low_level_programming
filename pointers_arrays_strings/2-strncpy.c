#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: a variable
 *
 * Return: to -strncpy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int copier;

	for (copier = 0; copier < n && src[copier] != '\0'; copier++)
	{
		dest[copier] = src[copier];
	}
	for (;copier < n; copier++)
	{
		dest[copier] = '\0';
	}
	return (dest);
}
