#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int chiffre;

	for (chiffre = '0'; chiffre <= '9'; chiffre++)
		putchar(chiffre);
	putchar('\n');

	return (0);
}
