#include "main.h"
#include <stdio.h>

/**
 * get_bit - This return the valuee of a bit
 * @index: The index
 * @n: Unsigned intZZ
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
