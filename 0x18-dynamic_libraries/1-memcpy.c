#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area
 * @dest: A pointer to the memory area to copy.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src
 *  Return: A pointer to the destination buffer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
