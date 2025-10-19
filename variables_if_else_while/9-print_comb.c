#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lechiffre;

	for (lechiffre = 0; lechiffre <= 9; lechiffre++)
	{
		putchar(48 + lechiffre);
		if (lechiffre != 9)
		{
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
