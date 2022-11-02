#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Is the NULL terminated string to add at the end of the file
 *
 * Return: 1 or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, writing, i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	writing = write(fd, text_content, i);

	if (fd == -1 || writing == -1)
		return (-1);

	close(fd);

	return (1);
}
