#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: Param 1
 * @c: Param 2
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
