#include "function_pointers.h"

/**
 * print_name - func that prints a name
 * @name: Param 1
 * @f: Param 2
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
