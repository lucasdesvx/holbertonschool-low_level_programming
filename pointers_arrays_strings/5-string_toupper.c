#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters of a string to uppercase
 * @
 *
 *
 * return: to *string_toupper
 */

char string_toupper(charstr)
{
	int look;
	
	
	for (look = 0; str[look] != '\0'; look++)
	{
		if (str[look] >= 'a' && str[look] <= 'z')
			str[look] = str[look] - 32;
	}
	return (str);
}
