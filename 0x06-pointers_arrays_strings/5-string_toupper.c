#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * @s: parameter
 * Return: string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (str[i++])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}

	return (str);
}
