#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read a text file and print it to the POSIX standard
 * @filename: Points to the name of the file
 * @letters: letter
 * Return: The function fails or failname is NULL - 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buf;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	c = read(a, buf, letters);
	b = write(STDOUT_FILENO, buf, c);

	free(buf);
	close(a);
	return (b);
}
