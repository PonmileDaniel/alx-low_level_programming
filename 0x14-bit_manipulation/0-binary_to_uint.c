#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - A function that conert binary num to an int
 * @b: Binary input
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, result = 0;

	if (b == NULL)
		return (0);


	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = (result << 1) | 0;
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else 
		{
			return (0);
		}
	}
	return (result);
}
