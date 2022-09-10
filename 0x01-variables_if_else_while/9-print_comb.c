#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		putchar((m % 10) + '0');
		if (m == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
