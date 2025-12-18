#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - that appends text at the end of a file
 * @filename: a pointer
 * @text_content: a pointer
 *
 * Return: to append_text_to_file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int planA;
	ssize_t longueur = 0;
	int planB;

	if (filename == NULL)
		return (-1);

	planA = open(filename, O_WRONLY | O_APPEND);
	if (planA == -1)
		return (-1);


	if (text_content == NULL)
	{
		close(planA);
		return (1);
	}
	while (text_content[longueur])
		longueur++;


	planB = write(planA, text_content, longueur);
	close(planA);

	if (planB == -1)
		return (-1);

	return (1);
}

