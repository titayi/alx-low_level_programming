#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - func that returns sum
 * @n: Param
 * Return: 0 If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	int sum = 0;

	va_start(v, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(v, int);
		}
	}

	va_end(v);
	return (sum);
}
