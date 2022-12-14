#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: The smallest value in the array
 * @max: The largest value num in the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, j;
	int *a;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
