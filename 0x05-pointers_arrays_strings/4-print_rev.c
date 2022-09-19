#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: the character
 */
void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (n = (n - 1); s[n] != '\0'; n--)
		{
			_putchar(s[n]);
		}
	}
	_putchar('\n');
}
