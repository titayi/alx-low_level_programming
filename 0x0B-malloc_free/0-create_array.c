#include "main.h"
#include "stdlib.h"

/**
 * create_array - func creates array of chars,
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Second param
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
