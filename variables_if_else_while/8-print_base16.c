#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nombre;
	char lettre;

	for (nombre = '0'; nombre <= '9'; nombre++)
		putchar(nombre);
	for (lettre = 'a'; lettre <= 'f'; lettre++)
		putchar(lettre);
	putchar('\n');

	return (0);
}
