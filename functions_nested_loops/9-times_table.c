#include "main.h"

/**
 * print_alphabet -  that prints the 9 times table, starting with 0
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int planA;
	int planB;
	int planC;

	for (planA = 0; planA <= 9; planA++)
	{
		for (planB = 0; planB <= 9; planB++)
		{
			planC = planB * planA;

			if (planB != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (planC < 10)
					_putchar(' ');
			}
			if (planC >= 10)
				_putchar((planC / 10) + '0');
			_putchar((planC % 10) + '0');
		}
		_putchar('\n');
	}
}
