#include "main.h"

/**
 *
 *
 *
 *
 */

void puts_half(char *str)
{
	int a = 0, nombre;

	while (str[a] != '\0')
		a++;


	if (a % 2 == 0)
		nombre = a / 2;
	else
		nombre = (a + 1) / 2;
	while (str[nombre] != '\0')
	{
		_putchar(str[nombre]);
		nombre++;
	}
	_putchar('\n');
}
