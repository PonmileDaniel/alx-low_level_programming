#include "main.h"

/**
 * _strien - returns the length of a string
 * @s: string wih length to be calculated.
 * Return: 0 if successful
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
