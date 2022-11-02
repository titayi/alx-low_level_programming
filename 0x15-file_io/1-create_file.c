#include "main.h"

/**
 * create_file - creates a file
 * @filename: Name of the file to create
 * @text_content: Is a NULL terminated string to write to the file
 *
 * Return: 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, writing, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writing = write(fd, text_content, i);

	if(fd == -1 || writing == -1)
		return (-1);

	close(fd);

	return (1);
}
