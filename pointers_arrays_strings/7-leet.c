#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string lol
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	int mozart;
	int musique;

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";



	for (mozart = 0; s[mozart] != '\0'; mozart++)
	{
		for (musique = 0; musique < 10; musique++)
		{

			if (s[mozart] == letters[musique])
			{
				s[mozart] = numbers[musique];
			}
		}
	}
	return (s);
}
