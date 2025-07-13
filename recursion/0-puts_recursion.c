#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Si on atteint la fin de la chaîne */
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);  /* Affiche le caractère courant */
	_puts_recursion(s + 1);  /* Appel récursif sur le caractère suivant */
}
