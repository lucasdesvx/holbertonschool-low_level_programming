#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a file with read and write permissions for the owner
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length = 0;
	size_t total_written = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	while (text_content != NULL && text_content[content_length] != '\0')
		content_length++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	while (total_written < content_length)
	{
		bytes_written = write(fd, text_content + total_written,
				     content_length - total_written);
		if (bytes_written == -1 && errno == EINTR)
			continue;
		if (bytes_written <= 0)
		{
			close(fd);
			return (-1);
		}
		total_written += bytes_written;
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}
