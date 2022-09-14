#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 * @n: the checked character
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;
		_putchar(n + '0');
	return (n % 10);
}
