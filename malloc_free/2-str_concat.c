#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	s = malloc(len1 + len2 + 1);
	if (!s)
		return (NULL);

	while (i < len1)
		s[i] = s1[i], i++;
	while (j < len2)
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
