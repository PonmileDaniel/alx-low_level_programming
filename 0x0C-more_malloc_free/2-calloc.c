#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an  array
 * @nmemb: number of element in array
 * @size: number of element in each element of an array
 * Return: Nukk if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (0);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*(p + i) = 0;
	}
	return (p);
}
