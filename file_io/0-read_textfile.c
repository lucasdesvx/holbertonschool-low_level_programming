#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - that read a text file prints it to the standard output
 * @filename: bla bla
 * @letters: bla bla
 *
 * Return: to read_textfile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *planB;
	ssize_t longueur;
	int planA;

	if (filename == NULL)
		return (0);
	
	planA = open(filename, O_RDONLY);
	if (planA == -1)
		return (0);

	planB = malloc(letters);
	if (planB == NULL)
		return (0);


