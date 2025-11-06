#include "main.h"

/**
 * *string_toupper - function
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
