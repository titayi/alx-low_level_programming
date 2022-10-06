#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: Param 1
 * @old_size: Param 2
 * @new_size: Param 3
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i, max = new_size;
	char *w = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);

	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		p[i] = w[i];
	free(ptr);
	return (p);
}
