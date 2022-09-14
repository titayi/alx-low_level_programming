#include <stdio.h>

/**
 * main - Entry point
 * Description: computes and prints the sum of all the multiples of
 * * 3 or 5 below 1024 (excluded)
 * Return: 0
 */
int main(void)
{
	int m, res;

	for (m = 0; m < 1024; m++)
		if (m % 3 == 0 || m % 5 == 0)
			res += m;
	printf("%d\n", res);
	return (0);
}
