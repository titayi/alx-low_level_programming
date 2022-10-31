#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @index: Starting index from 0 of the bit to be set
 * @n: Pointer to bit
 *
 * Return: 1 or -1 if error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
