#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number of times the character \\ should be printed.
 *
 * Description: If n is 0 or less, the function prints only a newline.
 */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
