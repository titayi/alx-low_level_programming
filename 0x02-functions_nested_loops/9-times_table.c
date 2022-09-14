#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Rwturn: 0
 */
void times_table(void)
{
	int i, m, res;

	for (i = 0; i <= 9; i++)
	{
		for (m = 0; m <= 9; m++)
		{
			res =(i * m);
			if (m != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && m != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
}
