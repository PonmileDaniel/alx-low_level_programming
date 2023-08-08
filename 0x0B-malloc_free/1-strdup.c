#include "main.h"
#include <stdlib.h>

/**
 * _strdup - func return a pointer to a newkly allocated space
 * @str: string
 * Return: Null
 */
char *_strdup(char *str)
{
	int i = 0, j;
	char *p;

	if (str == NULL)
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	p = malloc((i + 1) * sizeof(char));

	if (p == NULL)
	{
		return (0);
	}
	else
	{
		for (j = 0; j < i; j++)
		{
			*(p + j) = str[j];
		}
		p[j] = '\0';
	}
	return (p);
}
