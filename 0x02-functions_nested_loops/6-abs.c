#include "main.h"

/**
 * _abs - func that computes the absolute value of an integer
 *
 *@n: the character under check
 *
 * Return: n
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
