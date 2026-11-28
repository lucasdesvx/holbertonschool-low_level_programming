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
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	if (letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	free(buffer);
	close(fd);

	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
