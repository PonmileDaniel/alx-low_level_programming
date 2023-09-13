#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big
 */
int get_endianness(void)
{
	unsigned int i;
	char *a;

	i = 1;
	a = (char *) &i;

	return ((int)*a);
}
