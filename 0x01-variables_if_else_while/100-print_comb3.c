#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int t, w;

	for (t = 0; t < 9; t++)
	{
		for (w = t + 1; w < 10; w++)
		{
			putchar((t % 10) + '0');
			putchar((w % 10) + '0');

			if (t == 8 && w == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
