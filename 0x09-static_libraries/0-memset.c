#include "main.h"

/**
 * _memset - fill the first n bytes of the memory area pointed to by @s
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area
 * @n: The number of the byte to be filled
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
