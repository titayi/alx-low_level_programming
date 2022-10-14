#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator:  string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, int));

		if (i != (n-1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(v);
}
