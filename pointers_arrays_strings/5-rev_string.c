#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: pointer
 *
 * return : poi
 */

void rev_string(char *s)
{
	int a = 0, b;
	char temp;

	while (s[a] != '\0')
		a++;

	for (b = 0; b < a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = temp;
	}
}
