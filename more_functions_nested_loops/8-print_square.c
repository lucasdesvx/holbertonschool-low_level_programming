#include "main.h"

/**
 * print_square - Prints a square using the # character.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
