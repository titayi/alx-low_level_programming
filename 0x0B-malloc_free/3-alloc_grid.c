#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - func returns a pointer to a 2 dimen array of integers
 * @width: Param 1
 * @height: Param 2
 * Return: NULL else 0
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);

	if (arr != NULL)
	{
		for (; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(arr[i]);
					i--;
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
