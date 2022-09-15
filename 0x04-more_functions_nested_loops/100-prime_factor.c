#include <stdio.h>

/*
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long m, k;

	m = 612852475143;

	for (k = 2; m > k; k++)
	{
		while (m % k == 0)
		{
			m = m / k;
		}
	}
	printf("%lu", k);
	putchar('\n');
	return (0);
}
