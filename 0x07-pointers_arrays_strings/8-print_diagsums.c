#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of 2 diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	long int j = 0, k = 0;

	for (i = 0; i < size; i++)
	{
		k = k + *(a + i * size + i);
		j = j + *(a + i * size - 1);
	}

	printf("%ld, %ld\n", k, j);
}
