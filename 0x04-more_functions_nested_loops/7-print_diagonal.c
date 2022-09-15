#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: The integer
 * Return: 0
 */
void print_diagonal(int n)
{
	int m, k;

	if (n > 0)
	{
		for (m = 1; m <= n; m++)
		{
			for (k = 1; k <= n; k++)
			{
				if (m == k)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
