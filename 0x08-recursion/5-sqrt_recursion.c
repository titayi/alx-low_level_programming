#include "main.h"

/**
 * sqrt_check - func that shecks for square root
 * @m: Param 1
 * @k: Param 2
 * Return: 0
 */

int sqrt_check(int m, int k)
{
	if (m * m == k)
		return (m);
	if (m * m > k)
		return (-1);

	return (sqrt_check(m + 1, k));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Parameter
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (sqrt_check(1, n));
}
