#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: argumentation count
 * @argv: argumentation vecteur
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int recevoir;


	for (recevoir = 0; recevoir < argc; recevoir++)
	{
		printf("%s\n", argv[recevoir]);
	}
	return (0);
}
