#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Points to the bit
 * @index: Starting index from 0 of the bit to be set
 *
 * Return: 1 or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
