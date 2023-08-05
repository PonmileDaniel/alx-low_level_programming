#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: number of arguement
 * @argv: Array of arguements
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
