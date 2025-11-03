#include "main.h"
#include <stdio.h>

/**
 * _islower - verifie juste si une lettre est minuscule
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
