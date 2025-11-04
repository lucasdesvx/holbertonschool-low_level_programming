#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: a variable
 *
 * Return: to _strncat
 */

char *_strncat(char *dest, char *src, int n)
{
	int exemple1 = 0;

	int exemple2 = 0;


	while (dest[exemple1] != '\0')
	{
		exemple1++;
	}
	while (exemple2 < n && src[exemple2] != '\0')
	{
		dest[exemple1] = src[exemple2];
		exemple1++;
		exemple2++;
	}
	dest[exemple1] = '\0';
	return (dest);
}
