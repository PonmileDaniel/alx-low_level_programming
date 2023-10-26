#include "main.h"
/**
 * set_bit - set the bit of a number to the vslue of 1
 * @n: points to the bit to be manipulated
 * @index: position of the bit
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
