#include <stdio.h>

/**
 * main - Prints a diagonal line of '@' characters
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 25; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == i - 1)
				printf("@");
			else
				printf(" ");
		}
		printf("\n");
	}

	return (0);
}
