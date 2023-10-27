#include "main.h"
/**
 * get_endianness - checks the endian
 * Return: 0 if big, 1 if small
 */
int get_endianness(void)
{
	int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
