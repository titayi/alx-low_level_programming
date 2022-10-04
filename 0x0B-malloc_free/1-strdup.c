#include "main.h"
#include "stdlib.h"

/**
 * _strdup - func returns a pointer to a newly allocated space in memory
 * @str: Param 1
 * Return: Returns NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *cp;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		cp[i] = str[i];
	}
	cp[len] = '\0';

	return (cp);
}
