#include "main.h"

/**
 * string_toupper - hanges all lowercase letters of a string to uppercase
 * @str: string
 *
 * Return: to string_toupper
 */

char *string_toupper(char *str)
{
	int look;

	for (look = 0; str[look] != '\0'; look++)
	{
		if (str[look] >= 'a' && str[look] <= 'z')
			str[look] = str[look] - 32;
	}
	return (str);
}
