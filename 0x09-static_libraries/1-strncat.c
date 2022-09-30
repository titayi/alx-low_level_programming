#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: First param
 * @src: Second param
 * @n: Third param
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
