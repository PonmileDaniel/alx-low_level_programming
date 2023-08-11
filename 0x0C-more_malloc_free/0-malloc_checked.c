#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocate memory
 * @b: bytes
 * Return: if 98 failed , return p
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
