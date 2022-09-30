#include "main.h"

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: 1st character
 * @src: 2nd character
 * Return: value of pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
