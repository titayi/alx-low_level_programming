#include "main.h"

/**
 * _fizzbuzz - prints the numbers and words
 * Return: 0
 */
void _fizzbuzz(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			if (i % 5 == 0)
			{
				printf("Buzz");
			}
		}
		else 
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
