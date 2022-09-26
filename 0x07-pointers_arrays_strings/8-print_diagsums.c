#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - func prints sum of two diagonals square matrix of integers
 * @a: Param 1
 * @size: Param 2
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[(size + 1) * i];
		s2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", s1, s2);
}
