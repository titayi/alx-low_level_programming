#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: Param 1
 * @src: Param 2
 * @n: Param 3
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
