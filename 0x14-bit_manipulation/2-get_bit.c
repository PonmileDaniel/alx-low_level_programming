#include "main.h"

/**
 * get_bit - The func return the value of a bit at a given index
 * @index: Index
 * @n: The number
 * Return: Integer 1 || 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		n = n >> 1;
	}
	return ((n & 1));
}
