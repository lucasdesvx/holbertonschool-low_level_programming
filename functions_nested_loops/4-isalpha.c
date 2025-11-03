#include "main.h"
#include <stdio.h>

/**
 * _isalpha - that checks for alphabetic character
 * @c:
 *
 * return: to _isalpha
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
