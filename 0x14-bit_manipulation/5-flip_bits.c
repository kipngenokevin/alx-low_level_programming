#include "main.h"


/**
 * flip_bits - counts the number of bits needed.
 * @n: The number.
 * @m: The number to flip
 * Return: The number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int che = n ^ m, bits = 0;

	while (che > 0)
	{
		bits += (che & 1);
		che >>= 1;
	}

	return (bits);
}
