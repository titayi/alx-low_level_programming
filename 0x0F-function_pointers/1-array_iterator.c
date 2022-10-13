#include "function_pointers.h"

/**
 * array_iterator - func that executes a param function
 * @array: Param 1
 * @size: Size of the array
 * @action: pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		unsigned int i = 0;

		while (i < size)
		{
			(action)(array[i]);
			i++;
		}
	}
}
