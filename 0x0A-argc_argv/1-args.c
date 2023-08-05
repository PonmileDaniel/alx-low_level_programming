#include <stdio.h>

/**
 * main - prints number of arguement
 * @argc: arguement count
 * @argv: arguement vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	printf("%d\n", argc - 1);
	if (i > argc)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
