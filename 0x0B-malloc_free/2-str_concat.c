#include "main.h"
#include "stdlib.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: NULL on failure else success
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, ci = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	str = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[ci++] = s1[i];

	for (i = 0; s2[i]; i++)
		str[ci++] = s2[i];

	return (str);
}
