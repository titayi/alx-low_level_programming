#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to char strings of 0 and 1
 * 
 * Return: Converted number, or 0 if
 * - there is one or more chars in the string b that is not 0 or 1
 * - b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num1 = 0, num2 = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i];)
		i++;

	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		       return (0);

	num1 += (b[i] - '0') * num2;
	num2 *= 2;	
	}
	return (num1);
}
