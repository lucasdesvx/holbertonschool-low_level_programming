#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
