#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * close_file - closes a file descriptor and reports failures
 * @fd: file descriptor to close
 */
static void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the contents of one file to another
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;
	size_t total_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (1)
	{
		bytes_read = read(fd_from, buffer, sizeof(buffer));
		if (bytes_read == -1 && errno == EINTR)
			continue;
		if (bytes_read == -1)
		{
			close_file(fd_from);
			close_file(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (bytes_read == 0)
			break;

		total_written = 0;
		while (total_written < (size_t)bytes_read)
		{
			bytes_written = write(fd_to, buffer + total_written,
					      (size_t)bytes_read - total_written);
			if (bytes_written == -1 && errno == EINTR)
				continue;
			if (bytes_written <= 0)
			{
				close_file(fd_from);
				close_file(fd_to);
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			total_written += (size_t)bytes_written;
		}
	}

	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
