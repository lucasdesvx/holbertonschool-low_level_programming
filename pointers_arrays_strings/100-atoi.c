#include "main.h"

/**
 * _atoi - convertit une chaîne en entier.
 * @s: chaîne à convertir
 *
 * Return: entier converti, 0 si pas de chiffre trouvé
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int found_digit = 0;

	/* Parcourir la chaîne */
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign = -sign;
		else if (s[i] == '+')
		{
			/* signe inchangé */
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			break;
		}
		i++;
	}

	if (!found_digit)
		return (0);

	/* Conversion des chiffres */
	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
