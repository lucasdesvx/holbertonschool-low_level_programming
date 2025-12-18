#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int planA = 0;
	int planB = 0;
	int nombreC = 0;
	
	
	for (planA = 1; planA < argc; planA++)
	{
		for (planB = 0; argv[planA][planB]; planB++)
		{
			if (argv[planA][planB] < '0' || argv[planA][planB] > '9')
			{
			
			
				printf("Error\n");
				return 1;
			}
		}
		nombreC += atoi(argv[planA]);
	}
	printf("%d\n", nombreC);
	return 0;
}
