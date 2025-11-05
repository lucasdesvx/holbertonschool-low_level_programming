#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers
 * @a: bla blah
 * @n: bla blah
 *
 * Return: to reverse_array
 */

void reverse_array(int *a, int n)
{
	int chiffre, temp;
	
	
	for (chiffre = 0; chiffre < n / 2; chiffre++)
	{
		temp = a[chiffre];
		a[chiffre] = a[n - 1 - chiffre];
		a[n - 1 - chiffre] = temp;
	}
}
