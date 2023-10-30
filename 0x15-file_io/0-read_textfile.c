#include "main.h"
/**
 * read_textfile - func that reads a trxt file and prints it
 * @filename: pointer to a string
 * @letters: number of letters printed
 * Return: number of letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	ssize_t numread, numwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	numread = read(filedesc, buffer, letters);
	numwritten = write(STDOUT_FILENO, buffer, numread);

	close(filedesc);
	free(buffer);
	return (numwritten);
}
