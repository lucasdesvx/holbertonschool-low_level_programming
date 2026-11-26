#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 *
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int i;
	int capitalize;

	capitalize = 1;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (capitalize && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		capitalize = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			      str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			      str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			      str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			      str[i] == '}');
	}

	return (str);
}
