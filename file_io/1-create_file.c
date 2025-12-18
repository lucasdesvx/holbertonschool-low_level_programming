#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * create_file - that creates a file who have a right access
 * @filename:
 * @text_content:
 *
 * Return: to create_file
 */

int create_file(const char *filename, char *text_content)
{
	int planA = 0;
	int planB = 0;

	if (filename == NULL)
		return (-1);


	while (text_content && text_content[planB])
		planB++;

	planA = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (planA == -1)
		return (-1);


	if (write(planA, text_content, planB) == -1)
	{
		close(planA);
		return (-1);
	}
	close(planA);
	return (1);
}
