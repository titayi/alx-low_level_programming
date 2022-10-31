#include "main.h"

/**
 * Returns the value of a bit at a given index
 * @n: Bit value
 * @index: Starting index from 0 of the bit you want to get
 *
 * Return: Value of bit at index or -1 if error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
