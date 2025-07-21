#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: entier converti, 0 si pas de chiffre
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			break;
		}
		i++;
	}

	if (!found_digit)
		return (0);

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Cas spécial INT_MIN */
	if (sign == -1 && result > 2147483647)
		return (-2147483648);

	return (sign * (int)result);
}
