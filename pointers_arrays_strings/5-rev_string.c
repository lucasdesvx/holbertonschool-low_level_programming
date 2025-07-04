#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Reverse the string in place */
	for (j = 0; j < i / 2; j++)
	{
		temp = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = temp;
	}
}
