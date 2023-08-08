#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - This helps function count the number of words in a string.
 * @s: string to be counted
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, x, y;

	flag = 0;
	y = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			y++;
		}
	}
	return (y);
}
/**
 * strtow - This function splits a string into words.
 * @str: string to be split
 *
 * Return: pointer to an array of strings (success) or NULL (error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int x, y = 0, len = 0, words, z = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (x = 0; x <= len; x++)
	{
		if (str[x] == ' ' || str[x] == '\0')
		{
			if (z)
			{
				end = x;
				tmp = (char *) malloc(sizeof(char) * (z + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - z;
				y++;
				z = 0;
			}
		}
		else if (z++ == 0)
			start = x;
	}

	matrix[y] = NULL;

	return (matrix);
}
