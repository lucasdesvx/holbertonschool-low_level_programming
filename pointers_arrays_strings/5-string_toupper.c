#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters of a string to uppercase
 * @str:
 *
 *
 * return: to *string_toupper
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
