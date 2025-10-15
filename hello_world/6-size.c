#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %zu byte(s)\n", (int) sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", (int) sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", (int) sizeof(float));
	return (0);
}
