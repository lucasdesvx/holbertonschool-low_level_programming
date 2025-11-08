#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - that prints the sum
 * @a: bla bla
 * @size: bla bla
 *
 * Return: to diagsums
 */

void print_diagsums(int *a, int size)
{
	int matrix;
	int sum1 = 0;
	int sum2 = 0;


	for (matrix = 0; matrix < size; matrix++)
	{
		sum1 += a[matrix * size + matrix];
		sum2 += a[matrix * size + (size - 1 - matrix)];
	}
	printf("%d, %d\n", sum1, sum2);
}
