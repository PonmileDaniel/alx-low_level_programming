#include "main.h"

/**
 * flip_bits - changes the values
 * @n: Bits
 * @m: number 2
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int b;

	for (b = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			b++;
	}
	return (b);
}

