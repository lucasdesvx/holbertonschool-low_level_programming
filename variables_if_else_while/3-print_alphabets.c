#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, then uppercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print lowercase letters */
	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	/* Print uppercase letters */
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}

	/* Print newline */
	putchar('\n');

	return (0);
}

