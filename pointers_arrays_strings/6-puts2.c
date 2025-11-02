#include "main.h"

/**
 *
 *
 *
 */

void puts2(char *str)
{
	int nombre = 0;

	while (str[nombre] != '\0')
	{
		if (nombre % 2 == 0)
			_putchar(str[nombre]);
		nombre++;
	}
	_putchar('\n');
}
