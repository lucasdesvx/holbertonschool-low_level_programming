#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int print_last_digit(int nombre)
{
	if (nombre < 0)
		nombre = -nombre;

	_putchar((nombre % 10)+ '0');
	return (nombre % 10);
}
