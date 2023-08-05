#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguement
 * @argv: Array of arguements
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
