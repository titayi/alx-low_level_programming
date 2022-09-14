#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the character under check
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int m = n % 10;

	if (n < 0)
		m = m * -1;
	return (m);
}
