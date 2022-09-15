#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 * Return: 0
 */
void print_square(int size)
{
	int m, k;

	if (size > 0)
	{
		for (m = 1; m <= size; m++)
		{
			for (k = 1; k <= size; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
