#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL if fail.
 */

int *array_range(int min, int max)
{
	int *b;
	int i;

	if (min > max)
	{
		return (0);
	}

	b = malloc(((max - min) + 1) * sizeof(int));
	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < max - min + 1; i++)
	{
		*(b + i) = min + i;
	}
	return (b);
}
