#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - This fuction search fo an int
 * @array:  Array
 * @size: size of array
 * @cmp: point to the fuction
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
