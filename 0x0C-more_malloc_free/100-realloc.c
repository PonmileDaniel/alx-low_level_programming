#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - This reallocates a memory block
 * @old_size: size, in bytes of the allocated space
 * @ptr: Pointe
 * @new_size: New sizw, in bytes of tje new memory block
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
