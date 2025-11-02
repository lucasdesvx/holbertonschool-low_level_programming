#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

void print_array(int *a, int n)
{
	int tableau;

	for (tableau = 0; tableau < n; tableau++)
	{
		printf("%d", a[tableau]);
		if (tableau != n - 1)
			printf(", ");
	}
	printf("\n");
}
