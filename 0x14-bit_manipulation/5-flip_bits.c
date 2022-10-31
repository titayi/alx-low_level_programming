#include "main.h"

/**
 * flip_bits - Returns No of bits needed to flip to get from one to another
 * @n: Initial number before flip
 * @m: Final number after flip
 *
 * Return: Number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bit = 0;

	while (flip > 0)
	{
		bit += (flip & 1);
		flip >>= 1;
	}

	return (bit);
}
