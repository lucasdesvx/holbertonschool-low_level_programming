#include "main.h"

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;

	/* Avance jusqu'au premier chiffre */
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convertit les chiffres */
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
