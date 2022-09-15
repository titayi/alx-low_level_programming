#include "main.h"

/**
 * print_line - draws a straight line
 * @n: the number of times the character _ is printed
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
