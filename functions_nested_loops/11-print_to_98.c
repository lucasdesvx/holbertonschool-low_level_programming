#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers from n to 98
 * @n: starting integer
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int current;
	int step;

	current = n;
	step = (n < 98) ? 1 : -1;
	while (1)
	{
		printf("%d", current);
		if (current == 98)
			break;
		printf(", ");
		current += step;
	}
	_putchar('\n');
}
