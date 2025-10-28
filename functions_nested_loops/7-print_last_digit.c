#include "main.h"

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int print_last_digit(int nombre)
{
	int last_digit;

	last_digit = nombre % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
