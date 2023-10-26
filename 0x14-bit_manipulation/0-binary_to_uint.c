#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that convert binary number to unsigned int
 * @b: b is a character pointer to a string containing the binary number
 * Return: The converted output
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		a = (a << 1) | (b[index] - '0');
		index++;
	}
	return (a);
}
