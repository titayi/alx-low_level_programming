#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14 and a new line
 *
 * Return: 0
 */
int void more_numbers(void)
{
	int m, k;

	for (m = 0; m < 10; m++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k / 10 != 0)
			{
				_putchar(k / 10 + '0');
			}
			_putchar(k % 10 + '0');
		}
	}
	_putchar('\n');
}
