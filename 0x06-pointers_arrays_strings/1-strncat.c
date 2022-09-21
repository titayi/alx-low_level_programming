#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * @n: 3rd parameter
 * Return: String
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;
	for (i = 0; src[i] < n; i++)
		dest[len] = src[i];
	return (dest);
}
