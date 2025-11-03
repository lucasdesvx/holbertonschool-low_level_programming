#include "main.h"
#include <stdio.h>

/**
 * islower - verifie juste si une lettre est minuscule
 * @c:
 *
 * return: 1 si cest une lettre minuscule
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
