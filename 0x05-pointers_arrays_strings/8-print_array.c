#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: first parameter
 * @n: second parameter
 */
void print_array(int *a, int n)
{
	int m;

	if (n > 0)
	{
		for (m = 0; n > m; m++)
		{
			if (m != n - 1)
			{
				Printf("%d, ", a[m]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf('\n');
}
