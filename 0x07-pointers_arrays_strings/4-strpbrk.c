#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: Param 1
 * @accept: Param 2
 * Return: byte in s that matches one in accept or null if none
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
