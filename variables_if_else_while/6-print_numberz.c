#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int  nombre;

	for (nombre = 0; nombre < 10; nombre++)
		putchar(nombre + '0');
	putchar('\n');

	return(0);
}
