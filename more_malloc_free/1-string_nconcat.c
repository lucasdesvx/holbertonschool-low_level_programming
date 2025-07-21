#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: Max bytes to take from s2
 *
 * Return: Pointer to new string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	n = (n > len2) ? len2 : n;

	s = malloc(len1 + n + 1);
	if (!s)
		return (NULL);

	while (i < len1)
		s[i++] = *s1++;
	while (j < n)
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
