#include "main.h"
#include <stdio.h>

/**
 * _islower - checks for lowercase character
 * @c:
 *
 * Return:
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
