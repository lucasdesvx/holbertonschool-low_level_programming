#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 */

char *_strchr(char *s, char c)
{
	char memoire;
	
	
	for (memoire = 0; memoire < c; memoire++)
	{
		s[memoire] = c;
	}

	return (s);
}
