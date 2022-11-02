#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the file
 * @letters: Numbers of letters it should read and print
 *
 * Return: Actual numbers of letters it could read and print,
 * -if the file can not be opened or read, return 0
 * -if filename is NULL return 0
 * -if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, reading, writing;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	reading = read(fd, buffer, letters);
	writing = write(STDOUT_FILENO, buffer, reading);

	if (fd == -1 || reading == -1 || writing == -1 || writing != reading)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (writing);
}
