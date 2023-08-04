#include "main.h"

/**
 * _strchr - locates a character in string
 * @s: String
 * @c: characters to be located
 * Return: String after Character
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0' && *s == c)
	{
		return (s);
	}

	return (s + 1);
}
