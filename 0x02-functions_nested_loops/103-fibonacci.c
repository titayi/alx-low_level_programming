#include<stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	unsigned long c, i, j, k, s;

	i = s = 0;
	j = i;

	for (c = 0; c < 50; c++)
	{
		k = i + j;
		i = j;
		j =k;
		if (k % 2 == 0 && k < 4000000)
		{
			s += k;
		}
	}
	printf("%lu\n", s);
	return (0);
}
