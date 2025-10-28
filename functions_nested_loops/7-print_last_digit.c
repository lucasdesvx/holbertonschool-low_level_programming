#include "main.h"

/**
 * print_last_digit - ca affiche le dernier chiffre dun nombre
 * @n: le nombre dont on veut afficher le dernier chiffre
 *
 * Return: la valeur du dernier nombre
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');

	return (last_digit);
}
