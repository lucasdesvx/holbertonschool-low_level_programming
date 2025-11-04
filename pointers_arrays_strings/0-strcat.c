#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @src: source
 * @dest: destination
 *
 * Return: to _strcat
 */

char *_strcat(char *dest, char *src)
{
	int lestring1 = 0;
	int lestring2 = 0;

	while (dest[lestring1] != '\0')
	{
		lestring1++;
	}
	while (src[lestring2] != '\0')
	{
		dest[lestring1] = src[lestring2];
		lestring1++;
		lestring2++;
	}
	dest[lestring1] = '\0';



	return (dest);
}
