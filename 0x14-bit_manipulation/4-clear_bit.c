#include "main.h"
#include <stddef.h>

/**
 * clear_bit - Func that set the value of a bit to zero
 * @n: Pointer to the number
 * @index: Position to change
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 1;
	num = num << index;

	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
	{
		return (-1);
	}
	if (*n & num)
		*n ^= num;
	return (1);
}
