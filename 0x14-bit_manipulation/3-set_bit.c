#include "main.h"
#include <stdio.h>

/**
 * set_bit - A value of a bit to 1 at given index
 * @n: The bit
 * @index: The indeX
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
