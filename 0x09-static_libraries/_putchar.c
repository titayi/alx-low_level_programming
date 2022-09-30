#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @c: The character to print
 *
 * Return: On success
 * On error, -1 is returned, and erron is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
