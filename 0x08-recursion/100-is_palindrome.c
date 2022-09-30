#include "main.h"

/**
 * is_palindrome - func that returns 1 if it is a palindrome and 0 if not
 * @s: Parameter
 * Return: 0
 */

int is_palindrome(char *s)
{
	int i;

	i = _strlen(s) -1;

	return (palindrome(0, i, s));
}
