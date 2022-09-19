#include "main.h"

/**
 * print_rev -function that prints a string, in reverse
 * @s: the character
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; I >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
