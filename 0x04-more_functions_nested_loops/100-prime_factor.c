#include <stdio.h>

/*
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i = 2;
	unsigned long k = 0;
	unsigned long n = 612852475143;

	while (n > i)
	{
		while (n % i == 0)
		{
			if (i > k)
				k = i
			n = n / i;
		}
		i++;
	}
	printf("%lu\n", k);
	return (0);
}
