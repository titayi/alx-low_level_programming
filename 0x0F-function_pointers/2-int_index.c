#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: Param 1
 * @size: Size of the array
 * @cmp: Pointer to the func to be use to compare values
 * Return: -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) == 1)
			{
				return (i);
			}
			i++;
		}
	}

	return (-1);
}
