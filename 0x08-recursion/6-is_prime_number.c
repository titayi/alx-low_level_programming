#include "main.h"

/**
 * _evaluate_prime - Entry point
 * @i: Param 1
 * @j: Param 2
 * Return: 0
 */

int _evaluate_prime(int i, int j)
{
	if (i == j)
		return (1);

	else if (i % j == 0)
		return (0);

	return (_evaluate_prime(i, j + 1));
}

/**
 * is_prime_number - func returns 1 if the integer is a prime number
 * @n: Paramter
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (_evaluate_prime(n, 2));
}
