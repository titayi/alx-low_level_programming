#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: param 1
 * @src: param 2
 * @n: param 3
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
		len++;
	while (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
