#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the argument
 * Return: void
 */
void print_times_table(int n)
{
	int j, k, l;

	if (!(n > 15 || n < 0))
	{
		for (j = 0; j <= n; j++)
		{
			for (k = 0; k <= n; k++)
			{
				l = (j * k);
				if (k != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (l < 10 && k != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((l % 10) + '0');
				}
				else if (l >= 10 && l < 100)
				{
					_putchar(' ');
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
				}
				else if (l >= 100 && k != 0)
				{
					_putchar((l / 100) + '0');
					_putchar((l / 10) % 10 + '0');
					_putchar((l % 10) + '0');
				}
				else
					_putchar((l % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
