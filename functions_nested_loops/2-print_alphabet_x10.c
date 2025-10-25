#include <stdio.h>
#include "main.h"

/**
 *print 10 time the alphabet
 *
 *return void
 */

void print_alphabet_x10(void)
{
	char lettre;
	int nombre;
	
	for (nombre = 0; nombre < 10; nombre++)

	for (lettre = 'a'; lettre <= 'z'; lettre++)
		_putchar(lettre);
	_putchar('\n');
}
