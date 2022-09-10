#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int m, k;

	for (m = 0; m <= 98; m++)
	{
		for (k = m + 1; k <= 99; k++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');

			if (m == 98 && k == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
