#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the string in reverse */
	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}

	_putchar('\n');
}
