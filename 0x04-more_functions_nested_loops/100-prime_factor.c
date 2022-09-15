#include <stdio.h>

/*
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	long int i = 612852475143;
	long int l;

	for (l = 2; l < i; l++)
	{
		if (i % l == 0)
		{
			i = i / l;
		}
	}
	printf("%ld\n", l);
	return (0);
}
