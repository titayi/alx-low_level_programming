#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: argument
 * Return: 0
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			_putchar(n);
		}
		else
			for (n = n; n > 98; n--)
				_putchar(n);
	_putchar("98\n");
}
