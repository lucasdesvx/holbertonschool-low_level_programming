#include "main.h"

/**
 * _isalpha - checks whether a character is alphabetic
 * @c: character to check
 *
 * Return: 1 if c is an uppercase or lowercase letter, otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
