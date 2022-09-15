#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: the argument
 * Return: 0
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
		_putchar('\n');
	for (m = 0; m <= n; m++)
		_putchar('_');
	_putchar('\n');
}
