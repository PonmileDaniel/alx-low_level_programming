#include "main.h"
/**
 * print_error - check to print errror
 * @file_from: the code
 * @file_to: pointer to the messages
 * @argv: argument vectors
 * Return: no return
 */
void print_error(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - the main function
 * @argc: argument number
 * @argv: vectors argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t charn, w;
	char buffer[1024];
	charn = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
        file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0644);
	print_error(file_from, file_to, argv);

	while (charn == 1024)
	{
		charn = read(file_from, buffer, 1024);
		if (charn == -1)
			print_error(-1, 0, argv);
		w = write(file_to, buffer, charn);
		if (w == -1)
			print_error(0, -1, argv);
	}
	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
