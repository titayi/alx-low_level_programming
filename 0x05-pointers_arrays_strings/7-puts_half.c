#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the character
 */
void puts_half(char *str)
{
	int i = 0;
	int h;

	while (str[i] != '\0')
		i++;

	h = i / 2;

	if (i % 2 == 1)
	{
	     h++;

		while (h < i)
		{
			_putchar(str[h]);
			h++;
		}
	}
	_putchar(10);
}
