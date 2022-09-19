#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the character
 */
void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		l = s[k];
		s[k] = s[j];
		s[j] = l;
		k++;
		j--;
	}
}
