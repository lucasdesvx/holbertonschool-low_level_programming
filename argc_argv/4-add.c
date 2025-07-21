#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if all args are valid numbers, 1 if at least one is invalid
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		while (*arg)
		{
			if (*arg < '0' || *arg > '9')
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
