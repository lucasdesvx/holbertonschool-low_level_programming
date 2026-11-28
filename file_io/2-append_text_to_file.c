#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t content_length = 0;
	size_t total_written = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[content_length] != '\0')
			content_length++;

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
	}

	if (close(fd) == -1)
		return (-1);
	return (1);
}

