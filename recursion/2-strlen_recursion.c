#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to measure
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Fin de la chaîne */
		return (0);
	return (1 + _strlen_recursion(s + 1));  /* Avance et compte */
}
