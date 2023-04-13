#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * the linear search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, value);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
