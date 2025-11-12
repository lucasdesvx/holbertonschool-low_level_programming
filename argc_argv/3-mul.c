#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: argumentation count
 * @argv: argumentation vecteur
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int numero1, numero2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	numero1 = atoi(argv[1]);

	numero2 = atoi(argv[2]);

	result = numero1 * numero2;

	printf("%d\n", result);
	return (0);
}
