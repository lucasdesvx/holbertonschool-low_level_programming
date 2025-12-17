#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: to read_textfile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int compteur;
	ssize_t planA;
	ssize_t planB;
	char *fichier;

	if (filename == NULL)
		return (0);


	compteur = open(filename, O_RDONLY);
	if (compteur == -1)
		return (0);

	fichier = malloc(letters);
	if (fichier == NULL)
	{
		close(compteur);
		return (0);
	}

	planA = read(compteur, fichier, letters);
	planB = write(STDOUT_FILENO, fichier, planA);


	free(fichier);
	close(compteur);


	if (planA == -1 || planB != planA)
		return (0);

	return (planB);
}
