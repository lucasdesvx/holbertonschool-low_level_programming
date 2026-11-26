#include "main.h"

/**
 * print_unsigned - prints an unsigned integer
 * @number: integer to print
 *
 * Return: Nothing
 */
static void print_unsigned(unsigned long number)
{
	if (number >= 10)
		print_unsigned(number / 10);
	_putchar((char)((number % 10) + '0'));
}

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting integer
 *
 * Return: Nothing
 */
void print_to_98(int n)
{
	int current;
	int step;
	unsigned long magnitude;

	current = n;
	step = (n < 98) ? 1 : -1;
	while (1)
	{
		if (current < 0)
		{
			_putchar('-');
			magnitude = (unsigned long)(-(current + 1)) + 1;
		}
		else
			magnitude = (unsigned long)current;
		print_unsigned(magnitude);
		if (current == 98)
			break;
		_putchar(',');
		_putchar(' ');
		current += step;
	}
	_putchar('\n');
}
