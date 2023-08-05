#include <stdio.h>
#include <stdlib.h>

/**
 * main - program multiplies two number
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}

	return (0);
}
