#include "main.h"
/**
 * flip_bits - func that returns the number of bits you would need
 * @n: First number to compare
 * @m: Second number to compare
 * Return: The number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned long int count;

	res = n ^ m;
	count = 0;
	while (res > 0)
	{
		if ((res & 1) == 1)
		{
			count++;
		}
		res = res >> 1;
	}
	return (count);
}
