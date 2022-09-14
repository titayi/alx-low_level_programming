#include<stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int j, k, n, s;

	j = 1;
	k = 2;
	s = 0;

	for (i = 1; i < 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			s = s + j;
		}
		n = j + k;
		j = k;
		k = n;
	}
	printf("%lu\n", s);
	return (0);
}
