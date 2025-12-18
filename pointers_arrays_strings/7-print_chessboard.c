#include "main.h"

/**
 * print_chessboard - that prints the chessboard
 * @a: pointer
 *
 * Return: to print_chessboard
 */

void print_chessboard(char (*a)[8])
{
	int leroi;
	int lareine;

	for (leroi = 0; leroi < 8; leroi++)
	{
		for (lareine = 0; lareine < 8; lareine++)
		{
			_putchar(a[leroi][lareine]);
		}
		_putchar('\n');
	}
}
